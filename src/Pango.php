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

use Gtk\FFI;
use Gtk\PHPGtk;
use Gtk\PangoCairo;

class Pango extends PangoCairo
{

    protected static ?FFI $ffi = null;

    protected const ID = PHPGtk::PANGO_ID;
    protected const UNIMPLEMENT = [];

    protected static function compileVersion()
    {
        define('PANGO_VERSION_STRING', self::$ffi->pango_version_string());
        define('PANGO_VERSION', self::$ffi->pango_version());
        $v = explode('.', PANGO_VERSION_STRING);
        define('PANGO_VERSION_MAJOR', $v[0]);
        define('PANGO_VERSION_MINOR', $v[1]);
        define('PANGO_VERSION_MICRO', $v[2]);
    }
    
    protected function availableIn(&$code)
    {
        parent::availableIn($code);
        $version = $this->preLoad(self::ID, 'const char *pango_version_string (void);')->pango_version_string();
        $this->requireMinVersion(self::ID, $version);
        $this->versionReplace($code, 'PANGO_AVAILABLE_IN', '1.44', $version);
    }

}
