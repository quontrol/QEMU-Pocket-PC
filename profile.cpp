#include <windows.h>
#include <stdio.h>
#include "1\myutil.h"
#include "config-host.h"

void DumpProfiler();

int volatile EnableProf=1;

HANDLE ToProfile=0;
HANDLE hProfiler=0;
struct Info
{
	DWORD PC;
	DWORD LR;
	int Count;
	bool operator ==(const Info& a) {return (PC == a.PC) && (LR == a.LR);}
};

struct Info1
{
	DWORD PC;
	DWORD CS;
	int Count;
	bool operator ==(const Info1& a) {return (PC == a.PC) && (CS == a.CS);}
};

Sasha::TVector<Info> Addrs;

Sasha::TVector<Info1> AddrsPC;

//static unsigned char Codes[8192];
int CodesLen=0; 
int CodesCount=0;

DWORD LR;

static DWORD GetPC()
{
	static CONTEXT ctx;
	ctx.ContextFlags = CONTEXT_CONTROL;
	ctx.Pc=0;
	
	SuspendThread(ToProfile);
	GetThreadContext(ToProfile,&ctx);
	ResumeThread(ToProfile);
	LR=ctx.Lr;
	return ctx.Pc;
}

extern "C" int GetCodeGenBuffSize();

static int CODE_GEN_BUFFER_SIZE=0;
#ifdef DYNAMIC_TB
extern "C" unsigned char *code_gen_buffer;
#else
extern "C" unsigned char code_gen_buffer[];
#endif

struct TranslationBlock
{
    DWORD pc;   /* simulated PC corresponding to this block (EIP + CS base) */
    DWORD cs_base; /* CS base for this block */
};
extern "C" TranslationBlock *tb_find_pc(unsigned long tc_ptr);
extern "C" int cpu_find_opcode(TranslationBlock *tb,unsigned long searched_pc);
#undef DebugBreak
extern "C" void DebugBreak();

static int NativeCode=0;
static int EmulatedCode=0;

void CheckTicks()
{
	DWORD PC=GetPC();
	Info tmp;
	Info1 tmp1;

	if(PC>=(DWORD)code_gen_buffer && PC<CODE_GEN_BUFFER_SIZE+(DWORD)code_gen_buffer)
	{
		TranslationBlock *tb=tb_find_pc(PC);

		if(tb)
		{
			PC=cpu_find_opcode(tb,PC);
			tmp1.PC=tb->pc-tb->cs_base;
			tmp1.CS=tb->cs_base;
			tmp1.Count=0;
			int idx=AddrsPC.Find(tmp1);
			if(idx<0)
			{
				AddrsPC.Add(tmp1);
				idx=AddrsPC.Count-1;
			}
			AddrsPC[idx].Count++;
		}
		EmulatedCode++;
	} else
		NativeCode++;
	if(PC>0x80000000)
		return;

//	if(PC<0x1000)
		LR=0;

	tmp.PC=PC;
	tmp.LR=LR;
	tmp.Count=0;
	
	int idx=Addrs.Find(tmp);
	if(idx<0)
	{
		Addrs.Add(tmp);
		idx=Addrs.Count-1;
	}
	Addrs[idx].Count++;
}

DWORD WINAPI ProfilerThreadProc(
  void* lpParameter
)
{
	DWORD Start=GetTickCount();
	CeSetThreadPriority(GetCurrentThread(),90);
	while(1)
	{
		Sleep(1);
		if(EnableProf)
			CheckTicks();
		if(GetTickCount()-Start>10000)
		{
			DumpProfiler();
			Start=GetTickCount();
		}
	}
}

extern "C" void SetThreadToProfile()
{
  	ToProfile = (HANDLE)GetCurrentThreadId();
}

extern "C" void InitProfiler()
{
	static DWORD tmp=0;
	if(tmp)
		return;

	tmp=1;

	CODE_GEN_BUFFER_SIZE=GetCodeGenBuffSize();

	hProfiler = CreateThread(0,0,ProfilerThreadProc,0,0,&tmp);
}

extern "C" void PauseProfiler()
{
//	SuspendThread(hProfiler);
	EnableProf=0;
}
extern "C" void ResumeProfiler()
{
//	ResumeThread(hProfiler);
	EnableProf=1;
}

void DumpProfiler()
{
	puts("Profiler resuts:");
	printf("Native code: %d (%d%%), translated code: %d (%d%%)\n",NativeCode,
		NativeCode*100/(NativeCode+EmulatedCode),EmulatedCode,
		EmulatedCode*100/(NativeCode+EmulatedCode)	);
	for(int i=0; i<Addrs.Count; i++)
	{
		printf("%6d, %08X\n",Addrs[i].Count,Addrs[i].PC);
	}
	puts("Profiler resuts TB PCs:");
	for(int i=0; i<AddrsPC.Count; i++)
	{
		printf("%6d, %08X:%08X\n",AddrsPC[i].Count,AddrsPC[i].CS,AddrsPC[i].PC);
	}
	fflush(stdout);
}
