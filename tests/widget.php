<?php

use Gtk\GtkEnum;
use Gtk\GtkWidget;

include __DIR__ . '/load.php';

GtkWidget::init($gtk);

function print_hello($widget, $data)
{
    global $gtk;
    $gtk->g_print("Hello World\n");
}

function activate($app, $user_data)
{
    global $gtk;
    try {

        $w = GtkWidget::gtk_application_window_new($app);
        $window = $w->parent('GtkWindow');
        $window->set_title("Window");
        $window->set_default_size(200, 200);

        $button_box = GtkWidget::gtk_button_box_new(GtkEnum::GTK_ORIENTATION_HORIZONTAL);
        $wc = $window->container();
        $wc->add($button_box);
        $bbc = $button_box->container();
        $button = GtkWidget::gtk_button_new_with_label("Hello World");

        $button->sConnect("clicked", 'print_hello');

        $button->sConnectS("clicked", [$gtk, 'gtk_widget_destroy', true], $window);

        $bbc->add($button);

        GtkWidget::gtk_widget_show_all($window);
    } catch(\Error $e) {
        echo $e;
    } catch(\Exception $e) {
        echo $e;
    }
}

function main(int $argc, $argv): int
{
    global $gtk, $app;

    $app = $gtk->gtk_application_new("org.gtk.example", GtkEnum::G_APPLICATION_FLAGS_NONE);
    $gtk->g_signal_connect($app, "activate", $gtk->G_CALLBACK('activate'), NULL);

    $status = $gtk->g_application_run($gtk->G_APPLICATION($app), $argc, $argv);

    $gtk->g_object_unref($app);

    return $status;
}

main($argc, $argv);
