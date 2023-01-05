// QEMU WinMobile UI DLL interface

#ifndef __QEMU_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MOUSE_EVENT_LBUTTON
#define MOUSE_EVENT_LBUTTON 0x01
#define MOUSE_EVENT_RBUTTON 0x02
#define MOUSE_EVENT_MBUTTON 0x04
#endif

// Prototypes for functions provided by QEMU
typedef void t_vm_start(void);
typedef void t_qemu_system_shutdown_request(void);
typedef void t_vm_stop(int);
typedef int t_is_vm_running(void);
typedef void t_vga_hw_update();
typedef void t_kbd_put_keycode(int keycode);
typedef void t_kbd_mouse_event(int dx, int dy, int dz, int buttons_state);
typedef int t_kbd_mouse_is_absolute(void);
typedef void t_vga_hw_invalidate(void);
typedef void t_InitProfiler();
typedef void t_DebugFunc(int,void*);
typedef unsigned char *t_get_phys_ram_base();
typedef void (IOPortWriteFunc)(void *opaque, unsigned int address, unsigned int data);
typedef unsigned int (IOPortReadFunc)(void *opaque, unsigned int address);
typedef int t_register_ioport_read(int start, int length, int size,
                         IOPortReadFunc *func, void *opaque);
typedef int t_register_ioport_write(int start, int length, int size,
                          IOPortWriteFunc *func, void *opaque);
typedef void t_stl(unsigned int addr, unsigned int data);
typedef void t_stw(unsigned int addr, unsigned short data);
typedef void t_stb(unsigned int addr, unsigned char data);
typedef unsigned int t_ldl(unsigned int addr);
typedef unsigned short t_ldw(unsigned int addr);
typedef unsigned char t_ldb(unsigned int addr);
struct CPUState;
typedef unsigned int t_get_phys_page(struct CPUState *env, unsigned int addr);
typedef struct CPUState * t_get_env(void);
typedef unsigned int t_get_vram_phys_addr(void);
typedef unsigned int *t_get_palette();
typedef void t_flush_swap_files();

// pointers to functions provided by QEMU
struct qemu_info
{
	int Size;				// to check versions. New fields are added to the end of this structure 
	HANDLE ui_stdout;		// qemu_out.txt file handle
	t_vm_start *vm_start;	// resume emulation
	t_qemu_system_shutdown_request *qemu_system_shutdown_request;	// terminate emulation and exit program
	t_vm_stop *vm_stop;		// pause emulation
	t_is_vm_running *is_vm_running;	// check emulation state (running or paused)
	t_vga_hw_update *vga_hw_update;	// perform VGA screen update
	t_vga_hw_invalidate *vga_hw_invalidate;	// reset VGA hardware (used on enter/exit fullscreen)
	t_kbd_put_keycode *kbd_put_keycode;	// simulate button 
	t_kbd_mouse_event *kbd_mouse_event;	// simulate mouse
	t_kbd_mouse_is_absolute *kbd_mouse_is_absolute;	// emulate USB pen (not used)
	t_InitProfiler *InitProfiler;		// start profiler
	t_DebugFunc *DebugFunc;				// internal debug
	t_get_phys_ram_base *get_phys_ram_base;			// return phys RAM base pointer
	t_register_ioport_read *register_ioport_read;	// hook io read
	t_register_ioport_write *register_ioport_write;	// hook io write
	t_stl *stl;				// store dword
	t_stw *stw;				//  word
	t_stb *stb;				//  byte
	t_ldl *ldl;				// load dword
	t_ldw *ldw;				//  word
	t_ldb *ldb;				//  byte
	t_get_phys_page *get_phys_page;		// get phys page addr for a given virt addr
	t_get_env *get_env;					// get CPU env (used in IO hooks)
	t_get_vram_phys_addr *get_vram_phys_addr;	// get phys address of emulated video memory (tested only in 256-color modes)
	t_get_palette *get_palette;					// get palette (16 bit depth)
	t_flush_swap_files *flush_swap_files;		// free some memory by flushing swap files to disk (if used)
	char *PathToEmul;				// path to emulation-specific directory with additional config, plugins, etc. Always absolute path.
};

