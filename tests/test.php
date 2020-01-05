<?php

use GTK\Gtk;

function activate_func($app = null, $user_data = null)
{
    global $gtk;
    $window = $gtk->gtk_application_window_new($app);
    $gtk->gtk_window_set_title($gtk->GTK_WINDOW($window), "Window");
    $gtk->gtk_window_set_default_size($gtk->GTK_WINDOW($window), 200, 200);
    $gtk->gtk_widget_show_all($window);
}

include dirname(__DIR__) . '/src/Gtk.php';

$gtk = new Gtk();

function main($argc, $argv)
{
    global $gtk;
    $app = $gtk->gtk_application_new("org.gtk.example", 0);

    $gtk->g_signal_connect($app, "activate", 'activate_func');
    $argv = $gtk->gio->new('char**', false);
    
    $gapp = $gtk->G_APPLICATION($app);
    var_dump($gapp);
    $status = $gtk->g_application_run($gapp, 0, $argv);
    //var_dump($status);
    //$gtk->g_object_unref($app);
}
main($argc, $argv);
