<?php

use GTK\Gtk;

include dirname(__DIR__) . '/src/Gtk.php';
$gtk = new Gtk();
function activate()
{
    global $gtk, $app;
    try {
    $window = $gtk->gtk_application_window_new($app);
    $gtk->gtk_window_set_title($gtk->GTK_WINDOW($window), "Window");
    $gtk->gtk_window_set_default_size($gtk->GTK_WINDOW($window), 200, 200);
    $gtk->gtk_widget_show_all($window);
    } catch(\Error $e) {
        echo $e;
    }
}


function main($argc, $argv) : int
{
    global $gtk, $app;
    $app = $gtk->gtk_application_new("org.gtk.example", 0);

    $gtk->g_signal_connect($app, "activate", 'activate');

    $gapp = $gtk->G_APPLICATION($app);
    $arg = \FFI::new("char**");

    $status = $gtk->g_application_run($gapp, 0, null);

    $gtk->g_object_unref($app);
    return $status;
}
return main($argc, $argv);
