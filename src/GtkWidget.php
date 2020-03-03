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
    private $typeInstance = null;

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

    public function parent($type)
    {
        $w = new static($this->widget);
        $w->type = $type;
        $w->gtkTypeCast = $w->getTypeCast();
        $w->typeInstance = $w->castTypeInstance();
        return $w;
    }

    public function container()
    {
        return $this->parent('GtkContainer');
    }

    public function getTypeClass()
    {
        return $this->type;
    }

    public function getTypeInstance()
    {
        return $this->typeInstance;
    }

    public function getTypeCast()
    {
        return strtolower(substr(preg_replace('/([A-Z])/', '_$1', $this->type), 1));
    }

    /**
     * 
     * @param string $sig
     * @param callable $callable
     * @param mix $data
     */
    public function sConnect($sig, $callable, $data = null)
    {
        return self::$gtkApp->g_signal_connect($this->widget, $sig, self::$gtkApp->G_CALLBACK($callable), $data);
    }

    public function sConnectS($sig, $callable, $data)
    {
        self::castWidget($data);
        return self::$gtkApp->g_signal_connect_swapped($this->widget, $sig, self::$gtkApp->G_CALLBACK($callable), $data);
    }

    public function sConnectA($sig, $callable, $data)
    {
        self::castWidget($data);
        return self::$gtkApp->g_signal_connect_after($this->widget, $sig, self::$gtkApp->G_CALLBACK($callable), $data);
    }

    protected function castTypeInstance()
    {
        $typeCast = strtoupper($this->gtkTypeCast);
        return self::$gtkApp->$typeCast($this->widget);
    }

    protected function setTypeClass()
    {
        $this->type = self::$gtkApp->G_OBJECT_CLASS_NAME($this->widget->parent_instance->g_type_instance);
        $this->gtkTypeCast = $this->getTypeCast();
        $this->typeInstance = $this->castTypeInstance();
    }

    public static function castWidget(&$args)
    {
        if(is_array($args)) {
            foreach($args as &$arg) {
                self::castWidget($arg);
            }
        } else {
            if($args instanceof GtkWidget) {
                $args = $args->getCData();
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
        $fn = "{$this->gtkTypeCast}_{$name}";
        $res = self::$gtkApp->$fn($this->typeInstance, ...$arguments);
        if($res instanceof \FFI\CData) {
            $type = \FFI::typeof($res);
            $struct = self::$gtkApp->ffi->ffiExt()->getCTypeName($type);
            if($struct === 'struct _GtkWidget' || $struct === 'struct _GtkWidget*') {
                $w = new static($res);
                $w->setTypeClass();
                return $w;
            }
        }
        return $res;
    }

    /**
     * 
     * @param sttring $name
     * @param array $args
     * @return GtkWidget
     */
    public static function __callStatic($name, $args = [])
    {
        self::castWidget($args);
        $res = self::$gtkApp->$name(...$args);
        if($res instanceof \FFI\CData) {
            $type = \FFI::typeof($res);
            $struct = self::$gtkApp->ffi->ffiExt()->getCTypeName($type);
            if($struct === 'struct _GtkWidget' || $struct === 'struct _GtkWidget*') {
                $w = new static($res);
                $w->setTypeClass();
                return $w;
            }
        }
        return $res;
    }

}
