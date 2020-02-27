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
use Gtk\FFI;
use Gtk\DefineValue;
use Gtk\GtkFFI;
use Gtk\App;
use RuntimeException;

class GLib extends GtkFFI implements DefineValue
{

    public static $GETTEXT_PACKAGE = null;
    public static $gettextDll = '';
    private static $gettextFFI = null;
    protected static ?FFI $ffi = null;

    protected const ID = App::GLIB_ID;
    protected const UNIMPLEMENT = [
        'G_DEFINE_AUTOPTR_CLEANUP_FUNC',
        'G_DEFINE_AUTO_CLEANUP_CLEAR_FUNC',
        'G_DEFINE_AUTO_CLEANUP_FREE_FUNC',
        'G_STATIC_ASSERT',
        'G_GNUC_CHECK_VERSION',
        'G_GNUC_ALLOC_SIZE',
        'G_GNUC_ALLOC_SIZE2',
        'G_GNUC_DEPRECATED_FOR',
        'G_GNUC_PRINTF',
        'G_GNUC_SCANF',
        'G_GNUC_FORMAT',
        'G_DEPRECATED_FOR',
        'G_UNAVAILABLE',
        'G_LIKELY',
        'G_UNLIKELY',
        'G_LOCK_DEFINE',
        'G_LOCK_DEFINE_STATIC',
        'G_LOCK_EXTERN',
        'G_BREAKPOINT',
        'ABS',
        'g_alloca',
        'g_assert_',
        'g_autoptr',
        'g_autolist',
        'g_autoslist',
        'g_autoqueue',
        'g_auto',
        'g_autofree',
        'G_BEGIN_DECLS',
        'G_END_DECLS',
    ];
    const G_PRIORITY_HIGH_IDLE = 100;
    const G_ASCII_DTOSTR_BUF_SIZE = 29 + 10;
    const G_ATOMIC_LOCK_FREE = 1;
    const G_CSET_A_2_Z = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    const G_CSET_a_2_z = 'abcdefghijklmnopqrstuvwxyz';
    const G_CSET_DIGITS = '0123456789';
    const G_CSET_LATINC = '\300\301\302\303\304\305\306\307\310\311\312\313\314'
        . '\315\316\317\320\321\322\323\324\325\326\330\331\332\333\334\335\336';
    const G_CSET_LATINS = '\337\340\341\342\343\344\345\346\347\350\351\352\353'
        . '\354\355\356\357\360\361\362\363\364\365\366\370\371\372\373\374\375\376\377';

    protected static function compileVersion()
    {
        
    }

    public function gettext($string)
    {
        if(function_exists('gettext')) {
            return gettext($string);
        } else {
            if(self::$gettextFFI) {
                self::$gettextFFI = FFI::cdef('extern char *gettext (const char *__msgid);', self::$gettextDll);
            }
            return self::$gettextFFI->gettext($string);
        }
    }

    public function C_($Context, $String)
    {
        return self::$ffi->g_dpgettext(self::$GETTEXT_PACKAGE, "{$Context}\004{$String}", strlen($Context) + 1);
    }

    public function _($String)
    {
        if(self::$GETTEXT_PACKAGE) {
            return $this->cast('char *', self::$ffi->g_dgettext(self::$GETTEXT_PACKAGE, $String));
        }
        return $this->gettext($String);
    }

    public function Q_($String)
    {

        return self::$ffi->g_dpgettext(self::$GETTEXT_PACKAGE, $String, 0);
    }

    public function N_($String)
    {
        return $String;
    }

    public function NC_($Context, $String)
    {
        return $String;
    }

    public function g_bit_nth_lsf($mask, $nth_bit)
    {
        return self::$ffi->g_bit_nth_lsf_impl($mask, $nth_bit);
    }

    public function g_bit_nth_msf($mask, $nth_bit)
    {
        return self::$ffi->g_bit_nth_msf_impl($mask, $nth_bit);
    }

    public function g_bit_storage($number)
    {
        return self::$ffi->g_bit_storage_impl($number);
    }

    public function g_array_append_val($a, $v)
    {
        return self::$ffi->g_array_append_vals($a, FFI::addr($v), 1);
    }

    public function g_array_prepend_val($a, $v)
    {
        return self::$ffi->g_array_prepend_vals($a, FFI::addr($v), 1);
    }

    public function g_array_insert_val($a, $i, $v)
    {
        return self::$ffi->g_array_insert_vals($a, $i, FFI::addr($v), 1);
    }

