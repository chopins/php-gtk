<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2020 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace Gtk;

use Gtk\PHPGtk;

class GtkWidget
{

    private static $gtkApp = null;
    private $widget = null;
    private $type = '';

    public static function init(PHPGtk $gtk)
    {
        if($gtk) {
            self::$gtkApp = $gtk;
        }
    }

    private function __construct($widget)
    {
        $this->widget = $widget;
    }

    public function getCData()
    {
        return $this->widget;
    }

    public function __invoke()
    {
        return $this->widget;
    }

    public function setType($type)
    {
        $type = substr(preg_replace('/([A-Z])/', '_$1', $type), 1);
        $this->type = strtolower($type);
    }

    public function toContainer()
    {
        return self::$gtkApp->GTK_CONTAINER($this->widget);
    }

    public static function castWidget(&$args)
    {
        foreach($args as &$arg) {
            if($arg instanceof GtkWidget) {
                $arg = $arg->getWidgetCData();
            }
        }
    }

    /**
     * 
     * @param string $name
     * @param array $arguments
     * @return FFI\CData
     */
    public function __call($name, $arguments = [])
    {
        self::castWidget($arguments);
        $typeCast = strtoupper($this->type);
        $w = self::$gtkApp->$typeCast($this->widget);
        $fn = "{$this->type}_{$name}";
        return self::$gtkApp->$fn($w, ...$arguments);
    }

    public static function __callStatic($name, $args = [])
    {
        self::castWidget($args);
        $res = self::$gtkApp->$name(...$args);
        if($res instanceof \FFI\CData) {
            $type = \FFI::typeof($res);
            $struct = self::$gtkApp->currentFFI()->ffiExt()->getCTypeName($type);
            if($struct === 'struct _GtkWidget' || $struct === 'struct _GtkWidget*') {
                $w = new static($res);
                $w->type = explode('_new', $name, 1)[0];
                return $w;
            }
            return $res;
        }
    }

}
