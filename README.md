## php-gtk
PHP bindings to the [gtk+3](https://www.gtk.org/) C library.

The project only expose GTK API by FFI

**Requirements**
* PHP >= 7.4
* PHP FFI extension available

**Status**
* support C function call of `GLib`, `GObject`, `Gio`, `Gtk`, `Atk`, `Gdk`, `Gdk-Pixbuf`, `Pango`
* support C macro value and call of `GLib`,`GLib`, and a small part of `GTK`
  
**Defined Constants**

DLL file name and header file name map list:

```php
class PHPGtk {
    public static $gtkDllMap  = [
        self::GLIB_ID => ['name' => 'libglib', 'header' => ['glib']],
        self::GIO_ID => ['name' => 'libgio', 'header' => ['gio']],
        self::GOBJECT_ID => ['name' => 'libgobject', 'header' => ['gtype', 'gobject']],
        self::GTK_ID => ['name' => 'libgtk', 'header' => ['gtkfunc']],
        self::GDK_ID => ['name' => 'libgdk', 'header' => ['gdk']],
        self::PIXBUF_ID => ['name' => 'libgdk_pixbuf', 'header' => ['pixbuf']],
        self::PANGO_ID => ['name' => 'libpango', 'header' => ['pango']],
        self::ATK_ID => ['name' => 'libatk', 'header' => ['atk']],
    ];
......
}
```

`Gtk\PHPGtk::$gtkDllMap` determine load dynamic library name prefix and header file.

**Load Dynamic Library**
* In Linux, default find:
  * when `PHP_INT_SIZE` equal 4, OS is 32bit, find `/usr/lib`
  * when `PHP_INT_SIZE` equal 8, OS is 64bit, find `/usr/lib64`
* specify lib path by self through `new Gtk\PHPGtk($libpath)`, 
  * if `$libpath` is string, value must be lib directory path
  * will find match $libpath/$name-*.so, and load the first dll
* specify lib name through set `name` value of specify lib row of `Gtk\APP::$gtkDllMap`

### Usage

* basic example
  
    ```php
    include dirname(__DIR__) . '/src/PHPGtk.php';
    $gtk = \GTK\PHPGtk::gtk();
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
  * `PHPGtk` class can be call `Gtk`,`GLib`,`GObject`,`Gio`,`Gdk` function
  * `PHPGtk::atk()` return `Gtk\Atk`, can be call `GLib`,`GObject`,`ATK` function
  * `PHPGtk::gdk()` return `Gtk\Pixbuf`, can be call `GLib`, `GObject`, `GIO`, `GDK`,`gdk-pixbuf` function
  * `PHPGtk::pango()` return `Gtk\Pango`, can be call `GLib`,`GObject`,`Pango` function
  * All enum value defined in `Gtk\GtkEnum`
  * macro value get by same name constant of class
  * macro function call by same name method of class
  * lib version value defined by macro get by global same name  constant
  * About gettext of `glib`:
    * `Gtk\Glib::$GETTEXT_PACKAGE`  name of `GETTEXT_PACKAGE` when compile `Glib`, default is null
    * `Gtk\Glib::$gettextDll`       path of gettext shared library, default is empty, if php eanble gettext, will use php gettext() function instead and the property invaild
  * Gtk\GtkWidget class provided simple OO method of call C function that related `GtkWidget`

### Note:

* Default, The number of callback function argument must less than 10, otherwise extra argument value always  `NULL`, only when `Gtk\GtkAbstract::$gCallbackArgNum` be changed to other value
* if C function for callback, use `GObject::G_CALLBACK($callable)` convert, the `$callable` is smailer `[$gtk, $c_func_name, true]`, it php callable array has 3 entries, 3rd is bool value
* if new C variable be used occur segfault, try new unmanaged variable
* most class is sub of `Gtk\GtkAbstract`

## For Windows
1. get libgtk3 binary DLL file, see https://www.gtk.org/docs/installations/windows/
2. copy libgtk3 all DLL file and dependency to your path, if use MSYS install, pass `YOUP_PATH/mingw32/bin` or `YOUP_PATH/mingw64/bin` to `PHPGtk::gtk($libpath)`, if not installed other package,In the path DLL file is libgtk dependency package
