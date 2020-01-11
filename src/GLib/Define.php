<?php

/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace Gtk\GLib;

use FFI\CData;
use FFI;

trait Define
{
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
        return $this->cast('gpointer', $this->cast('guint8*', $structPtr) + $this->cast('glong', $structOffset)->cdata);
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
}
