<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace Gtk;

use BadMethodCallException;
use FFI\CData;
use FFI\ParserException;
use Gtk\FFI;
use Gtk\PHPGtk;
use ReflectionClass;
use ReflectionException;
use ReflectionProperty;
use RuntimeException;

abstract class GtkAbstract
{

    use Builtin;

    public static bool $isDebug = false;
    public static int $gCallbackArgNum = 10;
    protected ?PHPGtk $main = null;
    protected string $headerDir = '';
    protected string $struct = '';
    protected $libdir = '';
    protected static ?FFI $ffi = null;
    private array $callMap = [];
    private static array $unimplement = [];

    protected const ID = null;
    protected const UNIMPLEMENT = [];

    final public function __construct(PHPGtk $main, ?string $libdir = null)
    {
        $this->initDebugStatus();
        $this->main = $main;
        $this->headerDir = __DIR__ . '/include';
        $this->struct();
        $this->libdir = $libdir ?? (PHP_INT_SIZE === 4 ? '/usr/lib' : '/usr/lib64');
        putenv("PATH={$this->libdir};" . getenv('PATH'));
        $this->recursiveCDef();
    }

    final public function initDebugStatus()
    {
        self::$isDebug = (defined('PHP_GTK_DEV_DEBUG') && constant('PHP_GTK_DEV_DEBUG'));
    }

    final public function requireMinVersion($id, $currentVersion)
    {
        $requireVersion = $this->main::$gtkDllMap[$id]['require_version'];
        if(version_compare($requireVersion, $currentVersion) > 0) {
            $libname = $this->main::$gtkDllMap[$id]['name'];
            throw new RuntimeException("GTK lib '$libname' require version >= $requireVersion, current $currentVersion");
        }
    }

    final protected function preLoad($id, $code)
    {
        $config = $this->main::$gtkDllMap[$id];
        $libpath = $this->findDll($config['name']);
        return FFI::cdef($code, $libpath);
    }

    private function struct()
    {
        $this->struct = file_get_contents($this->headerDir . '/struct.h');
        $args = trim(str_repeat('void*,', self::$gCallbackArgNum), ',');
        $this->struct = str_replace('##GCallbackArgListString##', $args, $this->struct);
    }

    protected function availableIn(&$code)
    {
        if(PHP_OS_WIN) {
            $code = str_replace("LIBGTK_FUNC_AVAILABLE_IN_UINX", '// ', $code);
            $code = str_replace("LIBGTK_FUNC_AVAILABLE_IN_WIN", 'extern ', $code);
        } else {
            $code = str_replace("LIBGTK_FUNC_AVAILABLE_IN_UINX ", 'extern ', $code);
            $code = str_replace("LIBGTK_FUNC_AVAILABLE_IN_WIN", '// ', $code);
        }
    }

    private function recursiveCDef()
    {
        $class = get_class($this);
        $this->initCDef($class);
        while($class = get_parent_class($class)) {
            $this->initCDef($class);
        }
    }

    protected static function compileVersion()
    {
        
    }

    private function declareException($class, $msg)
    {
        throw new RuntimeException("$class must declare '$msg'");
    }

    private function checkDeclare($class)
    {
        $classRef = new ReflectionClass($class);
        try {
            $msg = 'protected static \$ffi';
            $ffiRef = $classRef->getProperty('ffi');
            if(
                $ffiRef->getDeclaringClass()->name !== $class ||
                !$ffiRef->isStatic() ||
                !$ffiRef->isProtected()
            ) {
                $this->declareException($class, $msg);
            }

            foreach(['ID', 'UNIMPLEMENT'] as $c) {
                $msg = "protected const $c";
                $cr = $classRef->getReflectionConstant($c);
                if(($cr->getDeclaringClass()->name !== $class || !$cr->isProtected())) {
                    $this->declareException($class, $msg);
                }
            }

            $msg = 'protected static compileVersion()';
            $m = $classRef->getMethod('compileVersion');

            if($m->getDeclaringClass()->name !== $class || !$m->isStatic() || !$m->isProtected()) {
                $this->declareException($class, $msg);
            }
        } catch(ReflectionException $e) {
            $this->declareException($class, $msg);
        }
    }

    private function initCDef($class)
    {
        if(self::$isDebug) {
            $this->checkDeclare($class);
        }
        if($class::$ffi === null && $class::ID) {
            $class::$ffi = $this->cdef($class::ID);
            $class::compileVersion();
            $this->callMap[$class::ID] = $class::$ffi;
            self::$unimplement = array_merge(self::$unimplement, $class::UNIMPLEMENT);
        }
    }

