<?php

include __DIR__ . '/load.php';

use Gtk\GtkEnum;

function main(int $argc, $argv)
{
    global $gtk;
    // Initialize i18n support with bindtextdomain(), etc.

    // ...

    // Initialize the widget set

    $gtk->gtk_init($argc, $argv);

    // Create the main window
    $mainwin = $gtk->gtk_window_new(GtkEnum::GTK_WINDOW_TOPLEVEL);

    // Set up our GUI elements

    // ...

    // Show the application window
    $gtk->gtk_widget_show_all($mainwin);

    // Enter the main event loop, and wait for user interaction
    $gtk->gtk_main();

    // The user lost interest
    return 0;
}

main($argc, $argv);
