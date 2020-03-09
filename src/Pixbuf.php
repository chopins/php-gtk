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
    
    protected function availableIn(&$code)
    {
        parent::availableIn($code);
        $ffi = $this->preLoad(self::ID, 'typedef unsigned int guint;guint gdk_pixbuf_major_version;guint gdk_pixbuf_minor_version;guint gdk_pixbuf_micro_version;');
        $v = "{$ffi->gdk_pixbuf_major_version}.{$ffi->gdk_pixbuf_minor_version}.{$ffi->gdk_pixbuf_micro_version}";
        $this->requireMinVersion(self::ID, $v);
        $this->versionReplace($code, 'GDK_PIXBUF_AVAILABLE_IN', '2.40', $v);
        $this->versionReplace($code, 'GDK_PIXBUF_AVAILABLE_IN', '2.38', $v);
    }

}
