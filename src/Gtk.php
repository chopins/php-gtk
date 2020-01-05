<?php

namespace GTK;

use Closure;
use FFI;
use FFI\CData;
use InvalidArgumentException;

class Gtk
{
    private static $gtk = null;
    private static $gobject = null;
    private static $gio = null;
    public function __construct($libdir = null)
    {
        self::autoload();
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
                $struct . file_get_contents("$include/appliaction.h"),
                $giolib
            );
        }
    }

    public function g_signal_connect($instance, $detailed_signal, $c_handler, $data = null)
    {
        return self::$gobject->g_signal_connect_data($instance, $detailed_signal, $c_handler, $data, null, null);
    }
    public function G_APPLICATION($app)
    {
        $gtype = self::$gobject->cast('GTypeInstance*', $app);
        $gapp = self::$gobject->g_type_check_instance_cast($gtype, self::$gio->g_application_get_type());
        $gapplication = self::$gio->new('GApplication', false, true);
        FFI::memcpy($gapplication, $gapp[0], FFI::sizeof($gapp[0]));
        return FFI::addr($gapplication);
    }

    public function GTK_WINDOW($window)
    {
        $gtype = self::$gtk->cast('GTypeInstance*', $window);
        return self::$gtk->cast('GtkWindow*', $this->g_type_check_instance_cast($gtype, $this->gtk_window_get_type()));
    }
    public function __call($name, $arguments)
    {
        if (strpos($name, 'g_application_') === 0) {
            return self::$gio->$name(...$arguments);
        } elseif (strpos($name, 'g_') === 0) {
            return self::$gobject->$name(...$arguments);
        } elseif (strpos($name, 'gtk_') === 0) {
            return self::$gtk->$name(...$arguments);
        }
    }

    public function __get($name)
    {
        return self::$$name;
    }

    public static function autoload()
    {
        spl_autoload_register(function ($class) {
            $classInfo = explode('\\', $class);
            array_shift($classInfo);
            array_unshift($classInfo, __DIR__);
            $path = join(DIRECTORY_SEPARATOR, $classInfo) . '.php';
            echo $path;
            if (file_exists($path)) {
                include_once $path;
            }
        });
    }
}
