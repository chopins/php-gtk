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
use FFI;
use FFI\CData;
use FFI\ParserException;
use Gtk\App;
use ReflectionClass;
use ReflectionException;
use RuntimeException;
use ReflectionProperty;

abstract class GtkFFI
{

    use Builtin;

    public static bool $isDebug = false;
    public static int $gCallbackArgNum = 10;
    protected ?App $main = null;
    protected string $headerDir = '';
    protected string $struct = '';
    protected $libdir = '';
    protected static ?FFI $ffi = null;
    private array $callMap = [];
    private string $firstDir = '';
    private static array $unimplement = [];

    protected const ID = null;
    protected const MATCH_FULL = [];
    protected const MATCH_PREFIX = [];
    protected const UNIMPLEMENT = [];
    protected const GLOBAL_VAL = [];

    final public function __construct(App $main, $libdir = null)
    {
        $this->initDebugStatus();
        $this->main = $main;
        $this->headerDir = __DIR__ . '/include';
        $this->struct();
        $this->libdir = $libdir ?? (PHP_INT_SIZE === 4 ? '/usr/lib' : '/usr/lib64');
        $this->recursiveCDef();
    }

    final public function initDebugStatus()
    {
        self::$isDebug = defined('DEV_DEBUG') && constant('DEV_DEBUG');
    }

    private function struct()
    {
        $this->struct = file_get_contents($this->headerDir . '/struct.h');
        $args = trim(str_repeat('void*,', self::$gCallbackArgNum), ',');
        $this->struct = str_replace('##GCallbackArgListString##', $args, $this->struct);
    }

    private function recursiveCDef()
    {
        $class = get_class($this);
        $this->initCDef($class);
        while ($class = get_parent_class($class)) {
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
            if (
                $ffiRef->getDeclaringClass()->name !== $class ||
                !$ffiRef->isStatic() ||
                !$ffiRef->isProtected()
            ) {
                $this->declareException($class, $msg);
            }

            foreach (['ID', 'MATCH_PREFIX', 'MATCH_FULL', 'UNIMPLEMENT', 'GLOBAL_VAL'] as $c) {
                $msg = "protected const $c";
                $cr = $classRef->getReflectionConstant($c);
                if (($cr->getDeclaringClass()->name !== $class || !$cr->isProtected())) {
                    $this->declareException($class, $msg);
                }
            }

            $msg = 'protected static compileVersion()';
            $m = $classRef->getMethod('compileVersion');

            if ($m->getDeclaringClass()->name !== $class || !$m->isStatic() || !$m->isProtected()) {
                $this->declareException($class, $msg);
            }
        } catch (ReflectionException $e) {
            $this->declareException($class, $msg);
        }
    }

    private function initCDef($class)
    {
        if (self::$isDebug) {
            $this->checkDeclare($class);
        }
        if ($class::$ffi === null && $class::ID) {
            $class::$ffi = $this->cdef($class::ID);
            $class::compileVersion();
            $this->callMap[$class::ID] = [
                'ffi' => $class::$ffi,
                'prefix' => $class::MATCH_PREFIX,
                'full' => $class::MATCH_FULL,
                'var' => $class::GLOBAL_VAL,
            ];
            self::$unimplement = array_merge(self::$unimplement, $class::UNIMPLEMENT);
        }
    }

