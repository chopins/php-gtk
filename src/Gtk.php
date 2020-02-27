<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace Gtk;

use Gtk\FFI;
use Gtk\Gdk;
use Gtk\App;
use Gtk\GtkEnum;

class Gtk extends Gdk
{

    protected static ?FFI $ffi = null;

    protected const ID = App::GTK_ID;
    protected const UNIMPLEMENT = ['GTK_STOCK_'];
    const GTK_INPUT_ERROR = -1;
    const GTK_LEVEL_BAR_OFFSET_FULL = 'full';
    const GTK_LEVEL_BAR_OFFSET_HIGH = 'high';
    const GTK_LEVEL_BAR_OFFSET_LOW = 'low';
    const GTK_MAX_COMPOSE_LEN = 7;
    const GTK_PAPER_NAME_A3 = "iso_a3";
    const GTK_PAPER_NAME_A4 = "iso_a4";
    const GTK_PAPER_NAME_A5 = "iso_a5";
    const GTK_PAPER_NAME_B5 = "iso_b5";
    const GTK_PAPER_NAME_LETTER = "na_letter";
    const GTK_PAPER_NAME_EXECUTIVE = "na_executive";
    const GTK_PAPER_NAME_LEGAL = "na_legal";
    const GTK_PRINT_SETTINGS_PRINTER = "printer";
    const GTK_PRINT_SETTINGS_ORIENTATION = "orientation";
    const GTK_PRINT_SETTINGS_PAPER_FORMAT = "paper-format";
    const GTK_PRINT_SETTINGS_PAPER_WIDTH = "paper-width";
    const GTK_PRINT_SETTINGS_PAPER_HEIGHT = "paper-height";
    const GTK_PRINT_SETTINGS_USE_COLOR = "use-color";
    const GTK_PRINT_SETTINGS_COLLATE = "collate";
    const GTK_PRINT_SETTINGS_REVERSE = "reverse";
    const GTK_PRINT_SETTINGS_DUPLEX = "duplex";
    const GTK_PRINT_SETTINGS_QUALITY = "quality";
    const GTK_PRINT_SETTINGS_N_COPIES = "n-copies";
    const GTK_PRINT_SETTINGS_NUMBER_UP = "number-up";
    const GTK_PRINT_SETTINGS_NUMBER_UP_LAYOUT = "number-up-layout";
    const GTK_PRINT_SETTINGS_RESOLUTION = "resolution";
    const GTK_PRINT_SETTINGS_RESOLUTION_X = "resolution-x";
    const GTK_PRINT_SETTINGS_RESOLUTION_Y = "resolution-y";
    const GTK_PRINT_SETTINGS_PRINTER_LPI = "printer-lpi";
    const GTK_PRINT_SETTINGS_SCALE = "scale";
    const GTK_PRINT_SETTINGS_PRINT_PAGES = "print-pages";
    const GTK_PRINT_SETTINGS_PAGE_RANGES = "page-ranges";
    const GTK_PRINT_SETTINGS_PAGE_SET = "page-set";
    const GTK_PRINT_SETTINGS_DEFAULT_SOURCE = "default-source";
    const GTK_PRINT_SETTINGS_MEDIA_TYPE = "media-type";
    const GTK_PRINT_SETTINGS_DITHER = "dither";
    const GTK_PRINT_SETTINGS_FINISHINGS = "finishings";
    const GTK_PRINT_SETTINGS_OUTPUT_BIN = "output-bin";
    const GTK_PRINT_SETTINGS_OUTPUT_DIR = "output-dir";
    const GTK_PRINT_SETTINGS_OUTPUT_BASENAME = "output-basename";
    const GTK_PRINT_SETTINGS_OUTPUT_FILE_FORMAT = "output-file-format";
    const GTK_PRINT_SETTINGS_OUTPUT_URI = "output-uri";
    const GTK_PRINT_SETTINGS_WIN32_DRIVER_EXTRA = "win32-driver-extra";
    const GTK_PRINT_SETTINGS_WIN32_DRIVER_VERSION = "win32-driver-version";
    const GTK_PRIORITY_RESIZE = self::G_PRIORITY_HIGH_IDLE;
    const GTK_STYLE_PROPERTY_BACKGROUND_COLOR = "background-color";
    const GTK_STYLE_PROPERTY_COLOR = "color";
    const GTK_STYLE_PROPERTY_FONT = "font";
    const GTK_STYLE_PROPERTY_PADDING = "padding";
    const GTK_STYLE_PROPERTY_BORDER_WIDTH = "border-width";
    const GTK_STYLE_PROPERTY_MARGIN = "margin";
    const GTK_STYLE_PROPERTY_BORDER_RADIUS = "border-radius";
    const GTK_STYLE_PROPERTY_BORDER_STYLE = "border-style";
    const GTK_STYLE_PROPERTY_BORDER_COLOR = "border-color";
    const GTK_STYLE_PROPERTY_BACKGROUND_IMAGE = "background-image";
    const GTK_STYLE_CLASS_CELL = "cell";
    const GTK_STYLE_CLASS_DIM_LABEL = "dim-label";
    const GTK_STYLE_CLASS_ENTRY = "entry";
    const GTK_STYLE_CLASS_LABEL = "label";
    const GTK_STYLE_CLASS_COMBOBOX_ENTRY = "combobox-entry";
    const GTK_STYLE_CLASS_BUTTON = "button";
    const GTK_STYLE_CLASS_LIST = "list";
    const GTK_STYLE_CLASS_LIST_ROW = "list-row";
    const GTK_STYLE_CLASS_CALENDAR = "calendar";
    const GTK_STYLE_CLASS_SLIDER = "slider";
    const GTK_STYLE_CLASS_BACKGROUND = "background";
    const GTK_STYLE_CLASS_RUBBERBAND = "rubberband";
    const GTK_STYLE_CLASS_CSD = "csd";
    const GTK_STYLE_CLASS_TOOLTIP = "tooltip";
    const GTK_STYLE_CLASS_MENU = "menu";
    const GTK_STYLE_CLASS_CONTEXT_MENU = "context-menu";
    const GTK_STYLE_CLASS_TOUCH_SELECTION = "touch-selection";
    const GTK_STYLE_CLASS_MENUBAR = "menubar";
    const GTK_STYLE_CLASS_MENUITEM = "menuitem";
    const GTK_STYLE_CLASS_TOOLBAR = "toolbar";
    const GTK_STYLE_CLASS_PRIMARY_TOOLBAR = "primary-toolbar";
    const GTK_STYLE_CLASS_INLINE_TOOLBAR = "inline-toolbar";
    const GTK_STYLE_CLASS_STATUSBAR = "statusbar";
    const GTK_STYLE_CLASS_RADIO = "radio";
    const GTK_STYLE_CLASS_CHECK = "check";
    const GTK_STYLE_CLASS_DEFAULT = "default";
    const GTK_STYLE_CLASS_TROUGH = "trough";
    const GTK_STYLE_CLASS_SCROLLBAR = "scrollbar";
    const GTK_STYLE_CLASS_SCROLLBARS_JUNCTION = "scrollbars-junction";
    const GTK_STYLE_CLASS_SCALE = "scale";
    const GTK_STYLE_CLASS_SCALE_HAS_MARKS_ABOVE = "scale-has-marks-above";
    const GTK_STYLE_CLASS_SCALE_HAS_MARKS_BELOW = "scale-has-marks-below";
    const GTK_STYLE_CLASS_HEADER = "header";
    const GTK_STYLE_CLASS_ACCELERATOR = "accelerator";
    const GTK_STYLE_CLASS_RAISED = "raised";
    const GTK_STYLE_CLASS_LINKED = "linked";
    const GTK_STYLE_CLASS_GRIP = "grip";
    const GTK_STYLE_CLASS_DOCK = "dock";
    const GTK_STYLE_CLASS_PROGRESSBAR = "progressbar";
    const GTK_STYLE_CLASS_SPINNER = "spinner";
    const GTK_STYLE_CLASS_MARK = "mark";
    const GTK_STYLE_CLASS_EXPANDER = "expander";
    const GTK_STYLE_CLASS_SPINBUTTON = "spinbutton";
    const GTK_STYLE_CLASS_NOTEBOOK = "notebook";
    const GTK_STYLE_CLASS_VIEW = "view";
    const GTK_STYLE_CLASS_SIDEBAR = "sidebar";
    const GTK_STYLE_CLASS_IMAGE = "image";
    const GTK_STYLE_CLASS_HIGHLIGHT = "highlight";
    const GTK_STYLE_CLASS_FRAME = "frame";
    const GTK_STYLE_CLASS_DND = "dnd";
    const GTK_STYLE_CLASS_PANE_SEPARATOR = "pane-separator";
    const GTK_STYLE_CLASS_SEPARATOR = "separator";
    const GTK_STYLE_CLASS_INFO = "info";
    const GTK_STYLE_CLASS_WARNING = "warning";
    const GTK_STYLE_CLASS_QUESTION = "question";
    const GTK_STYLE_CLASS_ERROR = "error";
    const GTK_STYLE_CLASS_HORIZONTAL = "horizontal";
    const GTK_STYLE_CLASS_VERTICAL = "vertical";
    const GTK_STYLE_CLASS_TOP = "top";
    const GTK_STYLE_CLASS_BOTTOM = "bottom";
    const GTK_STYLE_CLASS_LEFT = "left";
    const GTK_STYLE_CLASS_RIGHT = "right";
    const GTK_STYLE_CLASS_PULSE = "pulse";
    const GTK_STYLE_CLASS_ARROW = "arrow";
    const GTK_STYLE_CLASS_OSD = "osd";
    const GTK_STYLE_CLASS_LEVEL_BAR = "level-bar";
    const GTK_STYLE_CLASS_CURSOR_HANDLE = "cursor-handle";
    const GTK_STYLE_CLASS_INSERTION_CURSOR = "insertion-cursor";
    const GTK_STYLE_CLASS_TITLEBAR = "titlebar";
    const GTK_STYLE_CLASS_TITLE = "title";
    const GTK_STYLE_CLASS_SUBTITLE = "subtitle";
    const GTK_STYLE_CLASS_NEEDS_ATTENTION = "needs-attention";
    const GTK_STYLE_CLASS_SUGGESTED_ACTION = "suggested-action";
    const GTK_STYLE_CLASS_DESTRUCTIVE_ACTION = "destructive-action";
    const GTK_STYLE_CLASS_POPOVER = "popover";
    const GTK_STYLE_CLASS_POPUP = "popup";
    const GTK_STYLE_CLASS_MESSAGE_DIALOG = "message-dialog";
    const GTK_STYLE_CLASS_FLAT = "flat";
    const GTK_STYLE_CLASS_READ_ONLY = "read-only";
    const GTK_STYLE_CLASS_OVERSHOOT = "overshoot";
    const GTK_STYLE_CLASS_UNDERSHOOT = "undershoot";
    const GTK_STYLE_CLASS_PAPER = "paper";
    const GTK_STYLE_CLASS_MONOSPACE = "monospace";
    const GTK_STYLE_CLASS_WIDE = "wide";
    const GTK_STYLE_REGION_ROW = "row";
    const GTK_STYLE_REGION_COLUMN = "column";
    const GTK_STYLE_REGION_COLUMN_HEADER = "column-header";
    const GTK_STYLE_REGION_TAB = "tab";
    const GTK_TEXT_VIEW_PRIORITY_VALIDATE = self::GDK_PRIORITY_REDRAW + 5;
    const GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID = -1;
    const GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID = -2;
    const GTK_UNIT_PIXEL = GtkEnum::GTK_UNIT_NONE;

