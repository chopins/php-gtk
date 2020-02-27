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

use Gtk\FFI;
use Gtk\App;
use Gtk\GObject;

class Gio extends GObject
{

    protected static ?FFI $ffi = null;

    protected const ID = App::GIO_ID;
    protected const UNIMPLEMENT = [];
    protected const GLOBAL_VAL = [];

    protected static function compileVersion()
    {
        
    }

    public function g_application_run($gapp, $argc = 0, $argv = [])
    {
        $argvPtr = self::$ffi->phpApi()->argsPtr($argc, $argv);
        return self::$ffi->g_application_run($gapp, $argc, $argvPtr);
    }

    public function G_APPLICATION($app)
    {
        return $this->G_TYPE_CHECK_INSTANCE_CAST($app, $this->g_application_get_type(), 'GApplication');
    }

}
