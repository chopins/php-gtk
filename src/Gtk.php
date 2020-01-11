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

use FFI;
use FFI\CData;
use InvalidArgumentException;
use SplObjectStorage;

class Gtk
{
    private static $instance = null;
    private static $unmanagedCData = null;
    public function __construct($libdir = null)
    {
        static $enable = false;
        if ($enable) {
            return;
        }
        $enable = true;
        $this->complieDefineValue();
        $this->autoload();
        self::$unmanagedCData = new SplObjectStorage;
        self::$instance = new GtkFFI($this, $libdir);
    }

    private function complieDefineValue()
    {
        if (!defined('PHP_OS_WIN') && strcasecmp(PHP_OS_FAMILY, 'Windows') === 0) {
            define('PHP_OS_WIN', true);
        } else {
            define('PHP_OS_WIN', false);
        }
    }

    public function str0(string $str, string $begin): bool
    {
        return strpos($str, $begin) === 0;
    }

    public function new($type, $owned = true, $persistent = false, FFI $ffi = null): CData
    {
        if ($ffi) {
            $cdata = $ffi->new($type, $owned, $persistent);
        } else {
            $cdata = FFI::new($type, $owned, $persistent);
        }
        if (!$owned) {
            self::$unmanagedCData->attach($cdata);
        }
        return $cdata;
    }

    public function free($cdata = null): bool
    {
        if ($cdata) {
            FFI::free($cdata);
            if (self::$unmanagedCData->contains($cdata)) {
                self::$unmanagedCData->detach($cdata);
            }
            return true;
        }
        foreach (self::$unmanagedCData  as $cdata) {
            FFI::free($cdata);
            self::$unmanagedCData->detach($cdata);
        }
        return true;
    }

    /**
     * PHP array to C Data of char*[] type
     *
     * @param integer $argc   number of elements in given array
     * @param array $argv   given array
     * @return CData
     */
    public function argArrPtr(int $argc, array $argv): CData
    {
        $p = $this->new("char *[$argc]", false);
        self::$unmanagedCData->attach($p);
        foreach ($argv as $i => $arg) {
            $a = $this->strToCharPtr($arg);
            $p[0] = $a;
        }
        return FFI::addr($p[0]);
    }

    /**
     * PHP string to C pointer of char** type
     *
     * @param string $string
     * @return CData
     */
    public function strToCharPtr(string $string): CData
    {
        $charArr = $this->strToCharArr($string);
        return FFI::addr($charArr[0]);
    }

    /**
     * PHP string to  C Data of char[] type
     *
     * @param string $string
     * @return CData
     */
    public function strToCharArr(string $string): CData
    {
        $len = strlen($string);
        $charArr = $this->new("char[$len]", false);
        FFI::memcpy($charArr, $string, $len);
        return $charArr;
    }

    public function trunCast(CData $i, array $type, $ffi = null)
    {
        if(count($type) < 1) {
            throw new InvalidArgumentException(__METHOD__ . "() paramter 2 can not empty");
        }
        foreach ($type as $t) {
            $i = $this->cast($t, $i, $ffi);
        }
        return $i;
    }

    public function cast($type, CData $i, $ffi = null)
    {
        return $ffi ? $ffi->cast($type, $i) : FFI::cast($type, $i);
    }

    public function __get($name)
    {
        return self::$instance->$name;
    }

    public function __set($name, $v)
    {
        return self::$instance->$name = $v;
    }

    public function __call($name, $arguments)
    {
        return self::$instance->$name(...$arguments);
    }

    public static function __callStatic($name, $arguments)
    {
        return self::$instance::$name(...$arguments);
    }

    public function autoload()
    {
        spl_autoload_register(function ($class) {
            $classInfo = explode('\\', $class);
            array_shift($classInfo);
            array_unshift($classInfo, __DIR__);
            $path = join(DIRECTORY_SEPARATOR, $classInfo) . '.php';
            if (file_exists($path)) {
                include_once $path;
            }
        });
    }

    public function __destruct()
    {
        $this->free();
    }
}
