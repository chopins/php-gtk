<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace Gtk\Gtk;

use FFI;
use Gtk\GIO\GIO;
use Gtk\App;
use GTK\Gtk\Version;

class Gtk extends GIO
{
    use Version;
    protected static $gtk = null;
    public function __construct(App $main, $libdir = null)
    {
        parent::__construct($main, $libdir);
        if (self::$gtk === null) {
            self::$gtk = $this->cdef($main::GTK_ID);
        }
    }

    public function getFFI()
    {
        return self::$gtk;
    }

    public function bindMethod()
    {
        parent::bindMethod();
        $matchPrefix = ['gtk_'];
        $fullMatch = [];
        return $this->registerCall('gtk', self::$gtk, $matchPrefix, $fullMatch);
    }

    public function GTK_WINDOW($window)
    {
        $gtype = self::$gtk->cast('GTypeInstance*', $window);
        $gtypeCast = $this->g_type_check_instance_cast($gtype, $this->gtk_window_get_type());
        return self::$gobject->cast('GtkWindow*', $gtypeCast);
    }

    public function gtk_init(int $argc = 0, array $argv = [])
    {
        $argcPtr = $this->new("int32_t", true, false);
        $argcPtr->cdata = $argc;
        $ptr3 = FFI::addr(self::$main->argArrPtr($argc, $argv));
        return self::$gtk->gtk_init(FFI::addr($argcPtr), $ptr3);
    }
}
