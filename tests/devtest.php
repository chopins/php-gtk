<?php

use Gtk\GtkEnum;

include __DIR__ . '/load.php';
$gtk->gtk_init($argc, $argv);

// Create the main window
$mainwin = $gtk->gtk_window_new(GtkEnum::GTK_WINDOW_TOPLEVEL);



$b = $gtk->gtk_builder_new_from_string('<?xml version="1.0" encoding="UTF-8"?><interface><object class="GtkEntry" id="entry1"><property name="invisible_char">*</property></object></interface>', -1);
$obj = $gtk->gtk_builder_get_object($b, 'entry1');
$w = $gtk->GTK_WIDGET($obj);
$e = $gtk->GTK_ENTRY($obj);
$gtk->gtk_entry_set_invisible_char($e, ord('*'));
$gtk->gtk_entry_set_visibility($e, false);
$gtk->gtk_container_add($gtk->GTK_CONTAINER($mainwin), $w);

// ...
// Show the application window
$gtk->gtk_widget_show_all($mainwin);

// Enter the main event loop, and wait for user interaction
$gtk->gtk_main();
