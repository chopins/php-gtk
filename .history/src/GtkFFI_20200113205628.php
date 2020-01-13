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
use RuntimeException;
use FFI;
use FFI\CData;
use FFI\ParserException;
use Gtk\App;
use ReflectionClassConstant;

abstract class GtkFFI
{
    use  Builtin;

    protected $main = null;
    protected $headerDir = '';
    protected $struct = '';
    protected $libdir = '';
    private $callMap = [];
    private $firstDir = '';
    protected static $ffi = null;
    protected static $unimplement = [];
    const ID = null;
    const MATCH_FULL = [];
    const MATCH_PREFIX = [];
    const UNIMPLEMENT = [];

    final public function __construct(App $main, $libdir = null)
    {
        $this->main = $main;
        $this->headerDir = __DIR__ . '/include';
        $this->struct = file_get_contents($this->headerDir . '/struct.h');
        $this->libdir = $libdir ?? (PHP_INT_SIZE === 4 ? '/usr/lib' : '/usr/lib64');
        $this->upperCDef();
    }

    private function upperCDef()
    {
        $class = get_class($this);
        $this->initCDef($class);
        while ($class = get_parent_class($class)) {
            $this->initCDef($class);
        }
    }

    final function checkDeclareConstant($class, $name)
    {
        return (new ReflectionClassConstant($class, $name))->getDeclaringClass()->name === $class;
    }

    private function initCDef($class)
    {
        if((new ReflectionProperty($class, 'ffi'))->getDeclaringClass()->name !== $class)
        foreach(['ID', 'MATCH_PREFIX', 'MATCH_FULL', 'UNIMPLEMENT'] as $constant) {
            if(!$this->checkDeclareConstant($class, $constant)){
                throw new \CompileError("$class must declare '$constant' constant");
            }
        }
        
        if ($class::$ffi === null && $class::ID) {
            $class::$ffi  = $this->cdef($class::ID);
            $this->callMap[$class::ID] = [
                'ffi' => $class::$ffi,
                'prefix' => $class::MATCH_PREFIX,
                'full' => $class::MATCH_FULL
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

        $code = '';
        foreach ($config['header'] as $h) {
            $code .= file_get_contents($this->headerDir . "/$h.h");
        }

        try {
            return FFI::cdef(
                $this->struct . $code,
                $libpath
            );
        } catch (ParserException $e) {
            preg_match('(\d+)', $e->getMessage(), $m);
            var_dump($m[0] - substr_count($this->struct, "\n"));
            throw $e;
        }
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

    final public function __call($name, $arguments)
    {
        if (function_exists($name)) {
            return $name(...$arguments);
        }

        if (in_array($name, self::$unimplement)) {
            throw new RuntimeException("C macro $name() not implement");
        }

        $prefixIdx = false;
        foreach ($this->callMap as $i => $a) {
            if (in_array($name, $a['full'])) {
                return $a['ffi']->$name(...$arguments);
            } else {
                foreach ($a['prefix'] as $p) {
                    if ($this->main->str0($name, $p)) {
                        $prefixIdx = $i;
                        break;
                    }
                }
            }
        }

        if ($prefixIdx !== false) {
            return $this->callMap[$prefixIdx]['ffi']->$name(...$arguments);
        }

        $class = get_class($this);
        throw new BadMethodCallException("Call to undefined method $class::$name()");
    }

    public function __get($name)
    {
        return self::$$name;
    }
}