    public function g_array_index($a, $t, $i)
    {
        return $this->cast("$t*", $this->cast('void*', $a[0]->data))[$i];
    }

    public function G_GINT64_CONSTANT($val)
    {
        return "$val##L";
    }

    public function G_GUINT64_CONSTANT($val)
    {
        return "$val##UL";
    }

    public function G_GOFFSET_CONSTANT($val)
    {
        return $this->G_GINT64_CONSTANT($val);
    }

    public function G_IS_DIR_SEPARATOR($c)
    {
        return $c === DIRECTORY_SEPARATOR || ($c) === '/';
    }

    public function CLAMP($x, $low, $high)
    {
        return ($x > $high) ? $high : (($x < $low) ? $low : $x);
    }

    public function G_STRUCT_MEMBER_P(CData $structPtr, int $structOffset)
    {
        $p = $this->new('guint8');
        $p->cdata = $this->cast('guint8*', $structPtr) + $structOffset;
        return $this->cast('gpointer', $p);
    }

    public function G_BOOKMARK_FILE_ERROR()
    {
        return self::$ffi->g_bookmark_file_error_quark();
    }

    public function G_STRUCT_MEMBER(string $type, CData $structPtr, int $structOffset)
    {
        return $this->cast("$type*", $this->G_STRUCT_MEMBER_P($structPtr, $structOffset))[0];
    }

    public function G_STRUCT_OFFSET(string $type, $member)
    {
        return $this->cast('glong', $this->cast('guint8*', FFI::addr($this->new($type)->$member)));
    }

    public function G_N_ELEMENTS(CData $arr)
    {
        return FFI::sizeof($arr) / FFI::sizeof($arr[0]);
    }

    public function GINT_TO_POINTER(CData $i)
    {
        return $this->trunCast($i, ['glong', 'gpointer']);
    }

    public function GPOINTER_TO_INT(CData $p)
    {
        return $this->trunCast($p, ['glong', 'gint']);
    }

    public function GUINT_TO_POINTER(CData $p)
    {
        return $this->trunCast($p, ['gulong', 'gpointer']);
    }

    public function GPOINTER_TO_UINT(CData $p)
    {
        return $this->trunCast($p, ['guint', 'gulong']);
    }

    public function GSIZE_TO_POINTER(CData $p)
    {
        return $this->trunCast($p, ['gsize', 'gpointer']);
    }

    public function GPOINTER_TO_SIZE(CData $p)
    {
        return $this->cast('gsize', $p);
    }

    public function g_htonl($val)
    {
        return $this->GUINT32_TO_BE($val);
    }

    public function g_htons($val)
    {
        return $this->GUINT16_TO_BE($val);
    }

    public function g_ntohl($val)
    {
        return $this->GUINT32_FROM_BE($val);
    }

    public function g_ntohs($val)
    {
        return $this->GUINT16_FROM_BE($val);
    }

    public function GINT_FROM_BE($val)
    {
        return $this->GINT_TO_BE($val);
    }

    public function GINT_FROM_LE($val)
    {
        return $this->GINT_TO_LE($val);
    }

    public function GINT_TO_BE($val)
    {
        return $this->cast('gint', $this->GINT32_TO_BE($val));
    }

    public function GINT_TO_LE($val)
    {
        return $this->cast('gint', $this->GINT32_TO_LE($val));
    }

    public function GUINT_FROM_BE($val)
    {
        return $this->GUINT_TO_BE($val);
    }

    public function GUINT_FROM_LE($val)
    {
        return $this->GUINT_TO_LE($val);
    }

    public function GUINT_TO_BE($val)
    {
        return $this->cast('guint', $this->GUINT32_TO_BE($val));
    }

    public function GUINT_TO_LE($val)
    {
        return $this->cast('guint', $this->GUINT32_TO_LE($val));
    }

    public function GLONG_FROM_BE($val)
    {
        return $this->GLONG_TO_BE($val);
    }

    public function GLONG_FROM_LE($val)
    {
        return $this->GLONG_TO_LE($val);
    }

    public function GLONG_TO_BE($val)
    {
        return $this->cast('glong', $this->GINT64_TO_BE($val));
    }

    public function GLONG_TO_LE($val)
    {
        return $this->cast('glong', $this->GINT64_TO_LE($val));
    }

    public function GULONG_FROM_BE($val)
    {
        return $this->GULONG_TO_BE($val);
    }

