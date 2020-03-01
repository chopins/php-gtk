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
    private $gtkTypeCast = '';

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

    public function getParentInstance()
    {
        $typeInstance = $this->getTypeInstance();
        return $typeInstance[0]->parent_instance;
    }

    public function toContainer()
    {
        return self::$gtkApp->GTK_CONTAINER($this->widget);
    }

    public function containerAdd($child)
    {
        if($child instanceof GtkWidget) {
            $child = $child->getCData();
        }
        return self::$gtkApp->gtk_container_add($this->toContainer(), $child);
    }

    public function getTypeClass()
    {
        return $this->type;
    }

    public function getTypeInstance()
    {
        $typeCast = strtoupper($this->gtkTypeCast);
        return self::$gtkApp->$typeCast($this->widget);
    }

    protected function setTypeClass()
    {
        $this->type = self::$gtkApp->G_TYPE_FROM_CLASS($this->widget->parent_instance->g_type_instance);
        $this->gtkTypeCast = substr(preg_replace('/([A-Z])/', '_$1', $this->type), 1);
    }

    public static function castWidget(&$args)
    {
        foreach($args as &$arg) {
            if($arg instanceof GtkWidget) {
                $arg = $arg->getCData();
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
        $w = $this->getTypeInstance();
        $fn = "{$this->gtkTypeCast}_{$name}";
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
                $w->setTypeClass();
                return $w;
            }
            return $res;
        }
    }

}
