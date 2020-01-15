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
use Gtk\GObject;

class Pango extends GObject
{

    protected static ?FFI $ffi = null;

    protected const ID = App::PANGO_ID;
    protected const MATCH_FULL = [];
    protected const MATCH_PREFIX = ['pango_'];
    protected const UNIMPLEMENT = [];
    protected const GLOBAL_VAL = [];

    protected static function compileVersion()
    {
        
    }

}