    public function GTK_TYPE_NATIVE_DIALOG()
    {
        return self::$ffi->gtk_native_dialog_get_type();
    }

    public function GTK_WINDOW($window)
    {
        $gtype = $this->cast('GTypeInstance*', $window);
        $gtypeCast = $this->g_type_check_instance_cast($gtype, $this->gtk_window_get_type());
        return $this->cast('GtkWindow*', $gtypeCast);
    }

    public function GTK_RECENT_MANAGER_ERROR()
    {
        self::$ffi->gtk_recent_manager_error_quark();
    }

    public function GTK_RECENT_CHOOSER_ERROR()
    {
        return self::$ffi->gtk_recent_chooser_error_quark();
    }

    public function gtk_init(int $argc = 0, array $argv = [])
    {
        $argcPtr = $this->new("int32_t", true, false);
        $argcPtr->cdata = $argc;
        $ptr3 = self::$ffi->phpApi()->argsPtr($argc, $argv);
        $ptr4 = FFI::addr($ptr3);
        return self::$ffi->gtk_init(FFI::addr($argcPtr), $ptr4);
    }

    protected static function compileVersion()
    {
        define('GTK_MAJOR_VERSION', self::$ffi->gtk_get_major_version());
        define('GTK_MINOR_VERSION', self::$ffi->gtk_get_minor_version());
        define('GTK_MICRO_VERSION', self::$ffi->gtk_get_micro_version());
        define('GTK_BINARY_AGE', self::$ffi->gtk_get_binary_age());
        define('GTK_INTERFACE_AGE', self::$ffi->gtk_get_interface_age());
    }