    public function GULONG_FROM_LE($val)
    {
        return $this->GULONG_TO_LE($val);
    }

    public function GULONG_TO_BE($val)
    {
        return $this->cast('gulong', $this->GUINT64_TO_BE($val));
    }

    public function GULONG_TO_LE($val)
    {
        return $this->cast('gulong', $this->GUINT64_TO_LE($val));
    }

    public function GSIZE_FROM_BE($val)
    {
        return $this->GSIZE_TO_BE($val);
    }

    public function GSIZE_FROM_LE($val)
    {
        return $this->GSIZE_TO_LE($val);
    }

    public function GSIZE_TO_BE($val)
    {
        return $this->cast('gsize', $this->GUINT64_TO_BE($val));
    }

    public function GSIZE_TO_LE($val)
    {
        return $this->cast('gsize', $this->GUINT64_TO_LE($val));
    }

    public function GSSIZE_FROM_BE($val)
    {
        return $this->GSSIZE_TO_BE($val);
    }

    public function GSSIZE_FROM_LE($val)
    {
        return $this->GSSIZE_TO_LE($val);
    }

    public function GSSIZE_TO_BE($val)
    {
        return $this->cast('gssize', $this->GINT64_TO_BE($val));
    }

    public function GSSIZE_TO_LE($val)
    {
        return $this->cast('gssize', $this->GINT64_TO_LE($val));
    }

    public function GINT16_FROM_BE($val)
    {
        return $this->GINT16_TO_BE($val);
    }

    public function GINT16_FROM_LE($val)
    {
        return $this->GINT16_TO_LE($val);
    }

    public function GINT16_TO_BE($val)
    {
        return $this->cast('gint16', $this->GUINT16_SWAP_LE_BE($val));
    }

    public function GINT16_TO_LE($val)
    {
        return $this->cast('gint16', $val);
    }

    public function GUINT16_FROM_BE($val)
    {
        return $this->GUINT16_TO_BE($val);
    }

    public function GUINT16_FROM_LE($val)
    {
        return $this->GUINT16_TO_LE($val);
    }

    public function GUINT16_TO_BE($val)
    {
        return $this->GUINT16_SWAP_LE_BE($val);
    }

    public function GUINT16_TO_LE($val)
    {
        return $this->cast('guint16', $val);
    }

    public function GINT32_FROM_BE($val)
    {
        return $this->GINT32_TO_BE($val);
    }

    public function GINT32_FROM_LE($val)
    {
        return $this->GINT32_TO_LE($val);
    }

    public function GINT32_TO_BE($val)
    {
        return $this->cast('gint32', $this->GUINT32_SWAP_LE_BE($val));
    }

    public function GINT32_TO_LE($val)
    {
        return $this->cast('gint32', $val);
    }

    public function GUINT32_FROM_BE($val)
    {
        return $this->GUINT32_TO_BE($val);
    }

    public function GUINT32_FROM_LE($val)
    {
        return $this->GUINT32_TO_LE($val);
    }

    public function GUINT32_TO_BE($val)
    {
        return $this->GUINT32_SWAP_LE_BE($val);
    }

    public function GUINT32_TO_LE($val)
    {
        return $this->cast('guint32', $val);
    }

    public function GINT64_FROM_BE($val)
    {
        return $this->GINT64_TO_BE($val);
    }

    public function GINT64_FROM_LE($val)
    {
        return $this->GINT64_TO_LE($val);
    }

    public function GINT64_TO_BE($val)
    {
        return $this->cast('gint64', $this->GUINT64_SWAP_LE_BE($val));
    }

    public function GINT64_TO_LE($val)
    {
        return $this->cast('gint64', $val);
    }

    public function GUINT64_FROM_BE($val)
    {
        return $this->GUINT64_TO_BE($val);
    }

    public function GUINT64_FROM_LE($val)
    {
        return $this->GUINT64_TO_LE($val);
    }

    public function GUINT64_TO_BE($val)
    {
        return $this->GUINT64_SWAP_LE_BE($val);
    }

    public function GUINT64_TO_LE($val)
    {
        return $this->cast('guint64', $val);
    }

    public function GUINT16_SWAP_BE_PDP($val)
    {
        return $this->GUINT16_SWAP_LE_BE($val);
    }

    public function GUINT16_SWAP_LE_BE($val)
    {
        return $this->GUINT16_SWAP_LE_BE_IA32($val);
    }

