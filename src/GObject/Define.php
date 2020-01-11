<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

 namespace Gtk\GObject;

trait Define
{
    public function G_APPLICATION($app)
    {
        $gtype = self::$gobject->cast('GTypeInstance*', $app);
        $gtypeCast = self::$gobject->g_type_check_instance_cast($gtype, self::$gio->g_application_get_type());
        return self::$gobject->cast('GApplication*', $gtypeCast);
    }
}