    public function GTK_TYPE_STYLE_CONTEXT()
    {
        return self::$ffi->gtk_style_context_get_type();
    }

    public function GTK_STYLE_CONTEXT($o)
    {
        return $this->G_TYPE_CHECK_INSTANCE_CAST($o, GtkEnum::GTK_TYPE_STYLE_CONTEXT, $this->type('GtkStyleContext'));
    }

    public function GTK_STYLE_CONTEXT_CLASS($c)
    {
        return $this->G_TYPE_CHECK_CLASS_CAST($c, GtkEnum::GTK_TYPE_STYLE_CONTEXT, $this->type('GtkStyleContextClass'));
    }

    public function GTK_IS_STYLE_CONTEXT($o)
    {
        return $this->G_TYPE_CHECK_INSTANCE_TYPE($o, GtkEnum::GTK_TYPE_STYLE_CONTEXT);
    }

    public function GTK_IS_STYLE_CONTEXT_CLASS($c)
    {
        return $this->G_TYPE_CHECK_CLASS_TYPE($c, GtkEnum::GTK_TYPE_STYLE_CONTEXT);
    }

    public function GTK_STYLE_CONTEXT_GET_CLASS($o)
    {
        return $this->G_TYPE_INSTANCE_GET_CLASS($o, GtkEnum::GTK_TYPE_STYLE_CONTEXT, $this->type('GtkStyleContextClass'));
    }

