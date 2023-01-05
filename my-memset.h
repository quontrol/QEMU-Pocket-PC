#ifndef my_memset_defined
#define memset my_memset
#define my_memset_defined 1
// supports only dword-aligned dst0 and len%4==0
static inline void *my_memset (void *dst0, int set, size_t len)
{
  int dummy;
  asm volatile ("                		\n\
                 MOV     r3, %0	\n\
                 AND     %1, %1, #0xFF	\n\
                 ORR     %1, %1, %1,LSL#8	\n\
1: \n\
                 ORR     %1, %1, %1,LSL#16	\n\
                 SUBS    %2, %2, #0x10	\n\
                 MOV     r12, %1	\n\
                 BLT     3f	\n\
2: \n\
                 STMIA   r3!, {%1,r12}	\n\
                 SUBS    %2, %2, #0x10	\n\
                 STMIA   r3!, {%1,r12}	\n\
                 BGE     2b \n\
3: \n\
                 ADDS    %2, %2, #8	\n\
                 STMGEIA r3!, {%1,r12}	\n\
                 SUBGE   %2, %2, #8	\n\
                 ADDS    %2, %2, #4	\n\
                 STRGE   %1, [r3],#4	\n\
4: \n\
7:\n"
       : "=&r" (dst0), "=&r" (set), "=&r" (len)
       : "0" (dst0), "1" (set), "2" (len)
       : "memory", "lr", "r3", "r12", "cc");
}
#endif
/*
                 ADDLTS  %2, %2, #4	\n\
                 BEQ     7f	\n\
                 STRB    %1, [r3],#1	\n\
                 CMP     %2, #2	\n\
                 STRGEB  %1, [r3],#1	\n\
                 STRGTB  %1, [r3],#1	\n\
*/
