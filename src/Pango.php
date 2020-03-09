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
        
    }
    
    protected function availableIn(&$code)
    {
        parent::availableIn($code);
        $version = $this->preLoad(self::ID, 'const char *pango_version_string (void);')->pango_version_string();
        $this->requireMinVersion(self::ID, '1.42', $version);
        $this->versionReplace($code, 'PANGO_AVAILABLE_IN', '1.44', $version);
    }

}
