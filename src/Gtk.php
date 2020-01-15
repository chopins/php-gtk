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
use Gtk\Gio;
use Gtk\App;

class Gtk extends Gio
{
    protected static $ffi = null;
    protected const ID = App::GTK_ID;
    protected const MATCH_FULL = [];
    protected const MATCH_PREFIX = ['gtk_'];
    protected const UNIMPLEMENT = [];
    protected const GLOBAL_VAL = [];

    public function GTK_WINDOW($window)
    {
        $gtype = $this->cast('GTypeInstance*', $window);
        $gtypeCast = $this->g_type_check_instance_cast($gtype, $this->gtk_window_get_type());
        return $this->cast('GtkWindow*', $gtypeCast);
    }

    public function gtk_init(int $argc = 0, array $argv = [])
    {
        $argcPtr = $this->new("int32_t", true, false);
        $argcPtr->cdata = $argc;
        $ptr3 = FFI::addr($this->main->argArrPtr($argc, $argv));
        return self::$ffi->gtk_init(FFI::addr($argcPtr), $ptr3);
    }

    protected static function compileVersion()
    {
        define('GTK_MAJOR_VERSION', self::$ffi->gtk_get_major_version());
        define('GTK_MINOR_VERSION', self::$ffi->gtk_get_minor_version());
        define('GTK_MICRO_VERSION', self::$ffi->gtk_get_micro_version());
        define('GTK_BINARY_AGE', self::$ffi->gtk_get_binary_age());
        define('GTK_INTERFACE_AGE', self::$ffi->gtk_get_interface_age());
    }
    public function GTK_CHECK_VERSION($major, $minor, $micro)
    {
        return ($this->GTK_MAJOR_VERSION > ($major) ||
            ($this->GTK_MAJOR_VERSION == ($major) && $this->GTK_MINOR_VERSION > ($minor)) ||
            ($this->GTK_MAJOR_VERSION == ($major) && $this->GTK_MINOR_VERSION == ($minor) &&
                $this->GTK_MICRO_VERSION >= ($micro)));
    }

    public function gtk_major_version()
    {
        return $this->gtk_get_major_version();
    }

    public function gtk_minor_version()
    {
        return $this->gtk_get_minor_version();
    }

    public function gtk_micro_version()
    {
        return $this->gtk_get_micro_version();
    }

    public function gtk_binary_age()
    {
        return $this->gtk_get_binary_age();
    }

    public function gtk_interface_age()
    {
        return $this->gtk_get_interface_age();
    }
    public function GTK_CONTAINER($obj)
    {
        return $this->G_TYPE_CHECK_INSTANCE_CAST($obj, $this->GTK_TYPE_CONTAINER(), 'GtkContainer');
    }
    public function GTK_TYPE_CONTAINER()
    {
        return $this->gtk_container_get_type();
    }
}
