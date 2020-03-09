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

use Toknot\FFIExtend;
use FFI\CType;
use FFI\CData;

class FFI
{

    private $libId = '';
    private $instance = null;
    private $autoCast = true;
    private static $ffiExt = null;

    private function __construct()
    {
        if(self::$ffiExt === null) {
            self::$ffiExt = new FFIExtend;
        }
    }

    public function ffiExt()
    {
        return self::$ffiExt;
    }

    public function getFFI()
    {
        return $this->instance;
    }

    public function hasCFunc($fname)
    {
        return self::$ffiExt->hasCFunc($this->instance, $fname);
    }

    public function hasCType($type)
    {
        return self::$ffiExt->hasCType($this->instance, $type);
    }

    public function hasCVar($var)
    {
        return self::$ffiExt->hasCVariable($this->instance, $var);
    }

    public function getCTypeName(CType $type)
    {
        return self::$ffiExt->getCTypeName($type);
    }

    public function getCDataType(CData $data)
    {
        $type = \FFI::typeof($data);
        return $this->getCTypeName($type);
    }

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

    public function __get($name)
    {
        return $this->instance->$name;
    }

    public function __set($name, $v)
    {
        $this->instance->$name = $v;
    }

    public function __call($name, $args = [])
    {
        if($this->autoCast) {
            self::$ffiExt->castAllSameType($this->instance, $args);
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
