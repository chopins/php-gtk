<?php
include __DIR__ . '/load.php';

function print_hello($widget, $data)
{
    global $gtk;
    $gtk->g_print("Hello World\n");
}

function activate($app, $user_data)
{
    global $gtk;
    try {
    /* create a new window, and set its title */
    $window = $gtk->gtk_application_window_new($app);
    $gtk->gtk_window_set_title($gtk->GTK_WINDOW($window), "Window");
    $gtk->gtk_container_set_border_width($gtk->GTK_CONTAINER($window), 10);

    /* Here we construct the container that is going pack our buttons */
    $grid = $gtk->gtk_grid_new();

    /* Pack the container in the window */
    $gtk->gtk_container_add($gtk->GTK_CONTAINER($window), $grid);

    $button = $gtk->gtk_button_new_with_label("Button 1");
    $gtk->g_signal_connect($button, "clicked", $gtk->G_CALLBACK('print_hello'), NULL);

    /* Place the first button in the grid cell (0, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
    $gtk->gtk_grid_attach($gtk->GTK_GRID($grid), $button, 0, 0, 1, 1);

    $button = $gtk->gtk_button_new_with_label("Button 2");
    $gtk->g_signal_connect($button, "clicked", $gtk->G_CALLBACK('print_hello'), NULL);

    /* Place the second button in the grid cell (1, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
    $gtk->gtk_grid_attach($gtk->GTK_GRID($grid), $button, 1, 0, 1, 1);

    $button = $gtk->gtk_button_new_with_label("Quit");
    $gtk->g_signal_connect_swapped($button, "clicked", $gtk->G_CALLBACK([$gtk, 'gtk_widget_destroy', true]), $window);

    /* Place the Quit button in the grid cell (0, 1), and make it
   * span 2 columns.
   */
    $gtk->gtk_grid_attach($gtk->GTK_GRID($grid), $button, 0, 1, 2, 1);

    /* Now that we are done packing our widgets, we show them all
   * in one go, by calling gtk_widget_show_all() on the window.
   * This call recursively calls gtk_widget_show() on all widgets
   * that are contained in the window, directly or indirectly.
   */
    $gtk->gtk_widget_show_all($window);
    } catch(Error $e) {
        echo $e;
    } catch(Exception $e) {
        echo $e;
    }
}

function
main(
    int    $argc,
    $argv
) {
    global $gtk;
    $app = $gtk->gtk_application_new("org.gtk.example", \Gtk\GtkEnum::G_APPLICATION_FLAGS_NONE);
    $gtk->g_signal_connect($app, "activate", $gtk->G_CALLBACK('activate'), NULL);
    $status = $gtk->g_application_run($gtk->G_APPLICATION($app), $argc, $argv);
    $gtk->g_object_unref($app);

    return $status;
}

main($argc, $argv);
