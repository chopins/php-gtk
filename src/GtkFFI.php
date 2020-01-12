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

abstract class GtkFFI
{
    use  Builtin;

    protected static $main = null;
    protected static $headerDir = '';
    protected static $struct = '';
    protected static $libdir = '';
    private static $callMap = [];

    public function __construct(App $main, $libdir = null)
    {
        self::$main = $main;
        self::$headerDir = __DIR__ . '/include';
        self::$struct = file_get_contents(self::$headerDir . '/struct.h');
        self::$libdir = $libdir ?? (PHP_INT_SIZE === 4 ? '/usr/lib' : '/usr/lib64');
    }

    protected function cdef($lib)
    {
        $config = self::$main::$gtkDllMap[$lib];
        if (is_array(self::$libdir)) {
            $libpath = self::$libdir[$config['name']];
        } else {
            $libpath = self::$libdir . "/{$config['name']}." . PHP_SHLIB_SUFFIX;
        }

        $code = '';
        foreach ($config['header'] as $h) {
            $code .= file_get_contents(self::$headerDir . "/$h.h");
        }

        try {
            return FFI::cdef(
                self::$struct . $code,
                $libpath
            );
        } catch (ParserException $e) {
            preg_match('(\d+)', $e->getMessage(), $m);
            var_dump($m[0] - 14154);
            throw $e;
        }
    }

    protected function unimplement($name)
    {
    }

    public function new($type, bool $owned = true, bool $persistent = false, GtkFFI $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return self::$main->new($type, $owned, $persistent, $ffi);
    }

    public function currentFFI($obj = null)
    {
        if ($obj) {
            $ffi = $obj->getFFI();
        } elseif ($obj === null) {
            $ffi = $this->getFFI();
        } else {
            $ffi = null;
        }
        return $ffi;
    }

    public function cast($type, CData $cdata, GtkFFI $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return self::$main->cast($type, $cdata, $ffi);
    }

    public function trunCast(CData $i, array $type, GtkFFI $obj = null)
    {
        $ffi = $this->currentFFI($obj);
        return self::$main->trunCast($i, $type, $ffi);
    }

    public function free($cdata)
    {
        return self::$main->free($cdata);
    }

    abstract public function getFFI();
    abstract public function bindMethod();

    public function registerCall(string $id, FFI $obj, array $prefix = [], array $full = [])
    {
        self::$callMap[$id] = ['ffi' => $obj, 'prefix' => $prefix, 'full' => $full];
    }


    final public function __call($name, $arguments)
    {
        if (function_exists($name)) {
            return $name(...$arguments);
        }
        $this->unimplement($name);
        $this->bindMethod();

        $prefixIdx = false;
        foreach (self::$callMap as $i => $a) {
            if (in_array($name, $a['full'])) {
                return $a['ffi']->$name(...$arguments);
            } else {
                foreach ($a['prefix'] as $p) {
                    if (self::$main->str0($name, $p)) {
                        $prefixIdx = $i;
                        break;
                    }
                }
            }
        }

        if ($prefixIdx !== false) {
            return self::$callMap[$prefixIdx]['ffi']->$name(...$arguments);
        }

        $class = get_called_class();
        throw new BadMethodCallException("Call to undefined method $class::$name()");
    }

    public function __get($name)
    {
        if ($name === 'ffi') {
            return $this;
        }
        return self::$$name;
    }
}
