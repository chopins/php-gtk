<?php
include __DIR__ . '/load.php';


function print_hello($widget, $data)
{
    global $gtk;
    $gtk->g_print("Hello World\n");
}

function quit() 
{
    global $gtk;
    $gtk->gtk_main_quit();
}

function main($argc, $argv)
{
    global $gtk;

    $error = $gtk->ffi->new('GError*', false);

    $gtk->gtk_init($argc, $argv);

    /* Construct a GtkBuilder instance and load our UI description */
    $builder = $gtk->gtk_builder_new();
    if ($gtk->gtk_builder_add_from_file($builder, "./buildinterface.ui", FFI::addr($error)) == 0) {
        $gtk->g_printerr("Error loading file: %s\n", $error->message);
        $gtk->g_clear_error(FFI::addr($error));
        return 1;
    }

    /* Connect signal handlers to the constructed widgets. */
    $window = $gtk->gtk_builder_get_object($builder, "window");
    $gtk->g_signal_connect($window, "destroy", $gtk->G_CALLBACK('quit'), NULL);

    $button = $gtk->gtk_builder_get_object($builder, "button1");
    $gtk->g_signal_connect($button, "clicked", $gtk->G_CALLBACK('print_hello'), NULL);

    $button = $gtk->gtk_builder_get_object($builder, "button2");
    $gtk->g_signal_connect($button, "clicked", $gtk->G_CALLBACK('print_hello'), NULL);

    $button = $gtk->gtk_builder_get_object($builder, "quit");
    $gtk->g_signal_connect($button, "clicked", $gtk->G_CALLBACK('quit'), NULL);

    $gtk->gtk_main();

    return 0;
}
main($argc, $argv);
