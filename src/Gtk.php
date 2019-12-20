<?php

namespace GTK;

use FFI;
use FFI\CData;

class Gtk
{
    private static $gtk = null;
    private static $gobject = null;
    public function __construct($libdir = null)
    {
        self::autoload();
        $include = __DIR__ . '/include';
        $libdir = $libdir ?? (PHP_INT_SIZE === 4 ? '/usr/lib' : '/usr/lib64');
        if (self::$gtk === null) {
            $gtklib = "$libdir/libgtk-3." . PHP_SHLIB_SUFFIX;
            self::$gtk = FFI::cdef(
                file_get_contents("$include/struct.h") .
                    file_get_contents("$include/gtkfunc.h"),
                $gtklib
            );
        }
        if (self::$gobject === null) {
            $gobjectlib = "$libdir/libgobject-2.0." . PHP_SHLIB_SUFFIX;
            self::$gobject = FFI::cdef(
                file_get_contents("$include/struct.h") .
                    file_get_contents("$include/gobject.h"),
                $gobjectlib
            );
        }
    }

    public function g_signal_connect($instance, $detailed_signal, $c_handler, $data)
    {
        $data = $data ?? self::$gobject->cast('void*', 0);
        $notify = self::$gobject->cast('void*', 0);
        $flags = self::$gobject->cast('GConnectFlags', 0);
        return $this->g_signal_connect_data($instance, $detailed_signal, $c_handler, $data, $notify, $flags);
    }
    public function G_APPLICATION($app)
    {
        $gapp = $this->g_type_check_instance_cast(self::$gtk->cast('GTypeInstance*', $app), $this->g_application_get_type());
        return $this->cast('GApplication*', $gapp);
    }

    public function GTK_WINDOW($window)
    {
        return self::$gtk->cast('GtkWindow*', $this->g_type_check_instance_cast(self::$gtk->cast('GTypeInstance*', $window), $this->gtk_window_get_type()));
    }
    public function __call($name, $arguments)
    {
        if (strpos($name, 'g_') === 0) {
            return self::$gobject->$name(...$arguments);
        } elseif (strpos($name, 'gtk_') === 0) {
            return self::$gtk->$name(...$arguments);
        }
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
