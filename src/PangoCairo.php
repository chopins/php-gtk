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
use Gtk\GObject;

class PangoCairo extends GObject
{

    protected static ?FFI $ffi = null;

    protected const ID = PHPGtk::PANGO_CAIRO_ID;
    protected const UNIMPLEMENT = [];

    protected static function compileVersion()
    {
        
    }

}