    public function GTK_CHECK_VERSION($major, $minor, $micro)
    {
        return (GTK_MAJOR_VERSION > ($major) ||
            (GTK_MAJOR_VERSION == ($major) && GTK_MINOR_VERSION > ($minor)) ||
            (GTK_MAJOR_VERSION == ($major) && GTK_MINOR_VERSION == ($minor) &&
            GTK_MICRO_VERSION >= ($micro)));
    }

    public function gtk_major_version()
    {
        return self::$ffi->gtk_get_major_version();
    }

    public function gtk_minor_version()
    {
        return self::$ffi->gtk_get_minor_version();
    }

    public function gtk_micro_version()
    {
        return self::$ffi->gtk_get_micro_version();
    }

    public function gtk_binary_age()
    {
        return self::$ffi->gtk_get_binary_age();
    }

    public function gtk_interface_age()
    {
        return self::$ffi->gtk_get_interface_age();
    }

    public function gtk_widget_class_bind_template_callback($widget_class, $callback)
    {
        return self::$ffi->gtk_widget_class_bind_template_callback_full(
                GTK_WIDGET_CLASS($widget_class),
                $callback,
                $this->G_CALLBACK($callback)
        );
    }

    public function gtk_widget_class_bind_template_child($widget_class, $TypeName, $member_name)
    {
        return self::$ffi->gtk_widget_class_bind_template_child_full(
                $widget_class,
                $member_name,
                FALSE,
                $this->G_STRUCT_OFFSET($TypeName, $member_name)
        );
    }

