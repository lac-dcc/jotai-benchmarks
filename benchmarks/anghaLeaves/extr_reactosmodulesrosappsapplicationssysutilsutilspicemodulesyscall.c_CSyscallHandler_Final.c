// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int /*<<< orphan*/  ULONG ;
typedef  int /*<<< orphan*/  FRAME_SYSCALL ;

/* Variables and functions */

void CSyscallHandler(FRAME_SYSCALL* ptr,ULONG ulSysCall,ULONG ebx)
{
//	DPRINT((0,"CSyscallHandler(): %.4X:%.8X (syscall = %u)\n",ptr->cs,ptr->eip,ulSysCall));
/*
	switch(ulSysCall)
    {
        case 1: // sys_exit
            DPRINT((0,"CSysCallHandler(): 1\n"));
			if(bReportProcessEvents)
			{
				PICE_sprintf(syscallTemp,"pICE: process destroyed \"%s\" PID=%.4X\n",current->comm,current->pid);
				AddToRingBuffer(syscallTemp);
			}
            break;
        case 11: // sys_execve
            DPRINT((0,"CSysCallHandler(): 11\n"));
			if(bReportProcessEvents)
			{
				if(PICE_strlen((char*)ebx))
					PICE_sprintf(syscallTemp,"pICE: process created \"%s\" PID=%.4X (parent \"%s\")\n",(char *)ebx,current->pid,current->comm);
				else
					PICE_sprintf(syscallTemp,"pICE: process created PID=%.4X (parent \"%s\")\n",current->pid,current->comm);
				AddToRingBuffer(syscallTemp);
			}
            break;
        case 128: // sys_init_module
            DPRINT((0,"CSysCallHandler(): 128\n"));
            if(PICE_strlen((char *)ebx))
            {
                if(pmodule_list)
                {
                    struct module* pMod = *pmodule_list;
                    do
                    {
                        if(PICE_strcmpi((char*)ebx,(LPSTR)pMod->name)==0)
                        {
                            ULONG ulInitAddress;
                            PICE_sprintf(syscallTemp,"pICE: module \"%s\" loaded (%x-%x init @ %x)\n",(char*)ebx,pMod,(ULONG)pMod+pMod->size,pMod->init);
                            if((ulInitAddress=FindFunctionInModuleByName("init_module",pMod)))
                            {
			                    DPRINT((0,"setting DR1=%.8x\n",ulInitAddress));

                                SetHardwareBreakPoint(ulInitAddress,1);
                            }
                        }
                    }while((pMod = pMod->next));
                }
                else
                {
                    PICE_sprintf(syscallTemp,"pICE: module loaded \"%s\"\n",(char *)ebx);
                }
            }
            else
                PICE_sprintf(syscallTemp,"pICE: module loaded\n");
            AddToRingBuffer(syscallTemp);
            break;
        case 129: // sys_delete_module
            DPRINT((0,"CSysCallHandler(): 129\n"));
            if(PICE_strlen((char *)ebx))
            {
                if(IsModuleLoaded((LPSTR)ebx)!=NULL && PICE_strcmpi((char*)ebx,"pice")!=0 )
                {
                    PICE_sprintf(syscallTemp,"pICE: module freed \"%s\"\n",(char *)ebx);
                    Print(OUTPUT_WINDOW,syscallTemp);
					if((pModJustFreed = FindModuleByName((char*)ebx)) )
					{
                        if(pModJustFreed->cleanup)
                        {
                            old_cleanup_module = pModJustFreed->cleanup;
                            pModJustFreed->cleanup = other_module_cleanup_module;
                        }
                        else
                        {
						    RevirtualizeBreakpointsForModule(pModJustFreed);
                        }
					}
                }
            }
            else
            {
                PICE_sprintf(syscallTemp,"pICE: module freed\n");
                AddToRingBuffer(syscallTemp);
            }
			break;
    }
 */
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int ulSysCall = 100;
          int ebx = 100;
          int _len_ptr0 = 1;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CSyscallHandler(ptr,ulSysCall,ebx);
          free(ptr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int ulSysCall = 10;
          int ebx = 10;
          int _len_ptr0 = 100;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CSyscallHandler(ptr,ulSysCall,ebx);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
