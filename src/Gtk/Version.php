<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace GTK\Gtk;

trait Version
{
    private static int $GTK_MAJOR_VERSION = 0;
    private static int $GTK_MINOR_VERSION = 0;
    private static int $GTK_MICRO_VERSION = 0;
    private static int $GTK_BINARY_AGE = 0;
    private static int $GTK_INTERFACE_AGE = 0;

    private function compileVersion()
    {
        self::$GTK_MAJOR_VERSION = $this->gtk_get_major_version();
        self::$GTK_MINOR_VERSION = $this->gtk_get_minor_version();
        self::$GTK_MICRO_VERSION = $this->gtk_get_micro_version();
        self::$GTK_BINARY_AGE = $this->gtk_get_binary_age();
        self::$GTK_INTERFACE_AGE = $this->gtk_get_interface_age();
    }
    public function GTK_CHECK_VERSION($major, $minor, $micro)
    {
        return ($this->GTK_MAJOR_VERSION > ($major) ||
            ($this->GTK_MAJOR_VERSION == ($major) && $this->GTK_MINOR_VERSION > ($minor)) ||
            ($this->GTK_MAJOR_VERSION == ($major) && $this->GTK_MINOR_VERSION == ($minor) &&
                $this->GTK_MICRO_VERSION >= ($micro)));
    }

    public function gtk_major_version()
    {
        return $this->gtk_get_major_version();
    }

    public function gtk_minor_version()
    {
        return $this->gtk_get_minor_version();
    }

    public function gtk_micro_version()
    {
        return $this->gtk_get_micro_version();
    }

    public function gtk_binary_age()
    {
        return $this->gtk_get_binary_age();
    }

    public function gtk_interface_age()
    {
        return $this->gtk_get_interface_age();
    }
}
