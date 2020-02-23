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

use FFI\CData;

class FFI
{

    private $libId = '';
    private $instance = null;
    private $autoCast = true;

    public function autoCast($enable = true)
    {
        $this->autoCast = $enable;
    }

    public function id($id = null)
    {
        if($id === null) {
            return $this->libId;
        }
        $this->libId = $id;
    }

    public function castArgsType(&$args)
    {
        foreach ($args as &$v) {
            if($v instanceof CData) {
                $typeStruct = \FFI::typeof($v);
                ob_start();
                var_dump($typeStruct);
                $type = ob_get_clean();
                strtok($type, ':');
                $typeString = strtok(')#');
                $v = $this->instance->cast($typeString, $v);
            }
        }
    }

    public function __call($name, $args = [])
    {
        if($this->autoCast) {
            $this->castArgsType($args);
        }
        return $this->instance->$name(...$args);
    }

    public static function __callStatic($name, $args = [])
    {
        $ret = \FFI::$name(...$args);
        if($ret instanceof \FFI) {
            $obj = new static;
            $obj->instance = $ret;
            return $obj;
        }
        return $ret;
    }

}
