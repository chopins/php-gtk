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

use Gtk\App;

class Pixbuf extends Gdk
{

    protected const ID = App::PIXBUF_ID;
    protected const MATCH_FULL = [];
    protected const MATCH_PREFIX = ['gdk_pixbuf_', 'xlib_'];
    protected const UNIMPLEMENT = [];
    protected const GLOBAL_VAL = ['gdk_' => 1];

    protected static function compileVersion()
    {
        
    }

}
