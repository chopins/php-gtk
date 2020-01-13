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
use Gtk\GLib;

class GObject extends GLib
{
    protected static $ffi = null;
    const ID = App::GOBJECT_ID;
    const MATCH_FULL = ['g_source_set_closure', 'g_source_set_dummy_callback'];
    const MATCH_PREFIX = [
        'g_binding_', 'GBinding', 'g_cclosure_', 'GClass', 'GClosure', 'g_closure_',
        'g_object_', 'g_signal_', 'GSignal', 'g_flags_',
        'g_param_', 'g_type_', 'g_strdup_', 'g_value_', 'GValue',
        'g_weak_', 'GWeak'
    ];
    const UNIMPLEMENT = [];

    public function g_signal_connect($instance, $detailed_signal, $c_handler, $data = null)
    {
        return self::$ffi->g_signal_connect_data($instance, $detailed_signal, $c_handler, $data, null, null);
    }
}
