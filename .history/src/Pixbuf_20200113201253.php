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
use Gtk\GObject;

class Pixbuf extends GObject
{
    const ID = App::PIXBUF_ID;
    const MATCH_FULL = [];
    const MATCH_PREFIX = ['gdk_pixbuf_', 'xlib_'];
    const UNIMPLEMENT = [];
}
