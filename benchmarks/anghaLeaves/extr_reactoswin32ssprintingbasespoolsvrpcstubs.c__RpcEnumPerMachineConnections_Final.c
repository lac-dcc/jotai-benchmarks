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
typedef  int /*<<< orphan*/  WINSPOOL_HANDLE ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcEnumPerMachineConnections(WINSPOOL_HANDLE pServer, BYTE* pPrinterEnum, DWORD cbBuf, DWORD* pcbNeeded, DWORD* pcReturned)
{
    UNIMPLEMENTED;
    return ERROR_INVALID_FUNCTION;
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
          int pServer = 100;
          int cbBuf = 100;
          int _len_pPrinterEnum0 = 1;
          int * pPrinterEnum = (int *) malloc(_len_pPrinterEnum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pPrinterEnum0; _i0++) {
            pPrinterEnum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbNeeded0 = 1;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcReturned0 = 1;
          int * pcReturned = (int *) malloc(_len_pcReturned0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcReturned0; _i0++) {
            pcReturned[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcEnumPerMachineConnections(pServer,pPrinterEnum,cbBuf,pcbNeeded,pcReturned);
          printf("%d\n", benchRet); 
          free(pPrinterEnum);
          free(pcbNeeded);
          free(pcReturned);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
