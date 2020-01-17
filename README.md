## php-gtk
PHP bindings to the [gtk+3](https://www.gtk.org/) C library.

The project only expose GTK API by FFI

**Requirements**
* PHP >= 7.4
* PHP FFI extension available
* FFI need merged [php-src request #5070](https://github.com/php/php-src/pull/5070)

**Status**
* support C function call of `GLib`, `GObject`, `Gio`, `Gtk`, `Atk`, `Gdk`, `Gdk-Pixbuf`, `Pango`
* support C macro value and call of `GLib`,`GLib`, and a small part of `GTK`
* current, only simple test in linux
  
**Defined Constants**

if not specify below constants, below define value will be effective
```php
const PHP_GTK_ID_GLIB = 'glib';
const PHP_GTK_ID_GIO = 'gio';
const PHP_GTK_ID_GOBJECT = 'gobject';
const PHP_GTK_ID_GTK = 'gtk';
const PHP_GTK_ID_PANGO = 'pango';
const PHP_GTK_ID_GDK = 'gdk';
const PHP_GTK_ID_PIXBUF = 'pixbuf';
const PHP_GTK_ID_ATK = 'atk';
```
constant and property of `Gtk\APP`:

```php
class App {
......
    const GLIB_ID = PHP_GTK_ID_GLIB;
    const GIO_ID = PHP_GTK_ID_GIO;
    const GOBJECT_ID = PHP_GTK_ID_GOBJECT;
    const GTK_ID = PHP_GTK_ID_GTK;
    const GDK_ID = PHP_GTK_ID_GDK;
    const PANGO_ID = PHP_GTK_ID_PANGO;
    const PIXBUF_ID = PHP_GTK_ID_PIXBUF;
    const ATK_ID = PHP_GTK_ID_ATK;
    public static $gtkDllMap  = [
        self::GLIB_ID => ['name' => 'libglib-2.0', 'header' => ['glib']],
        self::GIO_ID => ['name' => 'libgio-2.0', 'header' => ['gio']],
        self::GOBJECT_ID => ['name' => 'libgobject-2.0', 'header' => ['gtype', 'gobject']],
        self::GTK_ID => ['name' => 'libgtk-3', 'header' => ['gtkfunc']],
        self::GDK_ID => ['name' => 'libgdk-3', 'header' => ['gdk']],
        self::PIXBUF_ID => ['name' => 'libgdk_pixbuf-2.0', 'header' => ['pixbuf']],
        self::PANGO_ID => ['name' => 'libpango-1.0', 'header' => ['pango']],
        self::ATK_ID => ['name' => 'libatk-1.0', 'header' => ['atk']],
    ];
......
}
```

`Gtk\APP::$gtkDllMap` determine load dynamic library path and header file.

**Load Dynamic Library**
* In Linux, default, according to `PHP_INT_SIZE` value to determine find in `/usr/lib` or `/usr/lib64`
* specify lib path by self through `new Gtk\App($libpath)`, if `$libpath` is array, value must be lib file path,key is `name` value must be `Gtk\App::XXX_ID` constant. if `$libpath` is string, value must be lib directory path
* specify lib name through set `name` value of specify lib row of `Gtk\APP::$gtkDllMap`

### Usage

* basic example
  
    ```php
    include dirname(__DIR__) . '/src/App.php';
    $gtk = new App();
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

        $status = $gtk->g_application_run($gapp, $argc, $argv);

        $gtk->g_object_unref($app);
        return $status;
    }
    return main($argc, $argv);
    ```
* C Lib API call 
  * `App` class can be call `Gtk`,`GLib`,`GObject`,`Gio`,`Gdk` function
  * `App::atk()` return `Gtk\Atk`, can be call `GLib`,`GObject`,`ATK` function
  * `App::gdk()` return `Gtk\Pixbuf`, can be call `GLib`,`GObject, `GIO``,`GDK`,`gdk-pixbuf` function
  * `App::pango()` return `Gtk\Pango`, can be call `GLib`,`GObject`,`Pango` function
  * All enum value defined in `Gtk\GtkEnum`
  * macro value get by same name constant of class
  * macro function call by same name method of class
  * lib version value defined by macro get by global same name  constant
  * About gettext of `glib`:
    * `Gtk\Glib::$GETTEXT_PACKAGE`  name of `GETTEXT_PACKAGE` when compile `Glib`, default is null
    * `Gtk\Glib::$gettextDll`       path of gettext shared library, default is empty, if php eanble gettext, will use php gettext() function instead and the property invaild

### Note:

* Default, The number of callback function argument must less than 10, otherwise extra argument value always  `NULL`, only when `Gtk\GtkFFI::$gCallbackArgNum` be changed to other value
* do not use C function for callback, use php function call C function instead
* if new C variable be used occur segfault, try new unmanaged variable
* if not merged [php-src request #5070](https://github.com/php/php-src/pull/5070), must self cast C type and do not call macro function