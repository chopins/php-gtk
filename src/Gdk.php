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

use Gtk\App;
use Gtk\Gio;

class Gdk extends Gio
{
    protected static ?FFI $ffi = null;
    protected const ID = App::GDK_ID;
    protected const MATCH_FULL = [];
    protected const MATCH_PREFIX = ['gdk_'];
    protected const UNIMPLEMENT = [];
    protected const GLOBAL_VAL = [];
    
    const GDK_PRIORITY_REDRAW = self::G_PRIORITY_HIGH_IDLE + 20;
    protected static function compileVersion()
    {
        
    }
    
    
}