// QEMU_UI.DLL functions
#ifdef QEMU_UI_EXPORTS
#define QEMU_UI_EXPORT __declspec(dllexport)
#define PLUGIN_EXPORT 
#else
#define QEMU_UI_EXPORT
#define PLUGIN_EXPORT __declspec(dllexport)
#endif
QEMU_UI_EXPORT int ui_init(struct qemu_info *info);
QEMU_UI_EXPORT void ui_cleanup(void);
QEMU_UI_EXPORT void ui_refresh(void);
QEMU_UI_EXPORT void* ui_resize(int width, int height);
QEMU_UI_EXPORT void ui_update(int x, int y, int w, int h);
QEMU_UI_EXPORT void *ui_hook(int page_addr0, int pc, int cs_base);
QEMU_UI_EXPORT int GetProfileString(char *Section, char* Key, char* Default, char *Ret, int nRet);
QEMU_UI_EXPORT int GetProfileInt(char *Section, char* Key, int Default);
QEMU_UI_EXPORT unsigned short *GetScrPtr();	// return pointer to video biffer (16 bit depth)
QEMU_UI_EXPORT void DisableGestures();		// Disable right button emulation via press and hold
QEMU_UI_EXPORT void EnableGestures();		// Enable ---//---
QEMU_UI_EXPORT int GetMouseX();				// Get current mouse X coord on touchscreen
QEMU_UI_EXPORT int GetMouseY();				// Get current mouse Y coord on touchscreen
QEMU_UI_EXPORT int GetMouseButtons();		// Get current mouse buttons state
QEMU_UI_EXPORT int GetLBDnCount();			// Get number of LB Downs
QEMU_UI_EXPORT int GetRBDnCount();			// Get number of RB Downs
QEMU_UI_EXPORT int GetLBUpCount();			// Get number of LB Ups
QEMU_UI_EXPORT int GetRBUpCount();			// Get number of RB Ups
QEMU_UI_EXPORT void CleanLBDnCount();		// reset to 0
QEMU_UI_EXPORT void CleanLBUpCount();		// reset to 0
QEMU_UI_EXPORT void CleanRBDnCount();		// reset to 0
QEMU_UI_EXPORT void CleanRBUpCount();		// reset to 0


#ifndef HOST_ARM_CROSS
#define TARGET_PAGE_BITS 12
#define TARGET_PAGE_SIZE (1 << TARGET_PAGE_BITS)
#define TARGET_PAGE_MASK ~(TARGET_PAGE_SIZE - 1)

extern unsigned char *phys_ram_base;

typedef struct SegmentCache {
    DWORD selector;
    DWORD base;
    DWORD limit;
    DWORD flags;
} SegmentCache;

#define R_EAX 0
#define R_ECX 1
#define R_EDX 2
#define R_EBX 3
#define R_ESP 4
#define R_EBP 5
#define R_ESI 6
#define R_EDI 7

#define R_ES 0
#define R_CS 1
#define R_SS 2
#define R_DS 3
#define R_FS 4
#define R_GS 5

#define reg_EAX (env->regs[R_EAX])
#define reg_ECX (env->regs[R_ECX])
#define reg_EDX (env->regs[R_EDX])
#define reg_EBX (env->regs[R_EBX])
#define reg_ESP (env->regs[R_ESP])
#define reg_EBP (env->regs[R_EBP])
#define reg_ESI (env->regs[R_ESI])
#define reg_EDI (env->regs[R_EDI])
#define reg_EIP (env->eip)

#define ES_base (env->segs[R_ES].base)
#define CS_base (env->segs[R_CS].base)
#define SS_base (env->segs[R_SS].base)
#define DS_base (env->segs[R_DS].base)
#define FS_base (env->segs[R_FS].base)
#define GS_base (env->segs[R_GS].base)

#define IF_MASK                 0x00000200
#define DF_MASK                 0x00000400
/* other flags are delay-calculated so cannot be used */

#define PUSHL(regname) { reg_ESP-=4; inf.stl(reg_ESP+SS_base,regname); }
#define PUSHW(regname) { reg_ESP-=2; inf.stw(reg_ESP+SS_base,regname); }
#define POPL(regname) { regname=inf.ldl(reg_ESP+SS_base); reg_ESP+=4; }
#define RETL(a) { reg_EIP=inf.ldl(reg_ESP+SS_base); reg_ESP+=4+a; }

typedef struct CPUState {
    /* standard registers */
    DWORD regs[8];
    DWORD eip;
    DWORD eflags; /* eflags register. During CPU emulation, CC
                        flags and DF are set to zero because they are
                        stored elsewhere */

    /* emulator internal eflags handling */
    DWORD cc_src;
    DWORD cc_dst;
    DWORD cc_op;
    DWORD df; /* D flag : 1 if D = 0, -1 if D = 1 */
    DWORD hflags; /* hidden flags, see HF_xxx constants */

    /* segments */
    SegmentCache segs[6]; /* selector values */
    SegmentCache ldt;
    SegmentCache tr;
    SegmentCache gdt; /* only base and limit are used */
    SegmentCache idt; /* only base and limit are used */

    DWORD cr[5]; /* NOTE: cr1 is unused */
} CPUState;
typedef void t_hook_func(CPUState *env);
#endif

// additional plugins
PLUGIN_EXPORT int plugin_init(struct qemu_info *info);
PLUGIN_EXPORT void plugin_cleanup(void);
PLUGIN_EXPORT void *plugin_hook(int page_addr0, int pc, int cs_base);

#ifdef __cplusplus
}
#endif

#endif //__QEMU_UI_H
