/*
 * QEMU SDL display driver
 * 
 * Copyright (c) 2003 Fabrice Bellard
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#define WINVER 0x500

#include "qemu-common.h"
#include "console.h"
#include "sysemu.h"

#include <SDL.h>
#include <windows.h>
#include <aygshell.h>

#ifndef _WIN32
#include <signal.h>
#endif

// Forward declarations of functions included in this code module:
ATOM				MyRegisterClass(HINSTANCE, LPTSTR);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
void ToggleFullscreen(BOOL ForceWindowed);

static BOOL (WINAPI *_SHFullScreen)(HWND,DWORD) = 0;

#define GETRAWFRAMEBUFFER   0x00020001
#define FORMAT_565 1
#define FORMAT_555 2
#define FORMAT_OTHER 3
#define DMDO_0 0x00000000
#define DMDO_90 0x00000001
#define DMDO_180 0x00000002
#define DMDO_270 0x00000004
#define DM_DISPLAYQUERYORIENTATION 0x01000000L
#define DM_DISPLAYORIENTATION 0x00800000L
#define CCHDEVICENAME 32
#define CCHFORMNAME 32
#define CDS_TEST            0x00000002
typedef struct __devicemodeW {
    WCHAR  dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR  dmFormName[CCHFORMNAME];
    WORD   dmLogPixels;
    DWORD  dmBitsPerPel;
    DWORD  dmPelsWidth;
    DWORD  dmPelsHeight;
    DWORD  dmDisplayFlags;
    DWORD  dmDisplayFrequency;
    DWORD  dmDisplayOrientation;
} _DEVMODEW;
LONG
WINAPI
ChangeDisplaySettingsEx(
	IN LPCTSTR         lpszDeviceName,
	IN _DEVMODEW       *lpDevMode,
	IN HWND            hwnd,
	IN DWORD           dwflags,
	LPVOID             lParam
	);

typedef struct _RawFrameBufferInfo
{
   WORD wFormat;
   WORD wBPP;
   VOID *pFramePointer;
   int  cxStride;
   int  cyStride;
   int  cxPixels;
   int  cyPixels;
} RawFrameBufferInfo; 

WORD *FB_ptr=0;  	// real framebuffer
int FB_cx=0;		// real framebuffer w
int FB_cy=0;		// h
BOOL FB_QVGA=0;		// When ==1 FB_ptr points to a QVGA framebuffer, FB_cx, FB_cy - its size, we need to downscale image

WORD *SCR_ptr=0;	// QEMU virtual screen buffer
int SCR_cx=0;		// its w
int SCR_cy=0;		// its h
int SCR_dx=0;		// if virtual screen buffer > real scr this is visible viewport dx
int SCR_dy=0;		// and dy

int WND_dx=0;		// Visible window on the screen dimensions, x
int WND_dy=0;		// y
int WND_w=0;		// width
int WND_h=0;		// height

static int MENU_HEIGHT=80;
static int MENU_WIDTH=480;
static int MenuEnabled=0; 	// 0-disabled, 1-enabled small, 2-big 

// emulated int 0x33 vars
static int MouseMinX=0;
static int MouseMaxX=640;
static int MouseMinY=0;
static int MouseMaxY=400;
static int MouseX=-1;
static int MouseY=-1;
static int MouseButtons=0;
static int MouseLBDnCount=0;
static int MouseRBDnCount=0;
static int MouseMBDnCount=0;
static int MouseLBUpCount=0;
static int MouseRBUpCount=0;
static int MouseMBUpCount=0;

static int CalibrationMode=0;	// 0 - not calibrated at all
								// 1 - use calibration
								// 2 - point to cursor as you see it in screen
								// 3 - tracking stylus to screen cursor, press
								// 4 - tracking stylus to screen cursor, move
static POINT Cal_PtOnScreen;
static POINT Cal_PtPressed;
static POINT Cal_PtReleased;
static double CoeffX=1.0, CoeffY=1.0;	// Multiplication coefficients

static BOOL EnableUpdates=TRUE;
static DisplayState *SCR_ds=0;

HWND MainWindow=0;
DWORD FB_Orientation=DMDO_0;

void CheckRotation()
{
	_DEVMODEW dm;
	memset(&dm,0,sizeof(dm));
	dm.dmSize = sizeof(_DEVMODEW);
	dm.dmFields = DM_DISPLAYORIENTATION;
	ChangeDisplaySettingsEx(NULL, &dm, NULL, CDS_TEST, NULL);

	if(FB_Orientation!=dm.dmDisplayOrientation)
		InvalidateRect(MainWindow,0,0);
	FB_Orientation=dm.dmDisplayOrientation;
} 

BOOL InitRawFB()
{
	HDC hdc = GetDC(NULL); 
	RawFrameBufferInfo FB;
	int result = ExtEscape(hdc, GETRAWFRAMEBUFFER, 0, NULL, sizeof(RawFrameBufferInfo), (char *)&FB);
	ReleaseDC(NULL, hdc);
	if(result <= 0)
	{
		puts("Cannot get raw framebuffer address");
		return 0;
	}
	FB_ptr = FB.pFramePointer;
	FB_cx = FB.cxPixels;
	FB_cy = FB.cyPixels;

	CheckRotation();

	return TRUE;
}

void UpdateMenu(HDC, int x, int y, int mode);

// we assume that our window width == width of the screen, 
// and our height is between WND_dy and WND_dy+WND_h
// There is an offset inside FB == SCR_dx, SCR_dy. 
// Point (SCR_dx,SCR_dy) in buffer == (WND_dx,WND_dy) on screen, 1:1
static void sdl_update(DisplayState *ds, int x, int y, int w, int h)
{
	int i;
	if(!EnableUpdates)
	{
		Sleep(0);
		return;
	}

	x+=SCR_dx;
	y+=SCR_dy;

	if(x<0)
	{
		w+=x;
		x=0;
	}
	if(y<0)
	{
		h+=y;
		y=0;
	}

	if(x+w>WND_w)
		w=WND_w-x;
	if(y+h>WND_h)
		h=WND_h-y;

	if(h<=0 || w<=0)
		return;
	switch(FB_Orientation)
	{
		case DMDO_0:
			if(FB_QVGA)
			{
				if(x+w+WND_dx>FB_cx)
					w=FB_cx-WND_dx-x;
				if(y+h+WND_dy>FB_cy)
					h=FB_cy-WND_dy-y;
				if(h<=0 || w<=0)
					return;
				if(w&1)	// 2 pixel align
					w++;
				if(x&1)		
					x--;
				if(h&1)
					h++;
				if(y&1)		
					y--;
				while(h>0)
				{
					WORD *src = SCR_ptr + x + y*SCR_cx;
					WORD *dst = FB_ptr + (x/2+WND_dx) + (y/2+WND_dy)*FB_cx;
					WORD tmp,tmp1;
					for(i=0; i<w; i++)
					{
						tmp=((src[0]>>1)&0x7BEF)+((src[1]>>1)&0x7BEF);
						tmp1=((src[SCR_cx]>>1)&0x7BEF)+((src[SCR_cx+1]>>1)&0x7BEF);
						*dst=((tmp>>1)&0x7BEF)+((tmp1>>1)&0x7BEF);
						src+=2;
						dst++;
					}
					y+=2;
					h-=2;
				}
			} else
			{
				if(x+w+WND_dx>FB_cx)
					w=FB_cx-WND_dx-x;
				if(y+h+WND_dy>FB_cy)
					h=FB_cy-WND_dy-y;
				if(h<=0 || w<=0)
					return;
				if(w&1)
					w++;
				while(h--)
				{
					WORD *src = SCR_ptr + x + y*SCR_cx;
					WORD *dst = FB_ptr + (x+WND_dx) + (y+WND_dy)*FB_cx;
					for(i=0; i<w; i+=2)
					{
						*dst=*src;
						src++;
						dst++;
						*dst=*src;
						src++;
						dst++;
					}
					y++;
				}
			}
			break;
		case DMDO_90:
			if(FB_QVGA)
			{
				if(x+w+WND_dx>FB_cy)
					w=FB_cy-WND_dx-x;
				if(y+h+WND_dy>FB_cx)
					h=FB_cx-WND_dy-y;
				if(h<=0 || w<=0)
					return;
				if(w&1)	// 2 pixel align
					w++;
				if(x&1)		
					x--;
				if(h&1)
					h++;
				if(y&1)		
					y--;
				while(h>0)
				{
					WORD *src = SCR_ptr + x + y*SCR_cx;
					WORD *dst = FB_ptr + (y/2+WND_dy) + (FB_cy - (x/2+WND_dx) - 1)*FB_cx;
					WORD tmp,tmp1;
					int dx = -FB_cx;
					for(i=0; i<w; i++)
					{
						tmp=((src[0]>>1)&0x7BEF)+((src[1]>>1)&0x7BEF);
						tmp1=((src[SCR_cx]>>1)&0x7BEF)+((src[SCR_cx+1]>>1)&0x7BEF);
						*dst=((tmp>>1)&0x7BEF)+((tmp1>>1)&0x7BEF);
						src+=2;
						dst+=dx;
					}
					y+=2;
					h-=2;
				}
			} else
			{
				if(x+w+WND_dx>FB_cy)
					w=FB_cy-WND_dx-x;
				if(y+h+WND_dy>FB_cx)
					h=FB_cx-WND_dy-y;
				if(h<=0 || w<=0)
					return;
				if(w&1)
					w++;
				while(h--)
				{
					WORD *src = SCR_ptr + x + y*SCR_cx;
					WORD *dst = FB_ptr + (y+WND_dy) + (FB_cy - (x+WND_dx) - 1)*FB_cx;
					int dx = -FB_cx;
					for(i=0; i<w; i+=2)
					{
						*dst=*src;
						src++;
						dst+=dx;
						*dst=*src;
						src++;
						dst+=dx;
					}
					y++;
				}
			}
			break;
		case DMDO_180:     // FIXME: untested!
			{
				if(x+w+WND_dx>FB_cx)
					w=FB_cx-WND_dx-x;
				if(y+h+WND_dy>FB_cy)
					h=FB_cy-WND_dy-y;
				if(h<=0 || w<=0)
					return;
				if(w&1)
					w++;
				while(h--)
				{
					WORD *src = SCR_ptr + x + y*SCR_cx;
					WORD *dst = FB_ptr + FB_cx-(x+WND_dx)-1 + (FB_cy-(y+WND_dy)-1)*FB_cx;
					for(i=0; i<w; i+=2)
					{
						*dst=*src;
						src++;
						dst--;
						*dst=*src;
						src++;
						dst--;
					}
					y++;
				}
			}
			break;
		default:	// 270 can be ==3 on 2003se, ==4 on wm5
			{
				if(FB_QVGA)
				{
					if(x+w+WND_dx>FB_cy*2)
						w=FB_cy-WND_dx-x;
					if(y+h+WND_dy>FB_cx*2)
							h=FB_cx-WND_dy-y;
					if(h<=0 || w<=0)
						return;
					if(w&1)	// 2 pixel align
						w++;
					if(x&1)		
						x--;
					if(h&1)
						h++;
					if(y&1)		
						y--;
					while(h>0)
					{
						WORD tmp,tmp1;
						WORD *src = SCR_ptr + x + y*SCR_cx;
						WORD *dst = FB_ptr + FB_cx - 1 - (y/2+WND_dy) + (x/2+WND_dx)*FB_cx;
						int dx = FB_cx;
						for(i=0; i<w; i+=2)
						{
							tmp=((src[0]>>1)&0x7BEF)+((src[1]>>1)&0x7BEF);
							tmp1=((src[SCR_cx]>>1)&0x7BEF)+((src[SCR_cx+1]>>1)&0x7BEF);
							*dst=((tmp>>1)&0x7BEF)+((tmp1>>1)&0x7BEF);
							dst+=dx;
							src+=2;
						}
						y+=2;
						h-=2;
					}
				} else
				{
					if(x+w+WND_dx>FB_cy)
						w=FB_cy-WND_dx-x;
					if(y+h+WND_dy>FB_cx)
							h=FB_cx-WND_dy-y;
					if(h<=0 || w<=0)
						return;
					if(w&1)
						w++;
					if(w&2)
						w+=2;
					while(h--)
					{
						WORD *src = SCR_ptr + x + y*SCR_cx;
						WORD *dst = FB_ptr + FB_cx - 1 - (y+WND_dy) + (x+WND_dx)*FB_cx;
						int dx = FB_cx;
						for(i=0; i<w; i+=4)
						{
							*dst=*src;
							src++;
							dst+=dx;
							*dst=*src;
							src++;
							dst+=dx;
							*dst=*src;
							src++;
							dst+=dx;
							*dst=*src;
							src++;
							dst+=dx;
						}
						y++;
					}
				}
			}
			break;
	}
}


static void sdl_resize(DisplayState *ds, int w, int h)
{
	if(SCR_ptr)
		free(SCR_ptr);
	SCR_ptr = (WORD*)malloc(w*h*2);
	SCR_cx = w;
	SCR_cy = h;
	SCR_dx = 0;
	SCR_dy = 0;

	MouseMinX=MouseMinY=0;
	MouseMaxX=w; MouseMaxY=h;

    ds->data = SCR_ptr;
    ds->linesize = w*2; // 16 bit only
    ds->depth = 16;
    ds->width = w;
    ds->height = h;
	InvalidateRect(0,0,TRUE);
}

void ProcessMouse(int xPos,int yPos, BOOL move, int L, int R, int M);

static void sdl_refresh(DisplayState *ds)
{
	MSG msg;
	static int prev_vm_running=-1;

	SCR_ds = ds;

    vga_hw_update();

    if (prev_vm_running != vm_running || CalibrationMode>1)
    {
		prev_vm_running = vm_running;
    	if(vm_running)
	        SetWindowText (MainWindow, L"QEMU");
	    else
	        SetWindowText (MainWindow, L"QEMU [Stopped]");
		switch(CalibrationMode)
		{
			case 2:
		        SetWindowText (MainWindow, L"QEMU - Touch cursor on screen");
		        break;
		    case 3:
		        SetWindowText (MainWindow, L"QEMU - Combine cursor with stylus (press)");
		        break;
		    case 4:
		        SetWindowText (MainWindow, L"QEMU - Combine cursor with stylus (move)");
		        break;
		}
    }

    if(GetForegroundWindow()!=MainWindow)	// dumb WM does not send WM_ACTIVATE on our deactivate
    {
    	EnableUpdates=FALSE;
    	vm_stop(0);
    } else
	{
		if(!EnableUpdates)
		{
	    	EnableUpdates=TRUE;
	    	vm_start();
			ToggleFullscreen(FALSE);	// sometimes SIP button reappears, remove it
			ToggleFullscreen(FALSE);
		}
    }

    if((MouseButtons&MOUSE_EVENT_LBUTTON) && (GetKeyState(VK_LBUTTON)&32768) == 0)
	    ProcessMouse(0,0,0, 0, -1, -1);	// simulate mouse release


	while ( PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE) ) {
		if ( GetMessage(&msg, NULL, 0, 0) > 0 ) {
			DispatchMessage(&msg);
		}
	}
}

static void sdl_cleanup(void) 
{
}

//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
//  COMMENTS:
//
ATOM MyRegisterClass(HINSTANCE hInstance, LPTSTR szWindowClass)
{
	WNDCLASS wc;

	wc.style         = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc   = (WNDPROC)WndProc;
	wc.cbClsExtra    = 0;
	wc.cbWndExtra    = 0;
	wc.hInstance     = hInstance;
	wc.hIcon         = 0;
	wc.hCursor       = 0;
	wc.hbrBackground = 0;
	wc.lpszMenuName  = 0;
	wc.lpszClassName = szWindowClass;

	return RegisterClass(&wc);
}

//
//   FUNCTION: InitInstance(HANDLE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
    HWND hWnd;
    TCHAR *szTitle=L"QEMU";		// title bar text
    TCHAR *szWindowClass=L"QEMU_Wndclass";	// main window class name
    RECT rc;

    // SHInitExtraControls should be called once during your application's initialization to initialize any
    // of the Pocket PC special controls such as CAPEDIT and SIPPREF.
    SHInitExtraControls();

    //If it is already running, then focus on the window, and exit
    hWnd = FindWindow(szWindowClass, szTitle);	
    if (hWnd) 
    {
        // set focus to foremost child window
        // The "| 0x00000001" is used to bring any owned windows to the foreground and
        // activate them.
        SetForegroundWindow((HWND)((ULONG) hWnd | 0x00000001));
        return FALSE;
    } 

    if (!MyRegisterClass(hInstance, szWindowClass))
    {
        return FALSE;
    }

    SystemParametersInfo(SPI_GETWORKAREA, 0, &rc, FALSE);

    hWnd = CreateWindow(szWindowClass, szTitle, WS_VISIBLE,
        rc.left, rc.top, rc.right-rc.left, rc.bottom-rc.top, NULL, NULL, hInstance, NULL);
         
    if (!hWnd)
    {
        return FALSE;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
	{
    	HINSTANCE hAygshell = 0;
		if( !hAygshell )
			hAygshell = LoadLibrary(L"aygshell.dll");
		if( (hAygshell != 0) && (_SHFullScreen == 0) )
			_SHFullScreen = (BOOL (WINAPI *)(HWND,DWORD)) GetProcAddress(hAygshell, L"SHFullScreen");
		if(_SHFullScreen)
			_SHFullScreen(hWnd,SHFS_HIDESIPBUTTON);
	}	

	MainWindow=hWnd;

    return InitRawFB();
}

static const uint8_t scancodes[255] = {
    [VK_ESCAPE]   = 0x01,
    ['1']        = 0x02,
    ['2']        = 0x03,
    ['3']        = 0x04,
    ['4']        = 0x05,
    ['5']        = 0x06,
    ['6']        = 0x07,
    ['7']        = 0x08,
    ['8']        = 0x09,
    ['9']        = 0x0a,
    ['0']        = 0x0b,
    [VK_SUBTRACT]    = 0x0c,
    [VK_EQUAL]   = 0x0d,
    [VK_BACK]        = 0x0e,
    [VK_TAB]      = 0x0f,
    ['Q']        = 0X10,
    ['W']        = 0X11,
    ['E']        = 0X12,
    ['R']        = 0X13,
    ['T']        = 0X14,
    ['Y']        = 0X15,
    ['U']        = 0X16,
    ['I']        = 0X17,
    ['O']        = 0X18,
    ['P']        = 0X19,
    [VK_LBRACKET]      = 0x1a,
    [VK_RBRACKET]     = 0x1b,
    [VK_RETURN]   = 0x1c,
    [VK_CONTROL]    = 0x1d,
    [VK_LCONTROL]    = 0x1d,
    ['A']        = 0X1E,
    ['S']        = 0X1F,
    ['D']        = 0X20,
    ['F']        = 0X21,
    ['G']        = 0X22,
    ['H']        = 0X23,
    ['J']        = 0X24,
    ['K']        = 0X25,
    ['L']        = 0X26,
    [VK_SEMICOLON]        = 0x27,
    [VK_APOSTROPHE]    = 0x28,
    [VK_BACKQUOTE]        = 0x29,
    [VK_LSHIFT]   = 0x2a,
    [VK_SHIFT]   = 0x2a,
    [VK_BACKSLASH]        = 0x2b,
    ['Z']        = 0X2C,
    ['X']        = 0X2D,
    ['C']        = 0X2E,
    ['V']        = 0X2F,
    ['B']        = 0X30,
    ['N']        = 0X31,
    ['M']        = 0X32,
    [VK_COMMA]    = 0x33,
    [VK_PERIOD]   = 0x34,
    [VK_SLASH]    = 0x35,
    [VK_MULTIPLY]      = 0x37,
    [VK_MENU]     = 0x38,
    [VK_LMENU]     = 0x38,
    [VK_SPACE]    = 0x39,
    [VK_CAPITAL] = 0x3a,
    [VK_F1]       = 0x3b,
    [VK_F2]       = 0x3c,
    [VK_F3]       = 0x3d,
    [VK_F4]       = 0x3e,
    [VK_F5]       = 0x3f,
    [VK_F6]       = 0x40,
    [VK_F7]       = 0x41,
    [VK_F8]       = 0x42,
    [VK_F9]       = 0x43,
    [VK_F10]      = 0x44,
    [VK_NUMLOCK]  = 0x45,
    [VK_SCROLL]        = 0x46,
    [VK_NUMPAD7]      = 0x47,
    [VK_NUMPAD8]      = 0x48,
    [VK_NUMPAD9]      = 0x49,
//    [SDLK_KP_MINUS] = 0x4a,
    [VK_NUMPAD4]      = 0x4b,
    [VK_NUMPAD5]      = 0x4c,
    [VK_NUMPAD6]      = 0x4d,
//    [SDLK_KP_PLUS]  = 0x4e,
    [VK_NUMPAD1]      = 0x4f,
    [VK_NUMPAD2]      = 0x50,
    [VK_NUMPAD3]      = 0x51,
    [VK_NUMPAD0]      = 0x52,
//    [SDLK_KP_PERIOD]        = 0x53,
    [VK_SNAPSHOT]    = 0x54,
//    [SDLK_LMETA]    = 0x56,

//    [SDLK_KP_ENTER]  = 0x9c,
//    [SDLK_KP_DIVIDE] = 0xb5,    
    [VK_UP]       = 0x48,
    [VK_DOWN]     = 0x50,
    [VK_RIGHT]    = 0x4d,
    [VK_LEFT]     = 0x4b,
    [VK_INSERT]   = 0x52,
    [VK_HOME]     = 0x57,
    [VK_END]      = 0x5f,
//    [SDLK_PAGEUP]   = 0xc9,
//    [SDLK_PAGEDOWN] = 0xd1,
    [VK_DELETE]   = 0x53,
};

int keyevent_to_keycode(WPARAM wParam, LPARAM lParam, BOOL IsKeyUp)
{
	static int ShiftDn=0;	// sometimes extra shift up is sent
	int ScanCode=0;
	if(wParam<255)
		ScanCode = scancodes[wParam];

	if(ScanCode == 0xaa)
	{  
		if(ShiftDn==0)
			ScanCode=0;
		else
			ShiftDn=0;
	}
	if(ScanCode == 0x2a) // shift
		ShiftDn=1;

	return ScanCode|(IsKeyUp?0x80:0);
}

struct MouseQueue
{
	int dx,dy,dz;
	int buttons;
};
#define MQ_SIZE 1024
struct MouseQueue MQ[MQ_SIZE];
int MQStart=0;
int MQLen=0;
#define MQ_ERROR    16384
#define MQ_MAXDELTA 3*MQ_ERROR

#undef ABS
#undef SGN
#define ABS(a) ((a)>0?(a):-(a))
#define SGN(a) ((a)>0?(1):((a)==0?0:-1))

// deltas are fixed point (divide by MQ_ERROR)
void my_kbd_mouse_event(int dx, int dy, int dz, int buttons)
{
	static int err_dx=0, err_dy=0, err_dz=0;
	struct MouseQueue tmp;
	tmp.dx=dx;tmp.dy=dy;tmp.dz=dz;tmp.buttons=buttons;

    if(buttons!=-1)
		MQ[(MQStart+(MQLen++))%MQ_SIZE]=tmp;

	if(MQLen<1)
		return;

	tmp=MQ[MQStart];

	if(ABS(tmp.dx)>MQ_MAXDELTA)
		dx=MQ_MAXDELTA*SGN(tmp.dx);
    else
		dx=tmp.dx;
	tmp.dx-=dx;
	if(ABS(tmp.dy)>MQ_MAXDELTA)
		dy=MQ_MAXDELTA*SGN(tmp.dy);
    else
		dy=tmp.dy;
	tmp.dy-=dy;
	if(ABS(tmp.dz)>MQ_MAXDELTA)
		dz=MQ_MAXDELTA*SGN(tmp.dz);
    else
		dz=tmp.dz;
	tmp.dz-=dz;
	MQ[MQStart]=tmp;

	if(tmp.dx==0 && tmp.dy==0 && tmp.dz==0)
	{
		MQStart=(MQStart+1)%MQ_SIZE;
		if(MQLen>0)
			MQLen--;
	}

	kbd_mouse_event((dx+err_dx)/MQ_ERROR, (dy+err_dy)/MQ_ERROR, (dz+err_dz)/MQ_ERROR, tmp.buttons);
	err_dx=(dx+err_dx)%MQ_ERROR;
	err_dy=(dy+err_dy)%MQ_ERROR;
	err_dz=(dz+err_dz)%MQ_ERROR;
}


void ProcessMouse(int xPos,int yPos, BOOL move, int L, int R, int M)
{
	int OldButtons=MouseButtons;
	xPos+=WND_dx; yPos+=WND_dy; // viewport

	move=1;	// always!

	if(MouseX<0 || !move)
	{
		MouseX=xPos; MouseY=yPos;
	}

    if (L!=-1)
    {
        MouseButtons = (MouseButtons&~MOUSE_EVENT_LBUTTON)|(L?MOUSE_EVENT_LBUTTON:0);
        if(L)	// incorrect! we should change old button state
    		MouseLBDnCount++;
    	else    	
    		MouseLBUpCount++;
    }
    if (R!=-1)
    {
        MouseButtons = (MouseButtons&~MOUSE_EVENT_RBUTTON)|(R?MOUSE_EVENT_RBUTTON:0);
        if(R)
    		MouseRBDnCount++;
    	else    	
    		MouseRBUpCount++;
    }
    if (M!=-1)
    {
        MouseButtons = (MouseButtons&~MOUSE_EVENT_MBUTTON)|(M?MOUSE_EVENT_MBUTTON:0);
        if(M)
    		MouseMBDnCount++;
    	else    	
    		MouseMBUpCount++;
	}

//	if((MouseButtons&MOUSE_EVENT_LBUTTON) && (GetKeyState(VK_LBUTTON)&32768) == 0)
//		MouseButtons&=~MOUSE_EVENT_LBUTTON;

	switch(CalibrationMode)
	{
		case 0:
			if(OldButtons!=MouseButtons)
			{
				if((xPos-MouseX)!=0 && (yPos-MouseY)!=0)
					my_kbd_mouse_event((xPos-MouseX)*MQ_ERROR,(yPos-MouseY)*MQ_ERROR,0,OldButtons);
				my_kbd_mouse_event(0,0,0,MouseButtons);
			} else
				my_kbd_mouse_event((xPos-MouseX)*MQ_ERROR,(yPos-MouseY)*MQ_ERROR,0,MouseButtons);
			break;
		case 1:
			if(OldButtons!=MouseButtons)	// we split mouse movement and button changes
			{
				if((xPos-MouseX)!=0 && (yPos-MouseY)!=0)
					my_kbd_mouse_event((int)((double)(xPos-MouseX)*CoeffX*MQ_ERROR),(int)((double)(yPos-MouseY)*CoeffY*MQ_ERROR),0,OldButtons);
				my_kbd_mouse_event(0,0,0,MouseButtons);
			} else
				my_kbd_mouse_event((int)((double)(xPos-MouseX)*CoeffX*MQ_ERROR),(int)((double)(yPos-MouseY)*CoeffY*MQ_ERROR),0,MouseButtons);
			break;
		case 2:   	// ignore mouse movement
			break;
		case 3:     // ignore mouse movement
			break;
		case 4:
			MouseButtons = 0;
			my_kbd_mouse_event((int)(-MQ_ERROR*(double)(xPos-MouseX)),(int)-MQ_ERROR*(double)(yPos-MouseY),0,MouseButtons);
			break;
	}
	MouseX=xPos; MouseY=yPos;
}

void ToggleFullscreen(BOOL ForceWindowed)
{
	static BOOL IsFullScreen=0;

	if(ForceWindowed && IsFullScreen==0)	// already windowed
		return;

	IsFullScreen = !IsFullScreen;
		
	if(_SHFullScreen)
		_SHFullScreen(MainWindow,SHFS_HIDESIPBUTTON|(IsFullScreen?SHFS_HIDETASKBAR|SHFS_HIDESTARTICON:SHFS_SHOWSTARTICON|SHFS_SHOWTASKBAR));
	if(IsFullScreen)
	{
		MoveWindow(MainWindow,0,0,GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN),TRUE);
	} else
	{
		RECT rc;
	    SystemParametersInfo(SPI_GETWORKAREA, 0, &rc, FALSE);
    	MoveWindow(MainWindow,rc.left, rc.top, rc.right-rc.left, rc.bottom-rc.top, TRUE);
	}
    vga_hw_invalidate();
    vga_hw_update();
	InvalidateRect(0,0,TRUE);
}

void UpdateClientRect(HWND hWnd);
void ToggleMenu()
{
//	CalibrationMode = 2;
	RECT r;
    GetClientRect(MainWindow,&r);
	r.top=r.bottom-MENU_HEIGHT;
	MenuEnabled++;
	if(MenuEnabled==1)
		MenuEnabled++;
	if(MenuEnabled>3)	// cycle through 5 modes
		MenuEnabled=0;
	UpdateClientRect(MainWindow);
	InvalidateRect(MainWindow,&r,TRUE);
}

void UpdateClientRect(HWND hWnd)
{
	RECT r;
	POINT p;
    GetClientRect(hWnd,&r);
    p.x=r.left;
    p.y=r.top;
    ClientToScreen(hWnd,&p);
	WND_dx=p.x;
    WND_dy=p.y;
    WND_w = r.right-r.left;
	WND_h = r.bottom-r.top;
	if(MenuEnabled)
		WND_h-=MENU_HEIGHT;
}

void my_kbd_put_keycode(int scan)	// remove zero scan codes
{
	if(scan!=0 && scan!=0x80)
		kbd_put_keycode(scan);
}

//
//  FUNCTION: WndProc(HWND, unsigned, WORD, LONG)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_COMMAND	- process the application menu
//  WM_PAINT	- Paint the main window
//  WM_DESTROY	- post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    int wmId, wmEvent;
    PAINTSTRUCT ps;
    RECT r;
    POINT p;
    HDC hdc;
    static int LbDnX, LbDnY;	// LB down X and Y for onscreen keyboard press/release

    static SHACTIVATEINFO s_sai;

    if(GetForegroundWindow()!=MainWindow)	// dumb WM does not send WM_ACTIVATE on our deactivate
	{
		vm_stop(0);
		ToggleFullscreen(TRUE);
   	}

    switch (message) 
    {
        case WM_COMMAND:
            wmId    = LOWORD(wParam); 
            wmEvent = HIWORD(wParam); 
            // Parse the menu selections:
            switch (wmId)
            {
                default:
                    return DefWindowProc(hWnd, message, wParam, lParam);
            }
            break;
        case WM_CREATE:	
            break;
        case WM_PAINT:
            hdc = BeginPaint(hWnd, &ps);
            if(SCR_ds)
	            sdl_update(SCR_ds,0,0,SCR_cx,SCR_cy); // TODO: I don't check the dirty region
			if(MenuEnabled)
		        UpdateMenu(hdc,-1,-1,-1);
            EndPaint(hWnd, &ps);
            break;
        case WM_ERASEBKGND:
        	hdc = (HDC) wParam;
        	GetClientRect(hWnd,&r);  // redraw just menu area
			r.top=r.bottom-MENU_HEIGHT;
			FillRect(hdc,&r,GetStockObject(BLACK_BRUSH));
        	return TRUE;
        case WM_DESTROY:
			vm_start();
			InvalidateRect(0,0,TRUE);
        	qemu_system_shutdown_request();
            PostQuitMessage(0);
            break;
        case WM_ACTIVATE:
            // Notify shell of our activate message
            SHHandleWMActivate(hWnd, wParam, lParam, &s_sai, FALSE);
            if(wParam!=WA_INACTIVE && GetForegroundWindow()==hWnd)
            {
				if(_SHFullScreen)
					_SHFullScreen(hWnd,SHFS_HIDESIPBUTTON);
				vm_start();
       			CheckRotation();
       			UpdateClientRect(hWnd);
				InvalidateRect(0,0,TRUE);
			}
            break;
		case WM_WINDOWPOSCHANGED:
			if(GetForegroundWindow()!=hWnd)
            {
            } else
            {
      			CheckRotation();
       			UpdateClientRect(hWnd);
			}
            break;
		case WM_CAPTURECHANGED:
            break;
        case WM_CANCELMODE:
			vm_stop(0);
			ToggleFullscreen(TRUE);
			InvalidateRect(0,0,TRUE);
            break;
        case WM_SETTINGCHANGE:
            SHHandleWMSettingChange(hWnd, wParam, lParam, &s_sai);
            break;
		case WM_LBUTTONDOWN:
			{
  				SHRGINFO    shrg;
			  	int xPos = LOWORD(lParam); 
				int yPos = HIWORD(lParam); 
				p.x=xPos; p.y=yPos;
				GetClientRect(hWnd,&r);
				if(!vm_running)
					InvalidateRect(0,0,TRUE);
				vm_start();
  				shrg.cbSize = sizeof(shrg);
	  			shrg.hwndClient = hWnd;
  				shrg.ptDown.x = LOWORD(lParam);
  				shrg.ptDown.y = HIWORD(lParam);
	  			shrg.dwFlags = SHRG_LONGDELAY;
				r.top=r.bottom-MENU_HEIGHT;
				if(MenuEnabled && PtInRect(&r,p))
				{
					HDC dc=GetDC(hWnd);
					LbDnX=xPos; LbDnY=yPos;
					UpdateMenu(dc,xPos,yPos,1);
					ReleaseDC(hWnd,dc);
				} else
				{
				  	SHRecognizeGesture(&shrg);
				  	ProcessMouse(xPos,yPos,0,1,-1,-1);
				  	if(CalibrationMode == 3)
				  	{
				  		Cal_PtPressed.x=xPos;
				  		Cal_PtPressed.y=yPos;
				  		CalibrationMode++;
				  	} 
				}
			}
			break;
		case WM_NOTIFY:	// simulate rbutton click
			{
				LPNMHDR pnmh = (LPNMHDR) lParam;
				if(pnmh->code==GN_CONTEXTMENU)
				{
					ProcessMouse(MouseX,MouseY, 0, -1, 1, -1);
					ProcessMouse(MouseX,MouseY, 0, -1, 0, -1);
				}
			}
			break;
		case WM_LBUTTONUP:
			p.x=LOWORD(lParam);  p.y=HIWORD(lParam); 
			GetClientRect(hWnd,&r);
			r.top=r.bottom-MENU_HEIGHT;
			if(MenuEnabled && PtInRect(&r,p))
			{
				HDC dc=GetDC(hWnd);
				UpdateMenu(dc,LbDnX, LbDnY,0);
				ReleaseDC(hWnd,dc);
			} else
			{
				ProcessMouse(LOWORD(lParam),HIWORD(lParam), 0, 0, -1, -1);
			  	if(CalibrationMode == 2)
			  	{
			  		Cal_PtOnScreen.x=LOWORD(lParam);
			  		Cal_PtOnScreen.y=HIWORD(lParam);
			  		CalibrationMode++;
			  	} else if(CalibrationMode == 4)
			  	{
			  		Cal_PtReleased.x=LOWORD(lParam);
		  			Cal_PtReleased.y=HIWORD(lParam);
		  			Cal_PtReleased.x-=Cal_PtOnScreen.x;
			  		Cal_PtReleased.y-=Cal_PtOnScreen.y;
			  		Cal_PtPressed.x-=Cal_PtOnScreen.x;
			  		Cal_PtPressed.y-=Cal_PtOnScreen.y;

		  			CoeffX=((double)Cal_PtPressed.x-Cal_PtReleased.x)/(double)Cal_PtReleased.x;
			  		CoeffY=((double)Cal_PtPressed.y-Cal_PtReleased.y)/(double)Cal_PtReleased.y;
			  		CalibrationMode = 1;
			  	}
		  	}
			break;
		case WM_RBUTTONDOWN:
			ProcessMouse(LOWORD(lParam),HIWORD(lParam), 0,  -1, 1, -1);
			break;
		case WM_RBUTTONUP:
			ProcessMouse(LOWORD(lParam),HIWORD(lParam), 0,  -1, 0, -1);
			break;
		case WM_MBUTTONDOWN:
			ProcessMouse(LOWORD(lParam),HIWORD(lParam), 0,  -1, -1, 1);
			break;
		case WM_MBUTTONUP:
			ProcessMouse(LOWORD(lParam),HIWORD(lParam), 0,  -1, -1, 0);
			break;
		case WM_MOUSEMOVE:
			ProcessMouse(LOWORD(lParam),HIWORD(lParam), 1,  (wParam&MK_LBUTTON)?1:0, 0, 0);
//			ProcessMouse(LOWORD(lParam),HIWORD(lParam), 1,  0, 0, 0); // sim btn release
			break;
		case WM_KEYDOWN:
			if(!vm_running)
				InvalidateRect(0,0,TRUE);
			vm_start();
			if(wParam!=VK_F1 && wParam!=VK_F2)
				my_kbd_put_keycode(keyevent_to_keycode(wParam,lParam,FALSE));
			break;
		case WM_KEYUP:
			if(wParam==VK_F1)
				ToggleFullscreen(FALSE);
			else if(wParam==VK_F2)
				ToggleMenu();
			else 
				my_kbd_put_keycode(keyevent_to_keycode(wParam,lParam,TRUE));
			break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

void sdl_display_init(DisplayState *ds, int full_screen, int no_frame)
{
	if (!InitInstance(GetModuleHandle(0), SW_SHOWMAXIMIZED)) 
	{
		puts("Cannot create main window");
		exit(1);
	}
    atexit(sdl_cleanup);

    sdl_resize(ds, 640, 480);

    ds->dpy_update = sdl_update;
    ds->dpy_resize = sdl_resize;
    ds->dpy_refresh = sdl_refresh;
}

void redirect_stdout()
{
	wchar_t MyPath[MAX_PATH];
	HANDLE h;
	GetModuleFileNameW(0,MyPath,MAX_PATH);
	wchar_t *t=wcsrchr(MyPath,'\\');
	if(t)
		*t=0;
	wcscat(MyPath,L"\\qemu-out.txt");

	h = CreateFileW(MyPath, GENERIC_WRITE,
	      FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, 0, NULL);
   	_initstdfd(stdin,  0, (HANDLE)_fileno(_getstdfilex(0)), __SRD);
	_initstdfd(stdout, 1, (HANDLE)h, __SWR);
//    h = CreateFileW(L"stderr.txt", GENERIC_WRITE,
//	      FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, 0, NULL);
	_initstdfd(stderr, 2, (HANDLE)h, __SWR);	
}

struct Keyboard
{
	wchar_t *Sym;
	int Scan;
} Kbd[6][32]=
{  
// high bit == 1 - extended key, code 197 == break
{L"Esc",  1,L""   , -1,L"F1" , 59,L"F2" , 60,L"F3" , 61,L"F4" , 62,L"F5" , 63,L"F6" , 64,L"F7" , 65,L"F8" , 66,L"F9" , 67,L"F10", 68,L"F11", 87,L"F12", 88,L""   , -1,L""   , -1,L""   , -1,L""   , -1,L""   , -1,L""   , -1,L""   , -1,L""   , -1},
{L"1"  ,  2,L"2"  ,  3,L"3"  ,  4,L"4"  ,  5,L"5"  ,  6,L"6"  ,  7,L"7"  ,  8,L"8"  ,  9,L"9"  , 10,L"0"  , 11,L"-"  , 12,L"="  , 13,L"\\" , 43,L"<-" , 14,L""   , -1,L"pSc", 84,L"sLk", 70,L"Brk",197,L"Num", 69,L"/"  ,181,L"*"  , 55,L"-"  , 74,L"Esc",  1,L"Tab", 15,L"<-" , 14,L"Ins",210,L"Hom",199,L"pUp",201,L"pSc", 84,L"sLk", 70,L"Caps",58,L"Brk",197},
{L"Tab", 15,L"q"  , 16,L"w"  , 17,L"e"  , 18,L"r"  , 19,L"t"  , 20,L"y"  , 21,L"u"  , 22,L"i"  , 23,L"o"  , 24,L"p"  , 25,L"["  , 26,L"]"  , 27,L"~"  , 41,L""   , -1,L"Ins",210,L"Hom",199,L"pUp",201,L"7"  , 71,L"8"  , 72,L"9"  , 73,L" "  , -2,L"q"  , 16,L"w"  , 17,L"e"  , 18,L"Del",211,L"End",207,L"pDn",209,L"F1" , 59,L"F2" , 60,L"F3" , 61,L"F4" , 62},
{L"Caps",58,L"a"  , 30,L"s"  , 31,L"d"  , 32,L"f"  , 33,L"g"  , 34,L"h"  , 35,L"j"  , 36,L"k"  , 37,L"l"  , 38,L";"  , 39,L"\'" , 40,L"" ,  0,L"Enter", 28,L""   , -1,L"Del",211,L"End",207,L"pDn",209,L"4"  , 75,L"5"  , 76,L"6"  , 77,L"+"  , 78,L"a"  , 30,L"s"  , 31,L"d"  , 32,L""   , -1,L""   , -1,L""   , -1,L"F5" , 63,L"F6" , 64,L"F7" , 65,L"F8" , 66},
{L"" ,  0,L"Shift", 42,L"z"  , 44,L"x"  , 45,L"c"  , 46,L"v"  , 47,L"b"  , 48,L"n"  , 49,L"m"  , 50,L"<"  , 51,L">"  , 52,L"/"  , 53,L"" ,  0,L"Shift", 54,L""   , -1,L""   , -1,L"^"  ,200,L""   , -1,L"1"  , 79,L"2"  , 80,L"3"  , 81,L" "  , -2,L"z"  , 44,L"x"  , 45,L"c"  , 46,L""   , -1,L"^"  ,200,L""   , -1,L"F9" , 67,L"F10", 68,L"F11", 87,L"F12", 88},
{L""  ,  0,L"Ctrl", 29,L"Win",219,L"Alt", 56,L""   ,  0,L""   ,  0,L""   ,  0,L""   ,  0,L"   ", 57,L"Alt",184,L"Win",220,L"Mnu",221,L""  ,  0,L"Ctrl",157,L""   , -1,L"<-" ,203,L"v"  ,208,L"->" ,205,L""   ,  0,L"Ins", 82,L"Del", 83,L"Ent",156,L""   ,  0,L""   ,  0,L"   ", 57,L"<-" ,203,L"v"  ,208,L"->" ,205,L""    ,0,L"Shift",42,L"Ctrl",29,L"Alt", 56},
};

static int KbdState[256];	// to keep button states

// currently VGA only
void UpdateMenu(HDC dc, int x, int y, int mode)	// mode==-1 draw only, 1==LB down, 0==LB up
{
	RECT r; POINT p;
	RECT fr;
	int DX=0;
	int i, j;
	HFONT hf;
	HGDIOBJ oldfont;
	HGDIOBJ oldbrush;
	static LOGFONT lf;
    int PrevCount=0;
	int startJ, endJ, startI, endI;

    GetClientRect(MainWindow,&r);

	switch(MenuEnabled)
	{
		case 1:
			startJ=0; endJ=6; startI=0, endI=22;
			break;
		case 2:
			startJ=1; endJ=6; startI=0, endI=14;
			break;                            
		case 3:
			startJ=1; endJ=6; startI=18, endI=32;
			break;                            
		default:
			return;
	}

	DX=(r.right-r.left)/2-MENU_WIDTH/2;	// center on scr;
	if(DX<0)
		DX=0;
	r.left=0; r.top=r.bottom-MENU_HEIGHT;
//	FillRect(dc,&r,GetStockObject(BLACK_BRUSH));
	r.left=DX; r.right=r.left+MENU_WIDTH;
//	FillRect(dc,&r,GetStockObject(LTGRAY_BRUSH));

	p.x=x; p.y=y;

	lf.lfHeight=MenuEnabled>1?-12:-9;

	hf=CreateFontIndirect(&lf);
//	CreateFont(-10,0,0,0,100,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,
//		CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,FF_DONTCARE,0);
	
	oldfont=SelectObject(dc,hf);
	oldbrush=SelectObject(dc,GetStockObject(WHITE_BRUSH));
	SetBkMode(dc,TRANSPARENT);

	
	for(j=startJ; j<endJ; j++)
	{
		PrevCount = 0;
		for(i=startI; i<endI; i++)
		{
			if(MenuEnabled>1)
			{
				fr.top=r.top+(j-startJ)*16;
				fr.bottom=fr.top+16+1;
				fr.left=r.left+(i-startI-PrevCount)*28;
				fr.right=fr.left+28*(PrevCount+1)+1;
			} else
			{
				fr.top=r.top+j*13;
				fr.bottom=fr.top+13+1;
				fr.left=r.left+(i-PrevCount)*18;
				fr.right=fr.left+18*(PrevCount+1)+1;
			}
			if(Kbd[j][i].Sym==0 || Kbd[j][i].Sym[0]==0)
			{
				if(Kbd[j][i].Scan!=-1)
					PrevCount++; 
				else
				{
					fr.left++; fr.top++;
					if(mode==-1)
						FillRect(dc,&fr,GetStockObject(LTGRAY_BRUSH));
				}
				continue;
			}
			if(j>1 && Kbd[j-1][i].Scan==-2)
			{
				if(MenuEnabled>1)
					fr.top=r.top+(j-startJ-1)*16;
				else
					fr.top=r.top+(j-startJ-1)*13;
			}
			if(PtInRect(&fr,p) && Kbd[j][i].Scan>0 && mode>=0)
			{
				switch(Kbd[j][i].Scan)
				{
					case 42:
					case 29: 
					case 56:
					case 54:
					case 42+128:
					case 29+128: 
					case 56+128:
					case 54+128:
					case 219:
					case 220:
						if(mode) // on press
							KbdState[Kbd[j][i].Scan]=!KbdState[Kbd[j][i].Scan];
						if(mode == KbdState[Kbd[j][i].Scan]) 
							; // go to default
						else
							break;						
					default:
						if(Kbd[j][i].Scan>128)
						{
							if(Kbd[j][i].Scan==197)	// break
							{
								my_kbd_put_keycode(0xe1);
								if(mode)  // Dn
								{
									my_kbd_put_keycode(0x1d);
									my_kbd_put_keycode(0x45);
								} else      // Up
								{
									my_kbd_put_keycode(0x1d|128);
									my_kbd_put_keycode(0x45|128);
								}
							} else
							{
								my_kbd_put_keycode(0xe0);
								if(mode)  // Dn
									my_kbd_put_keycode(Kbd[j][i].Scan-128);
								else      // Up
									my_kbd_put_keycode(Kbd[j][i].Scan);
							}
						} else
						{
							if(mode)
								my_kbd_put_keycode(Kbd[j][i].Scan);
							else
								my_kbd_put_keycode(Kbd[j][i].Scan+128);
						}
				}
				if(mode==1 || KbdState[Kbd[j][i].Scan])
					SelectObject(dc,GetStockObject(DKGRAY_BRUSH));
				else
					SelectObject(dc,GetStockObject(WHITE_BRUSH));
   		        Rectangle(dc,fr.left,fr.top,fr.right,fr.bottom);
				DrawText(dc,Kbd[j][i].Sym,-1,&fr,DT_CENTER|DT_VCENTER);
			} else
			{
				if(mode==-1)
				{
					SelectObject(dc,GetStockObject(WHITE_BRUSH));
    		        Rectangle(dc,fr.left,fr.top,fr.right,fr.bottom);
					DrawText(dc,Kbd[j][i].Sym,-1,&fr,DT_CENTER|DT_VCENTER);
				}
			}			
			PrevCount=0;
		}
	}
	if(MenuEnabled>1)
	{
		fr.top=r.top+1;
		fr.bottom=fr.top+16*(endJ-startJ);
		fr.left=r.left+28*(endI-startI)+1;
		fr.right=r.right;
	} else
	{
		fr.top=r.top+1;
		fr.bottom=fr.top+13*(endJ-startJ);
		fr.left=r.left+18*(endI-startI)+1;
		fr.right=r.right;
	}
	FillRect(dc,&fr,GetStockObject(DKGRAY_BRUSH));
	fr.top++; fr.left++; fr.right--; fr.bottom--;
	FillRect(dc,&fr,GetStockObject(LTGRAY_BRUSH));

  	SelectObject(dc,oldfont);
}
size_t	_EXFUN(wcstombs,(char *s, const wchar_t *pwc, size_t n))
{	
	int t= WideCharToMultiByte(CP_ACP,0,pwc,-1,s,n,0,0);
	return t;
}
size_t	_EXFUN(mbstowcs,(wchar_t *pwc, const char *s, size_t n))
{	
	int t= MultiByteToWideChar(CP_ACP,0,s,-1,pwc,n*2);
	return t;
}
