/*
 *  Host code generation
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

#include "config.h"
#include "osdep.h"

enum {
#define DEF(s, n, copy_size) INDEX_op_ ## s,
#include "opc.h"
#undef DEF
    NB_OPS,
};

#include "dyngen.h"
//extern int dyngen_code(uint8_t *gen_code_buf,
//                       uint16_t *label_offsets, uint16_t *jmp_offsets,
//                       const uint16_t *opc_buf, const uint32_t *opparam_buf, const long *gen_labels);
#ifdef UNDER_CE
inline void my_memcpy (void *dst0, const void *src0, size_t len)
{
  int dummy;
  asm volatile (
"                SUBS    %2, %2, #0x20       \n\
                BLT     1f                  \n\
0:                                          \n\
                LDMIA   %1!, {R3-R5,LR}     \n\
                STMIA   %0!, {R3-R5,LR}     \n\
                LDMIA   %1!, {R3-R5,LR}     \n\
                SUBS    %2, %2, #0x20       \n\
                STMIA   %0!, {R3-R5,LR}     \n\
                BGE     0b                  \n\
1:                                          \n\
                ADDS    %2, %2, #0x10       \n\
                LDMGEIA %1!, {R3-R5,LR}     \n\
                STMGEIA %0!, {R3-R5,LR}     \n\
                BEQ     2f                  \n\
                SUBGTS  %2, %2, #0x10       \n\
                ADDS    %2, %2, #8          \n\
                LDMGEIA %1!, {R3,R4}        \n\
                SUBGE   %2, %2, #8          \n\
                STMGEIA %0!, {R3,R4}        \n\
                ADDS    %2, %2, #4          \n\
                LDRGE   R3, [%1],#4         \n\
                STRGE   R3, [%0],#4         \n\
2:\n"
       : "=&r" (dst0), "=&r" (src0), "=&r" (len)
       : "0" (dst0), "1" (src0), "2" (len)
       : "memory", "lr", "r3", "r4", "r5", "cc");
}
#define memcpy(dst,src,len) { if(len==4) {*(unsigned int*)(dst)=*(unsigned int*)(src);} else if(len==8) {*(unsigned int*)(dst)=*(unsigned int*)(src);*((unsigned int*)(dst)+1)=*((unsigned int*)(src)+1);} else my_memcpy(dst,src,len); }
#endif
#include "op.h"
#ifdef UNDER_CE
#undef my_memcpy
#endif
