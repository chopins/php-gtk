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

trait Builtin
{
    public function __builtin_bswap32(CData $int)
    {
        $n = $int->cdata;
        $r = $this->new('guint64');
        $r->cdata = (($n & 0x000000ff) << 24) |
            (($n & 0x0000ff00) <<  8) |
            (($n & 0x00ff0000) >>  8) |
            (($n & 0xff000000) >> 24);
        return $r;
    }

    public function __builtin_bswap64(CData $v)
    {
        $val = $v->cdata;
        $r = $this->new('guint64');
        $r->cdata = (($val & 0x00000000000000ff) << 56) |
            (($val & 0x000000000000ff00) << 40) |
            (($val & 0x0000000000ff0000) << 24) |
            (($val & 0x00000000ff000000) << 8) |
            (($val & 0x000000ff00000000) << 8) |
            (($val & 0x0000ff0000000000) << 24) |
            (($val & 0x00ff000000000000) << 40) |
            (($val & 0xff00000000000000) << 56);

        return $r;
    }
}