    public function gtk_widget_class_bind_template_child_internal($widget_class, $TypeName, $member_name)
    {
        return self::$ffi->gtk_widget_class_bind_template_child_full(
                $widget_class,
                $member_name,
                TRUE,
                $this->G_STRUCT_OFFSET($TypeName, $member_name)
        );
    }

    public function gtk_widget_class_bind_template_child_private($widget_class, $TypeName, $member_name)
    {
        return self::$ffi->gtk_widget_class_bind_template_child_full(
                $widget_class,
                $member_name,
                FALSE,
                $this->G_PRIVATE_OFFSET($TypeName, $member_name)
        );
    }

    public function gtk_widget_class_bind_template_child_internal_private($widget_class, $TypeName, $member_name)
    {
        return self::$ffi->gtk_widget_class_bind_template_child_full(
                $widget_class,
                $member_name,
                TRUE,
                $this->G_PRIVATE_OFFSET($TypeName, $member_name)
        );
    }

    public function GTK_BUILDER_ERROR()
    {
        return self::$ffi->gtk_builder_error_quark();
    }

    public function GTK_CONTAINER($obj)
    {
        return $this->G_TYPE_CHECK_INSTANCE_CAST($obj, $this->GTK_TYPE_CONTAINER(), 'GtkContainer');
    }

    public function GTK_TYPE_CONTAINER()
    {
        return self::$ffi->gtk_container_get_type();
    }

    public function GTK_BUILDER_WARN_INVALID_CHILD_TYPE($object, $type)
    {
        return $this->g_warning("'%s' is not a valid child type of '%s'", $type, $this->g_type_name($this->G_OBJECT_TYPE($object)));
    }

    public function GTK_CELL_AREA_WARN_INVALID_CELL_PROPERTY_ID($object, $property_id, $pspec)
    {
        return $this->G_OBJECT_WARN_INVALID_PSPEC($object, "cell property id", $property_id, $pspec);
    }

    public function GTK_CONTAINER_WARN_INVALID_CHILD_PROPERTY_ID($object, $property_id, $pspec)
    {
        return $this->G_OBJECT_WARN_INVALID_PSPEC($object, "child property", $property_id, $pspec);
    }

    public function GTK_CSS_PROVIDER_ERROR()
    {
        return self::$ffi->gtk_css_provider_error_quark();
    }

    public function GTK_FILE_CHOOSER_ERROR()
    {
        return self::$ffi->gtk_file_chooser_error_quark();
    }

    public function GTK_ICON_THEME_ERROR()
    {
        return self::$ffi->gtk_icon_theme_error_quark();
    }

    public function GTK_IS_RESIZE_CONTAINER($widget)
    {
        return $this->GTK_IS_CONTAINER($widget) &&
            (self::$ffi->gtk_container_get_resize_mode($this->GTK_CONTAINER($widget)) != GtkEnum::GTK_RESIZE_PARENT);
    }

    public function GTK_PRINT_ERROR()
    {
        return self::$ffi->gtk_print_error_quark();
    }

    public function GTK_TYPE_GRID()
    {
        return self::$ffi->gtk_grid_get_type();
    }

    public function GTK_GRID($obj)
    {
        return $this->G_TYPE_CHECK_INSTANCE_CAST($obj, $this->GTK_TYPE_GRID(), 'GtkGrid');
    }

    public function GTK_GRID_CLASS($klass)
    {
        return $this->G_TYPE_CHECK_CLASS_CAST($klass, $this->GTK_TYPE_GRID(), 'GtkGridClass');
    }

    public function GTK_IS_GRID($obj)
    {
        return $this->G_TYPE_CHECK_INSTANCE_TYPE($obj, $this->GTK_TYPE_GRID());
    }

    public function GTK_IS_GRID_CLASS($klass)
    {
        return $this->G_TYPE_CHECK_CLASS_TYPE($klass, $this->GTK_TYPE_GRID());
    }

    public function GTK_GRID_GET_CLASS($obj)
    {
        return $this->G_TYPE_INSTANCE_GET_CLASS($obj, $this->GTK_TYPE_GRID(), 'GtkGridClass');
    }

}
