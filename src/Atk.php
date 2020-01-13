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

class Atk extends GObject
{
    protected static $ffi = null;
    const ID = App::ATK_ID;
    const MATCH_FULL = [];
    const MATCH_PREFIX = ['atk_'];
    const UNIMPLEMENT = [];
}
