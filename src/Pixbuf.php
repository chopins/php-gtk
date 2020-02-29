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

use Gtk\PHPGtk;
use Gtk\FFI;

class Pixbuf extends Gdk
{

    protected static ?FFI $ffi = null;

    protected const ID = PHPGtk::PIXBUF_ID;
    protected const UNIMPLEMENT = [];

    protected static function compileVersion()
    {
        
    }

}