    public function GUINT16_SWAP_LE_BE_IA32($val)
    {
        $r = $this->new('guint16');
        $v = $val->cdata;
        $r->cdata = $v >> 8 | $v << 8;
        return $r;
    }

    public function GUINT16_SWAP_LE_PDP($val)
    {
        return $this->cast('guint16', $val);
    }

    public function GUINT32_SWAP_BE_PDP($val)
    {
        if($val instanceof FFI) {
            $v = $val->cdata;
        }
        $r = $this->new('guint32');
        $r->cdata = ((($v & 0x00ff00ff) << 8) | (($v & 0xff00ff00) >> 8));
        return $r;
    }

    public function GUINT32_SWAP_LE_BE($val)
    {
        return $this->cast('guint32', $this->__builtin_bswap32($this->cast('guint32', $val)));
    }

    public function GUINT32_SWAP_LE_PDP($val)
    {
        if($val instanceof FFI) {
            $v = $val->cdata;
        }
        $r = $this->new('guint32');
        $r->cdata = ((($v & 0x0000ffff) << 16) | (($v & 0xffff0000) >> 16));
        return $r;
    }

    public function GUINT64_SWAP_LE_BE($val)
    {
        return $this->cast('guint64', $this->__builtin_bswap64($this->cast('guint64', $val)));
    }

    public function g_uint_checked_add(CData $d, CData $a, CData $b)
    {
        $d[0]->cdata = $a->cdata + $b->cdata;
        return $d[0]->cdata >= $a->cdata;
    }

    public function g_uint_checked_mul(CData $dest, CData $a, CData $b)
    {
        $dest[0]->cdata = $a->cdata * $b->cdata;
        return !$a->cdata || $dest[0]->cdaa / $a->cdata == $b->cdata;
    }

    public function g_uint64_checked_add(CData $dest, CData $a, CData $b)
    {
        $dest[0]->cdata = $a->cdata + $b->cdata;
        return $dest[0]->cdata >= $a->cdata;
    }

    public function g_uint64_checked_mul(CData $dest, CData $a, CData $b)
    {
        $dest[0]->cdata = $a->cdata * $b->cdata;
        return !$a->cdata || $dest->cdata / $a->cdata == $b->cdata;
    }

    public function g_size_checked_add(CData $dest, CData $a, CData $b)
    {
        return $this->g_uint_checked_add($dest, $a, $b);
    }

    public function g_size_checked_mul(CData $dest, CData $a, CData $b)
    {
        return $this->g_uint_checked_mul($dest, $a, $b);
    }

    public function g_auto($type)
    {
        return $type;
    }

    public function g_autoptr($type)
    {
        return "{$type}_autoptr";
    }

    public function g_autolist($type)
    {
        return "{$type}_listautoptr";
    }

    public function g_autoslist($type)
    {
        return "{$type}_slistautoptr";
    }

    public function G_VA_COPY($a, $b)
    {
        try {
            count($a);
        } catch(\FFI\Exception $e) {
            throw new RuntimeException("C macro G_DEFINE_AUTO_CLEANUP_FREE_FUNC() copy array not implement");
        }
        if(isset($a[0])) {
            return $a[0] = $b[0];
        } else {
            return $a->cdata = $b->cdata;
        }
    }

    public function G_STRINGIFY_ARG($str)
    {
        return $str;
    }

    public function G_STRINGIFY($str)
    {
        return $this->G_STRINGIFY_ARG($str);
    }

    public function G_PASTE_ARGS($identifier1, $identifier2)
    {
        return "{$identifier1}{$identifier2}";
    }

    public function G_PASTE($identifier1, $identifier2)
    {
        return $this->G_PASTE_ARGS($identifier1, $identifier2);
    }

    public function G_STATIC_ASSERT_EXPR($expr)
    {
        return $this->cast('void', $this->gtk->sizeof(FFI::type('char[' . ($expr ? 1 : -1) . ']')));
    }

    public function G_LOCK_NAME($name)
    {
        return "g__${$name}_lock";
    }

    public function G_LOCK($name)
    {
        $f = $this->new($this->G_LOCK_NAME($name));
        return $this->g_mutex_lock($f);
    }

    public function G_TRYLOCK($name)
    {
        $f = $this->new($this->G_LOCK_NAME($name));
        return $this->g_mutex_trylock($f);
    }

    public function G_UNLOCK($name)
    {
        $f = $this->new($this->G_LOCK_NAME($name));
        return $this->g_mutex_lock($f);
    }

}
