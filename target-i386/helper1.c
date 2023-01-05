/*
 *  i386 helpers
 *
 *  Copyright (c) 2003 Fabrice Bellard
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <signal.h>
#include <assert.h>

#include "cpu.h"
#include "qemu-common.h"
#include "host-utils.h"
#include "exec-all.h"
#include "svm.h"

#define MAXTAN 9223372036854775808.0

#ifdef USE_X86LDOUBLE

/* only for x86 */
typedef union {
    long double d;
    struct {
        unsigned long long lower;
        unsigned short upper;
    } l;
} CPU86_LDoubleU;

/* the following deal with x86 long double-precision numbers */
#define MAXEXPD 0x7fff
#define EXPBIAS 16383
#define EXPD(fp)	(fp.l.upper & 0x7fff)
#define SIGND(fp)	((fp.l.upper) & 0x8000)
#define MANTD(fp)       (fp.l.lower)
#define BIASEXPONENT(fp) fp.l.upper = (fp.l.upper & ~(0x7fff)) | EXPBIAS

#else

/* NOTE: arm is horrible as double 32 bit words are stored in big endian ! */
typedef union {
    double d;
#if (!defined(WORDS_BIGENDIAN) && !defined(__arm__)) || defined(UNDER_CE)
    struct {
        uint32_t lower;
        int32_t upper;
    } l;
#else
    struct {
        int32_t upper;
        uint32_t lower;
    } l;
#endif
#if !defined(__arm__) || defined(UNDER_CE)
    int64_t ll;
#endif
} CPU86_LDoubleU;

/* the following deal with IEEE double-precision numbers */
#define MAXEXPD 0x7ff
#define EXPBIAS 1023
#define EXPD(fp)	(((fp.l.upper) >> 20) & 0x7FF)
#define SIGND(fp)	((fp.l.upper) & 0x80000000)
#if defined(__arm__) && !defined(UNDER_CE)
#define MANTD(fp)	(fp.l.lower | ((uint64_t)(fp.l.upper & ((1 << 20) - 1)) << 32))
#else
#define MANTD(fp)	(fp.ll & ((1LL << 52) - 1))
#endif
#define BIASEXPONENT(fp) fp.l.upper = (fp.l.upper & ~(0x7ff << 20)) | (EXPBIAS << 20)
#endif

#ifndef USE_X86LDOUBLE

void cpu_get_fp80(uint64_t *pmant, uint16_t *pexp, CPU86_LDouble f)
{
    CPU86_LDoubleU temp;
    int e;

    temp.d = f;
    /* mantissa */
    *pmant = (MANTD(temp) << 11) | (1LL << 63);
    /* exponent + sign */
    e = EXPD(temp) - EXPBIAS + 16383;
    e |= SIGND(temp) >> 16;
    *pexp = e;
}

CPU86_LDouble cpu_set_fp80(uint64_t mant, uint16_t upper)
{
    CPU86_LDoubleU temp;
    int e;
    uint64_t ll;

    /* XXX: handle overflow ? */
    e = (upper & 0x7fff) - 16383 + EXPBIAS; /* exponent */
    e |= (upper >> 4) & 0x800; /* sign */
    ll = (mant >> 11) & ((1LL << 52) - 1);
#if defined(__arm__) && !defined(UNDER_CE)
    temp.l.upper = (e << 20) | (ll >> 32);
    temp.l.lower = ll;
#else
    temp.ll = ll | ((uint64_t)e << 52);
#endif
    return temp.d;
}

#else

void cpu_get_fp80(uint64_t *pmant, uint16_t *pexp, CPU86_LDouble f)
{
    CPU86_LDoubleU temp;

    temp.d = f;
    *pmant = temp.l.lower;
    *pexp = temp.l.upper;
}

CPU86_LDouble cpu_set_fp80(uint64_t mant, uint16_t upper)
{
    CPU86_LDoubleU temp;

    temp.l.upper = upper;
    temp.l.lower = mant;
    return temp.d;
}
#endif
