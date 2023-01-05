#include <windows.h>
#include <stdio.h>
#include <pshpack1.h>

void SetExceptionHandler(PEXCEPTION_ROUTINE per);

EXCEPTION_DISPOSITION eh_handler_(
	struct _EXCEPTION_RECORD *ExceptionRecord,
	void *EstablisherFrame,
	struct _CONTEXT *ContextRecord,
	struct _DISPATCHER_CONTEXT *DispatcherContext
	);

void InitExceptionHandler()
{
	SetExceptionHandler(eh_handler_);
}

struct pt_regs {
        long uregs[18];
};

typedef unsigned char uint8_t;

#define get_unaligned_long1(ptr) \
          ({ __typeof__(*(ptr)) __tmp; memmove(&__tmp, (ptr), sizeof(*(ptr))); __tmp; })

#define get_unaligned_short1(ptr) \
          ({ __typeof__(*(ptr)) __tmp; memmove(&__tmp, (ptr), sizeof(*(ptr))); __tmp; })

static inline unsigned short get_unaligned_short(void *ptr)
{
    uint8_t *p = (uint8_t *) ptr;
    return (unsigned short)(p[0] | (p[1] << 8));
}

static inline int get_unaligned_long(void *ptr)
{
    uint8_t *p = ptr;
    return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
}

#define put_unaligned_short1(val, ptr)				\
  ({ __typeof__(*(ptr)) __tmp = (val);			\
     memmove((ptr), &__tmp, sizeof(*(ptr)));		\
     (void)0; })
#define put_unaligned_long1(val, ptr)				\
  ({ __typeof__(*(ptr)) __tmp = (val);			\
     memmove((ptr), &__tmp, sizeof(*(ptr)));		\
     (void)0; })

static inline void put_unaligned_short(int v,void *ptr)
{
    uint8_t *p = ptr;
    p[0] = v;
    p[1] = v >> 8;
}
static inline void put_unaligned_long(int v,void *ptr)
{
    uint8_t *p = ptr;
    p[0] = v;
    p[1] = v >> 8;
    p[2] = v >> 16;
    p[3] = v >> 24;
}

#define user_mode(regs) 0

#define ARM_cpsr        uregs[16]
#define ARM_pc          uregs[15]
#define ARM_lr          uregs[14]
#define ARM_sp          uregs[13]
#define ARM_ip          uregs[12]
#define ARM_fp          uregs[11]
#define ARM_r10         uregs[10]
#define ARM_r9          uregs[9]
#define ARM_r8          uregs[8]
#define ARM_r7          uregs[7]
#define ARM_r6          uregs[6]
#define ARM_r5          uregs[5]
#define ARM_r4          uregs[4]
#define ARM_r3          uregs[3]
#define ARM_r2          uregs[2]
#define ARM_r1          uregs[1]
#define ARM_r0          uregs[0]
#define ARM_ORIG_r0     uregs[17]


/*
 * 32-bit misaligned trap handler (c) 1998 San Mehat (CCC) -July 1998
 * /proc/sys/debug/alignment, modified and integrated into
 * Linux 2.1 by Russell King
 *
 * NOTE!!! This is not portable onto the ARM6/ARM7 processors yet.  Also,
 * it seems to give a severe performance impact (1 abort/ms - NW runs at
 * ARM6 speeds) with GCC 2.7.2.2 - needs checking with a later GCC/EGCS.
 *
 * IMHO, I don\t think that the trap handler is advantageous on ARM6,7
 * processors (they\ll run like an ARM3).  We\ll see.
 */
#define CODING_BITS(i)	(i & 0x0e000000)

#define LDST_I_BIT(i)	(i & (1 << 26))		/* Immediate constant	*/
#define LDST_P_BIT(i)	(i & (1 << 24))		/* Preindex		*/
#define LDST_U_BIT(i)	(i & (1 << 23))		/* Add offset		*/
#define LDST_W_BIT(i)	(i & (1 << 21))		/* Writeback		*/
#define LDST_L_BIT(i)	(i & (1 << 20))		/* Load			*/

#define LDSTH_I_BIT(i)	(i & (1 << 22))		/* half-word immed	*/
#define LDM_S_BIT(i)	(i & (1 << 22))		/* write CPSR from SPSR	*/

#define RN_BITS(i)	((i >> 16) & 15)	/* Rn			*/
#define RD_BITS(i)	((i >> 12) & 15)	/* Rd			*/
#define RM_BITS(i)	(i & 15)		/* Rm			*/

#define REGMASK_BITS(i)	(i & 0xffff)
#define OFFSET_BITS(i)	(i & 0x0fff)

