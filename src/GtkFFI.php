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
use Gtk\Gtk;
use GtK\GLib\DefineValue;
use Gtk\GLib\Version;
use Gtk\GLib\Define as GLibDefine;
use Gtk\GObject\Define as GObjectDefine;
use Gtk\Gtk\Define as GtkDefine;


class GtkFFI implements DefineValue
{
    use Version, GLibDefine, GObjectDefine, GtkDefine;
    private static $gtk = null;
    private static $gobject = null;
    private static $gio = null;
    private static $main = null;
    public function __construct(Gtk $main, string $libdir = null)
    {
        self::$main = $main;
        $include = __DIR__ . '/include';
        $struct = file_get_contents("$include/struct.h");
        $libdir = $libdir ?? (PHP_INT_SIZE === 4 ? '/usr/lib' : '/usr/lib64');

        if (self::$gtk === null) {
            $gtklib = "$libdir/libgtk-3." . PHP_SHLIB_SUFFIX;
            self::$gtk = FFI::cdef(
                $struct .
                    file_get_contents("$include/gtkfunc.h"),
                $gtklib
            );
            $this->compileVersion();
        }
        if (self::$gobject === null) {
            $gobjectlib = "$libdir/libgobject-2.0." . PHP_SHLIB_SUFFIX;
            self::$gobject = FFI::cdef(
                $struct .
                    file_get_contents("$include/gobject.h") .
                    file_get_contents("$include/gtype.h"),
                $gobjectlib
            );
        }
        if (self::$gio === null) {
            $giolib = "$libdir/libgio-2.0." . PHP_SHLIB_SUFFIX;
            self::$gio = FFI::cdef(
                $struct .
                    file_get_contents("$include/appliaction.h"),
                $giolib
            );
        }
    }

    public function gtk_init(int $argc = 0, array $argv = [])
    {
        $argcPtr = $this->new("int32_t", true, false);
        $argcPtr->cdata = $argc;
        $ptr3 = FFI::addr(self::$main->argArrPtr($argc, $argv));
        return self::$gtk->gtk_init(FFI::addr($argcPtr), $ptr3);
    }

    public function g_application_run($gapp, $argc = 0, $argv = [])
    {
        $argvPtr = self::$main->argArrPtr($argc, $argv);
        return self::$gio->g_application_run($gapp, $argc, $argvPtr);
    }

    public function new($type, bool $owned = true, bool $persistent = false, string $ffi = 'gtk')
    {
        $ffi = $ffi ? self::$$ffi : null;
        return self::$main->new($type, $owned, $persistent, $ffi);
    }

    public function cast($type, CData $cdata, string $ffi = 'gtk')
    {
        return self::$main->cast($type, $cdata, $ffi ? self::$$ffi : null);
    }

    public function trunCast(CData $i, array $type, string $ffi = 'gtk')
    {
        if ($ffi) {
            $ffi = self::$$ffi;
        }
        return self::$main->trunCast($i, $type, $ffi);
    }

    public function free($cdata)
    {
        return self::$main->free($cdata);
    }

    public function g_signal_connect($instance, $detailed_signal, $c_handler, $data = null)
    {
        return self::$gobject->g_signal_connect_data($instance, $detailed_signal, $c_handler, $data, null, null);
    }

    public function __call($name, $arguments)
    {
        if (function_exists($name)) {
            return $name(...$arguments);
        }
        if (self::$main->str0($name, 'g_application_')) {
            return self::$gio->$name(...$arguments);
        } elseif (self::$main->str0($name, 'g_')) {
            return self::$gobject->$name(...$arguments);
        } elseif (self::$main->str0($name, 'gtk_')) {
            return self::$gtk->$name(...$arguments);
        }
        $class = get_called_class();
        throw new BadMethodCallException("Call to undefined method $class::$name()");
    }

    public function __get($name)
    {
        return self::$$name;
    }
}
