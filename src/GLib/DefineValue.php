<?php


/**
 * php-gtk (http://toknot.com)
 *
 * @copyright  Copyright (c) 2019 Szopen Xiao (Toknot.com)
 * @license    http://toknot.com/LICENSE.txt New BSD License
 * @link       https://github.com/chopins/php-gtk
 * @version    0.1
 */

namespace GTK\GLib;

interface DefineValue
{
    const G_MAXINT = 2147483647;
    const G_MININT = -2147483648;
    const G_MAXUINT = PHP_INT_SIZE === 4 ? '4294967295' : 4294967295;
    const G_MAXSHORT = 32767;
    const G_MINSHORT = -32768;
    const G_MAXUSHORT = 65535;
    const G_MINLONG = PHP_INT_MIN;
    const G_MAXLONG = PHP_INT_MAX;
    const G_MAXULONG = PHP_INT_SIZE === 8 ? '18446744073709551615' : '4294967295';
    const G_MININT8 = -128;
    const G_MAXINT8 = 127;
    const G_MAXUINT8 = 255;
    const G_MININT16 = 32768;
    const G_MAXINT16 = 0x7fff;
    const G_GINT16_MODIFIER = 'h';
    const G_GINT16_FORMAT = 'hi';
    const G_MAXUINT16 = 0xffff;
    const G_GUINT16_FORMAT = 'hu';
    const G_MININT32 = -0x80000000;
    const G_MAXINT32 = 0x7fffffff;
    const G_GINT32_MODIFIER = '';
    const G_GINT32_FORMAT = 'i';
    const G_MAXUINT32 = PHP_INT_SIZE === 4 ? '4294967295' : 4294967295;
    const G_GUINT32_FORMAT = 'u';
    const G_MININT64 = PHP_INT_SIZE === 4 ? '-9223372036854775808' : -9223372036854775808;
    const G_MAXINT64 = PHP_INT_SIZE === 4 ? '9223372036854775807' : 9223372036854775807;
    const G_GINT64_MODIFIER = "l";
    const G_GINT64_FORMAT = "li";
    const G_MAXUINT64 = '18446744073709551615';
    const G_GUINT64_FORMAT = "lu";
    const G_MINFLOAT =  1.175494351e38;
    const G_MAXFLOAT = 3.402823466e38;
    const G_MINDOUBLE = PHP_FLOAT_MIN;
    const G_MAXDOUBLE = PHP_FLOAT_MAX;
    const G_MAXSIZE  =  self::G_MAXULONG;
    const G_GSIZE_MODIFIER = "l";
    const G_MINSSIZE = self::G_MINLONG;
    const G_MAXSSIZE  = self::G_MAXLONG;
    const G_GSSIZE_MODIFIER  =  "l";
    const G_GSSIZE_FORMAT  =  "li";
    const G_MINOFFSET =  self::G_MININT64;
    const G_MAXOFFSET =  self::G_MAXINT64;
    const G_GOFFSET_MODIFIER = self::G_GINT64_MODIFIER;
    const G_GOFFSET_FORMAT =  self::G_GINT64_FORMAT;

    const G_GINTPTR_MODIFIER   =   "l";
    const G_GINTPTR_FORMAT        =  "li";
    const G_GUINTPTR_FORMAT        = "lu";
    const G_OS_WIN32 = PHP_OS_WIN;
    const G_OS_UNIX = !PHP_OS_WIN;
    const G_DIR_SEPARATOR = DIRECTORY_SEPARATOR;
    const G_DIR_SEPARATOR_S = DIRECTORY_SEPARATOR;
    const G_SEARCHPATH_SEPARATOR = PHP_OS_WIN ? ';' : ':';
    const G_SEARCHPATH_SEPARATOR_S = PHP_OS_WIN ? ';' : ':';
    const GLIB_SIZEOF_VOID_P = PHP_INT_SIZE;
    const G_MEM_ALIGN = self::GLIB_SIZEOF_VOID_P;
}
