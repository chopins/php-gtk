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
use Gtk\PHPGtk;
use Gtk\GtkAbstract;

class Atk extends GtkAbstract
{

    protected static ?FFI $ffi = null;
    private array $defineTypeFunc = [];

    protected const ID = PHPGtk::ATK_ID;
    protected const UNIMPLEMENT = [];

    public function ATK_CHECK_VERSION($major, $minor, $micro)
    {
        return ATK_MAJOR_VERSION > $major ||
            (ATK_MAJOR_VERSION == $major && ATK_MINOR_VERSION > $minor) ||
            (ATK_MAJOR_VERSION == $major && ATK_MINOR_VERSION == $minor &&
            ATK_MICRO_VERSION >= $micro);
    }

    protected function dynCall($name, $arguments = [], &$ret = false)
    {
        if(isset($this->defineTypeFunc[$name])) {
            $ret = true;
            $func = $this->defineTypeFunc[$name];
            return $func($name, ...$arguments);
        }
        parent::dynCall($name, $arguments, $ret);
    }

    protected static function compileVersion()
    {
        define('ATK_MAJOR_VERSION', self::$ffi->atk_get_major_version());
        define('ATK_MINOR_VERSION', self::$ffi->atk_get_minor_version());
        define('ATK_MICRO_VERSION', self::$ffi->atk_get_micro_version());
        define('ATK_BINARY_AGE', self::$ffi->atk_get_binary_age());
        define('ATK_INTERFACE_AGE', self::$ffi->atk_get_interface_age());
    }

    protected function availableIn(&$code)
    {
        parent::availableIn($code);
        $ffi = $this->preLoad(self::ID, 'typedef unsigned int guint;guint atk_get_major_version(void);guint atk_get_minor_version(void);guint atk_get_micro_version(void);');
        $v = "{$ffi->atk_get_major_version()}.{$ffi->atk_get_minor_version()}.{$ffi->atk_get_micro_version()}";
        $this->requireMinVersion(self::ID, $v);
        $this->versionReplace($code, 'ATK_AVAILABLE_IN', '2.30', $v);
    }

    public function ATK_TYPE_RANGE()
    {
        return self::$ffi->atk_range_get_type();
    }

    public function ATK_DEFINE_TYPE($TN, $tuN, $TP)
    {
        return $this->ATK_DEFINE_TYPE_EXTENDED($TN, $tuN, $TP, 0, '');
    }

    public function ATK_DEFINE_TYPE_EXTENDED(string $TN, string $tuN, $__TPVar, $__fVar, string $U_CODE)
    {
        $code = $this->_ATK_DEFINE_TYPE_EXTENDED_BEGIN($TN, $tuN);
        $code .= $U_CODE;
        $code .= $this->_ATK_DEFINE_TYPE_EXTENDED_END();
        eval($code);
    }

    public function ATK_DEFINE_TYPE_WITH_CODE(string $TN, string $tuN, $__TPVar, string $U_CODE)
    {
        $__fVal = 0;
        $code = $this->_ATK_DEFINE_TYPE_EXTENDED_BEGIN($TN, $tuN);
        $code .= $U_CODE;
        $code .= $this->_ATK_DEFINE_TYPE_EXTENDED_END();
        eval($code);
    }

    public function ATK_DEFINE_ABSTRACT_TYPE(string $TN, string $tuN, $TPVar)
    {
        return $this->ATK_DEFINE_TYPE_EXTENDED($TN, $tuN, $TPVar, self::$ffi->G_TYPE_FLAG_ABSTRACT, '');
    }

    public function ATK_DEFINE_ABSTRACT_TYPE_WITH_CODE(string $TN, string $tuN, $__TPVar, string $U_CODE)
    {
        $__fVal = self::$ffi->G_TYPE_FLAG_ABSTRACT;
        $code = $this->_ATK_DEFINE_TYPE_EXTENDED_BEGIN($TN, $tuN);
        $code .= $U_CODE;
        $code .= $this->_ATK_DEFINE_TYPE_EXTENDED_END();
        eval($code);
    }

    private function _ATK_DEFINE_TYPE_EXTENDED_BEGIN(string $TN, string $typeName)
    {
        $tn_init = "{$typeName}_init";
        $tn_class_init = "{$typeName}_class_init";
        $tn_parent_class = "\${$typeName}_parent_class";
        $tn_get_type = "{$typeName}_get_type";
        $tn_class_intern_init = "{$typeName}_class_intern_init";

        $code = <<<CODE
        \$this->$tn_parent_class = \$this->new('gpointer');

        \$this->defineTypeFunc['$tn_class_intern_init'] = function (\$klass){
            \$this->$tn_parent_class = \$this->g_type_class_peek_parent(\$klass);
            $tn_class_init(\$this->cast('{$TN}Class*', \$klass));
        }
        
        \$this->defineTypeFunc['$tn_get_type'] = function () {
            \$g_define_type_id__volatile = \$this->new('gsize');
            \$g_define_type_id__volatile->cdata = 0;

            if (\$this->g_once_init_enter(FFI::addr(\$this->g_define_type_id__volatile))) {
                \$derived_type = \$this->g_type_parent(\$__TPVar);
                \$factory = \$this->atk_registry_get_factory(
                    \$this->atk_get_default_registry(),
                    \$derived_type
                );
                \$derived_atk_type = \$this->atk_object_factory_get_accessible_type(\$factory);
                \$query = \$this->new('GTypeQuery');
                \$this->g_type_query(\$derived_atk_type, FFI::addr(\$query));
                \$g_define_type_id = \$this->g_type_register_static_simple(\$derived_atk_type,
                    \$this->g_intern_static_string($TN),
                    \$query->class_size,
                    $tn_class_intern_init,
                    \$query->instance_size,
                    $tn_init,
                    \$this->cast('GTypeFlags', \$__fVar));
            }
        CODE;
        return $code;
    }

    private function _ATK_DEFINE_TYPE_EXTENDED_END()
    {
        return <<<'CODE'
            $this->g_once_init_leave (FFI::addr($g_define_type_id__volatile), $g_define_type_id);
            return $this->g_define_type_id__volatile;
        }
        CODE;
    }

}
