<?php

use Gtk\GtkEnum;

include __DIR__ . '/load.php';
function print_hello($widget, $data)
{
    global $gtk;
    $gtk->g_print("Hello World\n");
    
}

function hide($w,$d = null)
{
    global $gtk; 
    $gtk->gtk_widget_destroy($w);
}

function activate($app, $user_data)
{
    global $gtk;
    try {

    $window = $gtk->gtk_application_window_new($app);
    $gtk->gtk_window_set_title($gtk->GTK_WINDOW($window), "Window");
    $gtk->gtk_window_set_default_size($gtk->GTK_WINDOW($window), 200, 200);

    $button_box = $gtk->gtk_button_box_new(GtkEnum::GTK_ORIENTATION_HORIZONTAL);

    $gtk->gtk_container_add($gtk->GTK_CONTAINER($window), $button_box);

    $button = $gtk->gtk_button_new_with_label("Hello World");

    $gtk->g_signal_connect($button, "clicked", $gtk->G_CALLBACK('print_hello'), NULL);

    $gtk->g_signal_connect_swapped($button, "clicked", $gtk->G_CALLBACK([$gtk, 'gtk_widget_destroy'], true), $window);

    $gtk->gtk_container_add($gtk->GTK_CONTAINER($button_box), $button);

    $gtk->gtk_widget_show_all($window);
    
    } catch(\Error $e) {
        echo $e;
    } catch(\Exception $e) {
        echo $e;
    }
}


function main(int $argc, $argv): int
{
    global $gtk,$app;

    $app = $gtk->gtk_application_new("org.gtk.example", GtkEnum::G_APPLICATION_FLAGS_NONE);
    $gtk->g_signal_connect($app, "activate", $gtk->G_CALLBACK('activate'), NULL);
    
    $status = $gtk->g_application_run($gtk->G_APPLICATION($app), $argc, $argv);
    
    $gtk->g_object_unref($app);

    return $status;
}
main($argc, $argv);