#define IS_SHIFT(i)	(i & 0x0ff0)
#define SHIFT_BITS(i)	((i >> 7) & 0x1f)
#define SHIFT_TYPE(i)	(i & 0x60)
#define SHIFT_LSL	0x00
#define SHIFT_LSR	0x20
#define SHIFT_ASR	0x40
#define SHIFT_RORRRX	0x60


__inline__ unsigned int hweight16(unsigned int w)
{
        unsigned int res = (w & 0x5555) + ((w >> 1) & 0x5555);
        res = (res & 0x3333) + ((res >> 2) & 0x3333);
        res = (res & 0x0F0F) + ((res >> 4) & 0x0F0F);
        return (res & 0x00FF) + ((res >> 8) & 0x00FF);
}

#define instruction_pointer(regs) ((regs)->ARM_pc)
#define CC_C_BIT        (1 << 29)



static int
do_alignment(unsigned long addr_unused, int error_code_unused, struct pt_regs *regs)
{
	unsigned int instr, rd, rn, correction, nr_regs, regbits;
	unsigned long eaddr;
	union { unsigned long un; signed long sn; } offset;

	instr = *(unsigned long *)instruction_pointer(regs);
	correction = 4; /* sometimes 8 on ARMv3 */
	regs->ARM_pc += correction + 4;

	rd = RD_BITS(instr);
	rn = RN_BITS(instr);
	eaddr = regs->uregs[rn];

	switch(CODING_BITS(instr)) {
	case 0x00000000:
		if ((instr & 0x0ff00ff0) == 0x01000090) {
			printf( "Unaligned trap: not handling swp instruction\n");
			return 1;
		}

		if (((instr & 0x0e000090) == 0x00000090) && (instr & 0x60) != 0) {
			if (LDSTH_I_BIT(instr))
				offset.un = (instr & 0xf00) >> 4 | (instr & 15);
			else
				offset.un = regs->uregs[RM_BITS(instr)];

			if (LDST_P_BIT(instr)) {
				if (LDST_U_BIT(instr))
					eaddr += offset.un;
				else
					eaddr -= offset.un;
			}

			/*
			 * This is a "hint" - we already have eaddr worked out by the
			 * processor for us.
			 */
/*			if (addr != eaddr)
				printf( "LDRHSTRH: PC = %08lx, instr = %08x, "
					"addr = %08lx, eaddr = %08lx\n",
					 instruction_pointer(regs), instr, addr, eaddr);*/

			if (LDST_L_BIT(instr))
				regs->uregs[rd] = get_unaligned_short((unsigned short *)eaddr);
			else
				put_unaligned_short(regs->uregs[rd], (unsigned short *)eaddr);

			/* signed half-word? */
			if (instr & 0x40)
				regs->uregs[rd] = (long)((short) regs->uregs[rd]);

			if (!LDST_P_BIT(instr)) {
				if (LDST_U_BIT(instr))
					eaddr += offset.un;
				else
					eaddr -= offset.un;
				regs->uregs[rn] = eaddr;
			} else if (LDST_W_BIT(instr))
				regs->uregs[rn] = eaddr;
			break;
		}

	default:
        fprintf(stderr, "Alignment trap: not handling instruction %08X at %08lX",
				instr, regs->ARM_pc - correction - 4);
        exit(1);
		break;

	case 0x04000000:
		offset.un = OFFSET_BITS(instr);
		goto ldr_str;

	case 0x06000000:
		offset.un = regs->uregs[RM_BITS(instr)];

		if (IS_SHIFT(instr)) {
			unsigned int shiftval = SHIFT_BITS(instr);

			switch(SHIFT_TYPE(instr)) {
			case SHIFT_LSL:
				offset.un <<= shiftval;
				break;

			case SHIFT_LSR:
				offset.un >>= shiftval;
				break;

			case SHIFT_ASR:
				offset.sn >>= shiftval;
				break;

			case SHIFT_RORRRX:
				if (shiftval == 0) {
					offset.un >>= 1;
					if (regs->ARM_cpsr & CC_C_BIT)
						offset.un |= 1 << 31;
				} else
					offset.un = offset.un >> shiftval |
							  offset.un << (32 - shiftval);
				break;
			}
		}

	ldr_str:
		if (LDST_P_BIT(instr)) {
			if (LDST_U_BIT(instr))
				eaddr += offset.un;
			else
				eaddr -= offset.un;
		} else {
			if (LDST_W_BIT(instr)) {
				printf( "Not handling ldrt/strt correctly\n");
				return 1;
			}
		}

		/*
		 * This is a "hint" - we already have eaddr worked out by the
		 * processor for us.
		 */
/*		if (addr != eaddr)
			printf( "LDRSTR: PC = %08lx, instr = %08x, "
				"addr = %08lx, eaddr = %08lx\n",
				 instruction_pointer(regs), instr, addr, eaddr); */

		if (LDST_L_BIT(instr)) {
			regs->uregs[rd] = get_unaligned_long((unsigned long *)eaddr);
			if (rd == 15)
				correction = 0;
		} else
			put_unaligned_long(regs->uregs[rd], (unsigned long *)eaddr);

		if (!LDST_P_BIT(instr)) {
			if (LDST_U_BIT(instr))
				eaddr += offset.un;
			else
				eaddr -= offset.un;

			regs->uregs[rn] = eaddr;
		} else if (LDST_W_BIT(instr))
			regs->uregs[rn] = eaddr;
		break;

	case 0x08000000:
		if (LDM_S_BIT(instr))
			panic("Alignment trap: not handling LDM with s-bit\n");

		for (regbits = REGMASK_BITS(instr), nr_regs = 0; regbits; regbits >>= 1)
			nr_regs += 4;

		if  (!LDST_U_BIT(instr))
			eaddr -= nr_regs;

		/*
		 * This is a "hint" - we already have eaddr worked out by the
		 * processor for us.
		 */
/*		if (addr != eaddr)
			printf( "LDMSTM: PC = %08lx, instr = %08x, "
				"addr = %08lx, eaddr = %08lx\n",
				 instruction_pointer(regs), instr, addr, eaddr); */

		if ((LDST_U_BIT(instr) == 0 && LDST_P_BIT(instr) == 0) ||
		    (LDST_U_BIT(instr)      && LDST_P_BIT(instr)))
			eaddr += 4;

		for (regbits = REGMASK_BITS(instr), rd = 0; regbits; regbits >>= 1, rd += 1)
			if (regbits & 1) {
				if (LDST_L_BIT(instr)) {
					regs->uregs[rd] = get_unaligned_long((unsigned long *)eaddr);
					if (rd == 15)
						correction = 0;
				} else
					put_unaligned_long(regs->uregs[rd], (unsigned long *)eaddr);
				eaddr += 4;
			}

		if (LDST_W_BIT(instr)) {
			if (LDST_P_BIT(instr) && !LDST_U_BIT(instr))
				eaddr -= nr_regs;
			else if (LDST_P_BIT(instr))
				eaddr -= 4;
			else if (!LDST_U_BIT(instr))
				eaddr -= 4 + nr_regs;
			regs->uregs[rn] = eaddr;
		}
		break;
	}

	regs->ARM_pc -= correction;

	return 0;
}