    protected function findDll($name)
    {
        $r = glob($this->libdir . "/{$name}*." . PHP_SHLIB_SUFFIX, GLOB_NOSORT | GLOB_NOESCAPE | GLOB_ERR);
        if($r) {
            return $r[0];
        }
        throw new RuntimeException($this->libdir . "/{$name}*." . PHP_SHLIB_SUFFIX . ' not found');
    }

    protected function versionReplace(&$code, $macro, $version, $currentVersion)
    {
        $v = str_replace('.', '_', $version);
        if(version_compare($currentVersion, $version) >= 0) {
            $code = str_replace("{$macro}_{$v} ", 'extern ', $code);
        } else {
            $code = str_replace("{$macro}_{$v} ", '// ', $code);
        }
    }

    private function cdef($libId)
    {
        $config = $this->main::$gtkDllMap[$libId];
        $libpath = $this->findDll($config['name']);

        $code = ['struct' => $this->struct];
        foreach($config['header'] as $h) {
            $code[$h] = file_get_contents($this->headerDir . "/$h.h");
        }

        try {
            $codeStr = join($code);
            $this->availableIn($codeStr);
            $ffiObj = FFI::cdef($codeStr, $libpath);
            $ffiObj->id($libId);
            return $ffiObj;
        } catch(ParserException $e) {
            $this->debugException($e, $code);
        } catch(\FFI\Exception $e) {
            $this->debugException($e, $libpath);
        }
    }

    private function debugException($e, &$code)
    {
        $message = $e->getMessage();
        if(self::$isDebug && is_array($code)) {
            $m = [];
            preg_match('(\d+)', $e->getMessage(), $m);
            foreach($code as $f => $c) {
                $fl = substr_count($c, "\n") + 1;
                if($m[0] > $fl) {
                    $m[0] = $m[0] - $fl + 1;
                } else {
                    break;
                }
            }
            $message .= "; Actual at line {$m[0]} in file $f.h";
        } else {
            $message .= "; load $code";
        }
        throw new ParserException($message, $e->getCode());
    }

    public function type($type, ?GtkAbstract $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return $ffi->type($type);
    }

    public function new($type, bool $owned = true, bool $persistent = false, GtkAbstract $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return $this->main->new($type, $owned, $persistent, $ffi);
    }

    public function currentFFI($obj = null)
    {
        if($obj) {
            $ffi = $obj::$ffi;
        } elseif($obj === null) {
            $ffi = $this::$ffi;
        } else {
            $ffi = null;
        }
        return $ffi;
    }

    public function cast($type, CData $cdata, GtkAbstract $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return $this->main->cast($type, $cdata, $ffi);
    }

    public function trunCast(CData $i, array $type, GtkAbstract $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return $this->main->trunCast($i, $type, $ffi);
    }

    public function free($cdata)
    {
        return $this->main->free($cdata);
    }

    protected function dynCall($name, $arguments = [], &$ret = null)
    {
        
    }

    protected function dynGet($name, &$hasRet = false)
    {
        
    }

    final public function getFFIOfFunc($func)
    {
        foreach($this->callMap as $a) {
            if($a->ffiExt()->hasCFunc($a->getFFI(), $func)) {
                return $a;
            }
        }
        return null;
    }

    final public function __call($name, $arguments)
    {
        $ret = false;
        $dynReturn = $this->dynCall($name, $arguments, $ret);
        if($ret) {
            return $dynReturn;
        }

        foreach(self::$unimplement as $ps) {
            if($this->main->str0($name, $ps)) {
                throw new RuntimeException("C macro '$name' can not implemented or deprecated");
            }
        }

        $ffi = $this->getFFIOfFunc($name);

        if($ffi !== null) {
            return $ffi->$name(...$arguments);
        }

        $macroFunc = "_MACRO_$name";
        if(strtoupper($name) === $name && \method_exists($this, $macroFunc)) {
            return $this->$macroFunc(...$arguments);
        }

        $class = get_class($this);
        throw new BadMethodCallException("Call to undefined method $class::$name()");
    }

    final public function __get($name)
    {
        $ret = false;
        $dynReturn = $this->dynGet($name, $ret);
        if($ret) {
            return $dynReturn;
        }

        foreach($this->callMap as $a) {
            if($a->ffiExt()->hasCVariable($a->getFFI(), $name)) {
                return $a->$name;
            }elseif($a->ffiExt()->hasCEnum($a->getFFI(), $name)) {
                return $a->$name;
            }
        }

        $class = get_class($this);
        try {
            $ref = new ReflectionProperty($this, $name);
            if($ref->isStatic()) {
                return $class::$$name;
            } else {
                return $this->$$name;
            }
        } catch(ReflectionException $e) {
            
        }

        throw new RuntimeException("Get undefined property $class::\$$name");
    }

}
