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
use FFI;
use Gtk\DefineValue;
use Gtk\GtkFFI;
use Gtk\App;
use RuntimeException;

class GLib extends GtkFFI implements DefineValue
{
    protected static $ffi = null;
    const ID = App::GLIB_ID;
    const MATCH_FULL = [
        'g_unix_fd_add', 'g_unix_fd_add_full', 'g_unix_fd_source_new', 'g_unix_open_pipe',
        'g_unix_set_fd_nonblocking', 'g_unix_signal_add', 'g_unix_signal_add_full',
        'g_unix_signal_source_news', 'g_unlink', 'g_unsetenv', 'g_usleep', 'g_utime',
        'g_vasprintf', 'g_vfprintf', 'g_vprintf', 'g_vsnprintf', 'g_vsprintf','g_rmdir',
        'g_win32_check_windows_version', 'g_win32_error_message', 'g_win32_locale_filename_from_utf8',
        'g_basename', 'g_file_get_contents', 'g_file_open_tmp', 'g_file_error_from_errno',
        'g_file_read_link', 'g_file_set_contents', 'g_file_test', 'g_find_program_in_path',
        'g_fopen', 'g_io_create_watch', 'g_listenv', 'g_list_delete_link', 'g_remove',
    ];

    const MATCH_PREFIX = [
        'g_array_', 'g_ascii_', 'g_async_queue_', 'g_base64_',
        'g_lib_', 'g_atomic_', 'g_bit_', 'g_bookmark_', 'g_build_',
        'g_bytes_', 'g_cache_', 'g_chdir', 'g_checksum_', 'g_child_', 'g_chmod',
        'g_clear_', 'g_close', 'g_completion_', 'g_compute_', 'g_cond_', 'g_convert',
        'g_creat', 'g_datalist_', 'g_date_', 'g_dcgettext', 'g_dgettext', 'g_direct_',
        'g_dir', 'g_double_', 'g_dpgettext', 'g_environ_', 'g_error_', 'g_filename_display_',
        'g_filename_from_', 'g_filename_to_', 'g_format_', 'g_fprintf', 'g_free', 'g_list_sort',
        'g_freopen', 'g_get', 'g_hash_', 'g_hmac_', 'g_hook_', 'g_hostname_', 'g_iconv',
        'g_idle_', 'gint', 'g_int_', 'g_io_channel_', 'g_key_', 'g_list_a', 'g_list_co',
        'g_log', 'g_locale_', 'g_list_f', 'g_list_in', 'g_list_l', 'g_list_n', 'g_list_p',
        'g_lstat', 'g_main_', 'g_malloc', 'g_mapped_file_', 'g_io_add_watch', 'g_list_re',
        'g_markup_', 'g_match_info_', 'g_memdup', 'g_memmove', 'g_mem_', 'g_mk', 'g_module_',
        'g_mutex_', 'g_node_', 'g_nullify_pointer', 'g_once_init_', 'g_on_error_', 'g_open',
        'g_option_', 'g_parse_debug_string', 'g_path_', 'g_pattern_', 'g_pointer_bit_',
        'g_poll', 'g_prefix_error', 'g_print', 'g_private_', 'g_propagate_', 'g_ptr_array_',
        'g_qsort_with_data', 'g_quark_', 'g_queue_', 'g_random_', 'g_rand_', 'g_rec_',
        'g_regex_', 'g_rel', 'g_ren', 'g_return_',
        'g_rw_lock_', 'g_scanner_', 'g_sequence_', 'g_setenv', 'g_set_', 'g_shell_', 'g_slice_',
        'g_slist_', 'g_snprintf', 'g_source_', 'g_spaced_primes_closest', 'g_spawn_', 'g_sprintf',
        'g_st', 'g_test_', 'g_thread_', 'g_time', 'g_tr', 'g_tuples_', 'g_ucs4_to_', 'guint',
        'g_unic', 'g_uri_', 'g_utf', 'g_variant_', 'g_uuid_string_', 'g_warn', 'g_win32_get'
    ];

    const UNIMPLEMENT = [
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
    ];

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
        $p->cdata = $this->cast('guint8*', $structPtr) +  $structOffset;
        return $this->cast('gpointer', $p);
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
    public function  GUINT32_SWAP_BE_PDP($val)
    {
        if ($val instanceof FFI) {
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
        if ($val instanceof FFI) {
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
        return  "{$type}_autoptr";
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
        } catch (\FFI\Exception $e) {
            throw new RuntimeException("C macro G_DEFINE_AUTO_CLEANUP_FREE_FUNC() copy array not implement");
        }
        if (isset($a[0])) {
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