EXCEPTION_DISPOSITION eh_handler_ (
		struct _EXCEPTION_RECORD *ExceptionRecord,
	    void *EstablisherFrame, 
	    struct _CONTEXT *ContextRecord,
	    struct _DISPATCHER_CONTEXT *DispatcherContext)
{
	struct pt_regs regs;
	DWORD addr;
/*  	printf("Exception: Code:%x Flags:%x Addr:%x "
	 	"SP:%x LR:%x R0:%x R1:%x R2:%x R3:%x R4:%x R5:%x R12:%x FP:%x\n", 
	 	ExceptionRecord->ExceptionCode,
	 	ExceptionRecord->ExceptionFlags,
	 	ExceptionRecord->ExceptionAddress,
	 	ContextRecord->Sp,
	 	ContextRecord->Lr,
	 	ContextRecord->R0,
	 	ContextRecord->R1,
	 	ContextRecord->R2,
	 	ContextRecord->R3,
	 	ContextRecord->R4,
	 	ContextRecord->R5,
	 	ContextRecord->R12,
	 	EstablisherFrame
	);

	printf("Command: %08X\n",*(DWORD*)ContextRecord->Pc); */

	if(do_alignment(0, 0, (struct pt_regs*)(&ContextRecord->R0))==0)
	{
		return ExceptionContinueExecution;
	} 
  	printf("Unhandled exception: Code:%x Flags:%x Addr:%x "
	 	"SP:%x LR:%x R0:%x R1:%x R2:%x R3:%x R4:%x R5:%x R12:%x FP:%x\n", 
	 	ExceptionRecord->ExceptionCode,
	 	ExceptionRecord->ExceptionFlags,
	 	ExceptionRecord->ExceptionAddress,
	 	ContextRecord->Sp,
	 	ContextRecord->Lr,
	 	ContextRecord->R0,
	 	ContextRecord->R1,
	 	ContextRecord->R2,
	 	ContextRecord->R3,
	 	ContextRecord->R4,
	 	ContextRecord->R5,
	 	ContextRecord->R12,
	 	EstablisherFrame
	);
	exit(-1);	// to call atexit
	TerminateProcess(GetCurrentProcess(),ExceptionRecord->ExceptionCode);
	return 0;
}

void panic(char *str)
{
	puts(str);
	TerminateProcess(GetCurrentProcess(),123);
}
