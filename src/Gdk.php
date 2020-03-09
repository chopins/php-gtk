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
use Gtk\PHPGtk;
use Gtk\Gio;

class Gdk extends Gio
{

    protected static ?FFI $ffi = null;

    protected const ID = PHPGtk::GDK_ID;
    protected const UNIMPLEMENT = [];
    const GDK_PRIORITY_REDRAW = self::G_PRIORITY_HIGH_IDLE + 20;

    protected static function compileVersion()
    {
        
    }

    protected function availableIn(&$code)
    {
        parent::availableIn($code);
        if(!defined('PHP_GDK_VERSION')) {
            self::$isDebug && trigger_error('Undefined constant PHP_GDK_VERSION for gdk version, use 3.20', E_USER_WARNING);
            define('PHP_GDK_VERSION', '3.20');
        } elseif(version_compare(PHP_GDK_VERSION, '3.20') < 0) {
            throw new RuntimeException('GDK version must >= 3.20');
        }
        $this->versionReplace($code, 'GDK_AVAILABLE_IN', '3.24', PHP_GDK_VERSION);
        $this->versionReplace($code, 'GDK_AVAILABLE_IN', '3.22', PHP_GDK_VERSION);
    }

}
