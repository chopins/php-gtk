<?php
use GTK\Gtk;
include dirname(__DIR__) . '/src/Gtk.php';

$gtk = new Gtk();

function activate($app, $user_data)
{
    global $gtk;
    $window = $gtk->gtk_application_window_new($app);
    $gtk->gtk_window_set_title($gtk->GTK_WINDOW($window), "Window");
    $gtk->gtk_window_set_default_size($gtk->GTK_WINDOW($window), 200, 200);
    $gtk->gtk_widget_show_all($window);
}

$app = $gtk->gtk_application_new("org.gtk.example", 0);
$gtk->g_signal_connect($app, "activate", 'activate', NULL);
$status = $gtk->g_application_run($gtk->G_APPLICATION($app), $argc, $argv);
$gtk->g_object_unref($app);