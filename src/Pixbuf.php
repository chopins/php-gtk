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
use Gtk\GtkAbstract;

class Pixbuf extends GtkAbstract
{

    protected static ?FFI $ffi = null;

    protected const ID = PHPGtk::PIXBUF_ID;
    protected const UNIMPLEMENT = [];

    protected static function compileVersion()
    {
        define('GDK_PIXBUF_VERSION', self::$ffi->gdk_pixbuf_version);
        define('GDK_PIXBUF_MAJOR', self::$ffi->gdk_pixbuf_major_version);
        define('GDK_PIXBUF_MINOR', self::$ffi->gdk_pixbuf_minor_version);
        define('GDK_PIXBUF_MICRO', self::$ffi->gdk_pixbuf_micro_version);
    }

    protected function availableIn(&$code)
    {
        parent::availableIn($code);
        $v = $this->preLoad(self::ID, 'const char *gdk_pixbuf_version;')->gdk_pixbuf_version;
        $this->requireMinVersion(self::ID, $v);
        $this->versionReplace($code, 'GDK_PIXBUF_AVAILABLE_IN', '2.40', $v);
        $this->versionReplace($code, 'GDK_PIXBUF_AVAILABLE_IN', '2.38', $v);
    }

}
