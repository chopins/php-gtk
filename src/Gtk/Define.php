<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace Gtk\Gtk;

trait Define
{

    public function GTK_WINDOW($window)
    {
        $gtype = self::$gtk->cast('GTypeInstance*', $window);
        $gtypeCast = $this->g_type_check_instance_cast($gtype, $this->gtk_window_get_type());
        return self::$gobject->cast('GtkWindow*', $gtypeCast);
    }
}