    private function cdef($lib)
    {
        $config = $this->main::$gtkDllMap[$lib];
        do {
            if (is_array($this->libdir)) {
                if (isset($this->libdir[$lib])) {
                    $libpath = $this->libdir[$lib];
                    break;
                }
                if (!$this->firstDir) {
                    reset($this->libdir);
                    $first = current($this->libdir);
                    $this->firstDir = dirname($first);
                }
                $libpath = $this->firstDir . "/{$config['name']}." . PHP_SHLIB_SUFFIX;
            } else {
                $this->firstDir = $this->libdir;
                $libpath = $this->libdir . "/{$config['name']}." . PHP_SHLIB_SUFFIX;
            }
        } while (0);

        $code = ['struct' => $this->struct];
        foreach ($config['header'] as $h) {
            $code[$h] = file_get_contents($this->headerDir . "/$h.h");
        }

        try {
            return FFI::cdef(
                join($code),
                $libpath
            );
        } catch (ParserException $e) {
            if (self::$isDebug) {
                $message = $e->getMessage();
                preg_match('(\d+)', $e->getMessage(), $m);
                foreach ($code as $f => $c) {
                    $fl = substr_count($c, "\n") + 1;
                    if ($m[0] > $fl) {
                        $m[0] = $m[0] - $fl + 1;
                    } else {
                        break;
                    }
                }
                $message .= "; Actual at line {$m[0]} in file $f.h";
            }
            throw new ParserException($message, $e->getCode(), $e);
        }
    }

    public function type($type, GtkFFI $obj)
    {
        $ffi = $this->currentFFI($obj);
        return $this->main->new($type, $ffi);
    }

    public function new($type, bool $owned = true, bool $persistent = false, GtkFFI $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return $this->main->new($type, $owned, $persistent, $ffi);
    }

    public function currentFFI($obj = null)
    {
        if ($obj) {
            $ffi = $obj::$ffi;
        } elseif ($obj === null) {
            $ffi = $this::$ffi;
        } else {
            $ffi = null;
        }
        return $ffi;
    }

    public function cast($type, CData $cdata, GtkFFI $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return $this->main->cast($type, $cdata, $ffi);
    }

    public function trunCast(CData $i, array $type, GtkFFI $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return $this->main->trunCast($i, $type, $ffi);
    }

    public function free($cdata)
    {
        return $this->main->free($cdata);
    }

    protected function dynCall($name, &$ret = null)
    {
    }

    protected function dynGet($name, &$ret = null)
    {
    }

    final public function __call($name, $arguments)
    {
        $ret = false;
        $dynReturn = $this->dynCall($name, $arguments, $ret);
        if ($ret) {
            return $dynReturn;
        }

        foreach (self::$unimplement as $ps) {
            if ($this->main->str0($name, $ps)) {
                throw new RuntimeException("C macro '$name' can not implemented or deprecated");
            }
        }

        $prefixIdx = null;
        foreach ($this->callMap as $i => $a) {
            if (in_array($name, $a['full'])) {
                return $a['ffi']->$name(...$arguments);
            }
            foreach ($a['prefix'] as $p) {
                if ($this->main->str0($name, $p)) {
                    $prefixIdx = $i;
                    break;
                }
            }
        }

        if ($prefixIdx !== null) {
            return $this->callMap[$prefixIdx]['ffi']->$name(...$arguments);
        }

        $macroFunc = "_MACRO_$name";
        if (strtoupper($name) === $name && \method_exists($this, $macroFunc)) {
            return $this->$macroFunc(...$arguments);
        }

        $class = get_class($this);
        throw new BadMethodCallException("Call to undefined method $class::$name()");
    }

    final public function __get($name)
    {
        $ret = false;
        $dynReturn = $this->dynGet($name, $ret);
        if ($ret) {
            return $dynReturn;
        }

        $prefixIdx = null;
        foreach ($this->callMap as $i => $a) {
            if (isset($a['var'][$name]) && $a['var'][$name] === 0) {
                return $a['ffi']->$name;
            }
            foreach ($a['var'] as $p) {
                if ($this->main->str0($name, $p)) {
                    $prefixIdx = $i;
                }
            }
        }
        if ($prefixIdx !== null) {
            return $this->callMap[$prefixIdx]['ffi']->$name;
        }
        $class = get_class($this);
        try {
            $ref = new ReflectionProperty($this, $name);
            if ($ref->isStatic()) {
                return $class::$$name;
            } else {
                return $this->$$name;
            }
        } catch (ReflectionException $e) {
        }

        throw new RuntimeException("Get undefined property $class::\$$name");
    }
}
