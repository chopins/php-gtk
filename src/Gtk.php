<?php

class Gtk
{
    private static $gtk = null;
    private static $gobject = null;
    public function __construct($so = '')
    {
        $include = __DIR__ . '/include';
        $libdir = $lib = PHP_INT_SIZE === 4 ? '/usr/lib' : '/usr/lib64';
        if (self::$gtk === null) {
            $gtklib = "$libdir/libgtk-3.so";
            self::$gtk = FFI::cdef(
                file_get_contents("$include/struct.h") .
                    file_get_contents("$include/gtkfunc.h"),
                $gtklib
            );
        }
        if(self::$gobject === null) {
            $gobjectlib = "$libdir/libgobject-3.so";
            self::$gtk = FFI::cdef(
                file_get_contents("$include/struct.h") .
                    file_get_contents("$include/gobject.h"),
                $gobjectlib
            );
        }
    }

    public function g_signal_connect(...$params)
    {
        return $this->g_signal_connect_data(...$params);
    }
    public function G_APPLICATION($app)
    {
        $gapp = $this->g_type_check_instance_cast(self::$gtk->cast('GTypeInstance*', $app), $this->g_application_get_type());
        return $this->cast('GApplication*', $gapp);
    }
    public function __call($name, $arguments)
    {
        if(strpos($name, 'g_') === 0) {
            return self::$gobject->$name(...$arguments);
        } elseif(strpos($name, 'gtk_') === 0) {
            return self::$gtk->$name(...$arguments);
        }
    }
}
