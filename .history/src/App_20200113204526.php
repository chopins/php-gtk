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
use Gtk\Gtk;

(function () {
    foreach ([
        'PHP_GTK_ID_GLIB' => 'glib',
        'PHP_GTK_ID_GIO' => 'gio',
        'PHP_GTK_ID_GOBJECT' => 'gobject',
        'PHP_GTK_ID_GTK' => 'gtk',
        'PHP_GTK_ID_PANGO' => 'pango',
        'PHP_GTK_ID_GDK' => 'gdk',
        'PHP_GTK_ID_PIXBUF' => 'pixbuf',
        'PHP_GTK_ID_ATK' => 'atk',
    ] as $k => $n) {
        if (!defined($k)) {
            define($k, $n);
        }
    }
})();

class App
{
    private $ffi = null;
    private static $unmanagedCData = null;
    private $libdir = '';

    const GLIB_ID = PHP_GTK_ID_GLIB;
    const GIO_ID = PHP_GTK_ID_GIO;
    const GOBJECT_ID = PHP_GTK_ID_GOBJECT;
    const GTK_ID = PHP_GTK_ID_GTK;
    const GDK_ID = PHP_GTK_ID_GDK;
    const PANGO_ID = PHP_GTK_ID_PANGO;
    const PIXBUF_ID = PHP_GTK_ID_PIXBUF;
    const ATK_ID = PHP_GTK_ID_ATK;
    public static $gtkDllMap  = [
        self::GLIB_ID => ['name' => 'libglib-2.0', 'header' => ['glib']],
        self::GIO_ID => ['name' => 'libgio-2.0', 'header' => ['gio']],
        self::GOBJECT_ID => ['name' => 'libgobject-2.0', 'header' => ['gtype', 'gobject']],
        self::GTK_ID => ['name' => 'libgtk-3', 'header' => ['gtkfunc']],
        self::GDK_ID => ['name' => 'libgdk-3', 'header' => ['gdk']],
        self::PIXBUF_ID => ['name' => 'libgdk_pixbuf-2.0', 'header' => ['pixbuf']],
        self::PANGO_ID => ['name' => 'libpango-1.0', 'header' => ['pango']],
        self::ATK_ID => ['name' => 'libatk-1.0', 'header' => ['atk']],
    ];

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
        $this->libdir = $libdir;
        $this->ffi = new Gtk($this, $libdir);
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
        if (count($type) < 1) {
            throw new InvalidArgumentException(__METHOD__ . "() paramter 2 can not empty array");
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

    public function function atk()
    {
        return new Atk($this, $this->libdir);
    }

    public function __get($name)
    {
        return $this->ffi->$name;
    }

    public function __set($name, $v)
    {
        return $this->ffi->$name = $v;
    }

    public function __call($name, $arguments)
    {
        return $this->ffi->$name(...$arguments);
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
