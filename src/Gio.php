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

class Gio extends GObject
{
    protected static $ffi = null;
    const ID = App::GIO_ID;
    const MATCH_FULL = [
        'g_bytes_icon_get_bytes', 'g_bytes_icon_new', 'g_null_settings_backend_new', 'g_test_dbus_get_flags',
        'g_property_action_new', 'g_test_dbus_add_service_dir', 'g_test_dbus_down',
        'g_test_dbus_get_bus_address', 'g_test_dbus_get_flags', 'g_test_dbus_new', 'g_test_dbus_stop',
        'g_test_dbus_unset', 'g_test_dbus_up', 'g_threaded_socket_service_new'

    ];
    const MATCH_PREFIX = [
        'g_action_', 'g_application_', 'g_app_', 'g_async_initable_', 'g_async_result_',
        'g_buffered_', 'g_bus_', 'g_cancellable_', 'g_charset_', 'g_converter_', 'g_credentials_',
        'g_datagram', 'g_data_input_', 'g_data_output_', 'g_dbus_', 'g_desktop_', 'g_drive_',
        'g_dtls_', 'g_emblem', 'g_filename_completer_', 'g_file_', 'g_filter_', 'g_icon_', 'g_inet_',
        'g_initable_', 'g_input_', 'g_io_e', 'g_io_m', 'g_io_s', 'g_list_model_', 'g_list_store_',
        'g_loadable_', 'g_memory_', 'g_menu_', 'g_mount_', 'g_network', 'g_notification_', 'g_output_',
        'g_permission_', 'g_pollable_', 'g_proxy_', 'g_remote_', 'g_reso', 'g_seekable_', 'g_settings_',
        'g_simple_', 'g_socket_', 'g_srv_', 'g_static_', 'g_subprocess_', 'g_task_', 'g_tcp_',
        'g_themed_', 'g_tls_', 'g_unix_', 'g_vfs_', 'g_volume_', 'g_win32_input_', 'g_win32_output_',
        'g_win32_registry_', 'g_zlib_'
    ];
    const UNIMPLEMENT = [];

    public function g_application_run($gapp, $argc = 0, $argv = [])
    {
        $argvPtr = $this->main->argArrPtr($argc, $argv);
        return self::$ffi->g_application_run($gapp, $argc, $argvPtr);
    }
    public function G_APPLICATION($app)
    {
        return $this->G_TYPE_CHECK_INSTANCE_CAST($app, $this->g_application_get_type(), 'GApplication');
    }
}
