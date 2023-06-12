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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  WINSPOOL_PRINTER_HANDLE ;
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcGetForm(WINSPOOL_PRINTER_HANDLE hPrinter, WCHAR* pFormName, DWORD Level, BYTE* pForm, DWORD cbBuf, DWORD* pcbNeeded)
{
    UNIMPLEMENTED;
    return ERROR_INVALID_FUNCTION;
}

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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int hPrinter = 100;
        
          int Level = 100;
        
          int cbBuf = 100;
        
          int _len_pFormName0 = 1;
          int * pFormName = (int *) malloc(_len_pFormName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pFormName0; _i0++) {
            pFormName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pForm0 = 1;
          int * pForm = (int *) malloc(_len_pForm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pForm0; _i0++) {
            pForm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pcbNeeded0 = 1;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcGetForm(hPrinter,pFormName,Level,pForm,cbBuf,pcbNeeded);
          printf("%d\n", benchRet); 
          free(pFormName);
          free(pForm);
          free(pcbNeeded);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int hPrinter = 255;
        
          int Level = 255;
        
          int cbBuf = 255;
        
          int _len_pFormName0 = 65025;
          int * pFormName = (int *) malloc(_len_pFormName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pFormName0; _i0++) {
            pFormName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pForm0 = 65025;
          int * pForm = (int *) malloc(_len_pForm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pForm0; _i0++) {
            pForm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pcbNeeded0 = 65025;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcGetForm(hPrinter,pFormName,Level,pForm,cbBuf,pcbNeeded);
          printf("%d\n", benchRet); 
          free(pFormName);
          free(pForm);
          free(pcbNeeded);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int hPrinter = 10;
        
          int Level = 10;
        
          int cbBuf = 10;
        
          int _len_pFormName0 = 100;
          int * pFormName = (int *) malloc(_len_pFormName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pFormName0; _i0++) {
            pFormName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pForm0 = 100;
          int * pForm = (int *) malloc(_len_pForm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pForm0; _i0++) {
            pForm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pcbNeeded0 = 100;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcGetForm(hPrinter,pFormName,Level,pForm,cbBuf,pcbNeeded);
          printf("%d\n", benchRet); 
          free(pFormName);
          free(pForm);
          free(pcbNeeded);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int hPrinter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int Level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int cbBuf = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pFormName0 = 1;
          int * pFormName = (int *) malloc(_len_pFormName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pFormName0; _i0++) {
            pFormName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pForm0 = 1;
          int * pForm = (int *) malloc(_len_pForm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pForm0; _i0++) {
            pForm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pcbNeeded0 = 1;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcGetForm(hPrinter,pFormName,Level,pForm,cbBuf,pcbNeeded);
          printf("%d\n", benchRet); 
          free(pFormName);
          free(pForm);
          free(pcbNeeded);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
