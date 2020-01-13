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
    protected static $ffi = null;
    protected static function id(): string
    {
        return App::PANGO_ID;
    }
    protected static function matchPrefix(): array
    {
        return ['pango_'];
    }
}
