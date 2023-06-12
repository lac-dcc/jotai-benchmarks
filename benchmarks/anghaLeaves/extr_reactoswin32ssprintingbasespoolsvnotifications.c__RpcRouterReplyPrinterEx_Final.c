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
typedef  int /*<<< orphan*/  WINSPOOL_V2_UREPLY_PRINTER ;
typedef  int /*<<< orphan*/  WINSPOOL_PRINTER_HANDLE ;
typedef  int /*<<< orphan*/  DWORD ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcRouterReplyPrinterEx(WINSPOOL_PRINTER_HANDLE hNotify, DWORD dwColor, DWORD fdwFlags, DWORD* pdwResult, DWORD dwReplyType, WINSPOOL_V2_UREPLY_PRINTER Reply)
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
          int hNotify = 100;
        
          int dwColor = 100;
        
          int fdwFlags = 100;
        
          int dwReplyType = 100;
        
          int Reply = 100;
        
          int _len_pdwResult0 = 1;
          int * pdwResult = (int *) malloc(_len_pdwResult0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwResult0; _i0++) {
            pdwResult[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcRouterReplyPrinterEx(hNotify,dwColor,fdwFlags,pdwResult,dwReplyType,Reply);
          printf("%d\n", benchRet); 
          free(pdwResult);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hNotify = 255;
        
          int dwColor = 255;
        
          int fdwFlags = 255;
        
          int dwReplyType = 255;
        
          int Reply = 255;
        
          int _len_pdwResult0 = 65025;
          int * pdwResult = (int *) malloc(_len_pdwResult0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwResult0; _i0++) {
            pdwResult[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcRouterReplyPrinterEx(hNotify,dwColor,fdwFlags,pdwResult,dwReplyType,Reply);
          printf("%d\n", benchRet); 
          free(pdwResult);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hNotify = 10;
        
          int dwColor = 10;
        
          int fdwFlags = 10;
        
          int dwReplyType = 10;
        
          int Reply = 10;
        
          int _len_pdwResult0 = 100;
          int * pdwResult = (int *) malloc(_len_pdwResult0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwResult0; _i0++) {
            pdwResult[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcRouterReplyPrinterEx(hNotify,dwColor,fdwFlags,pdwResult,dwReplyType,Reply);
          printf("%d\n", benchRet); 
          free(pdwResult);
        
        break;
    }
    // empty
    case 3:
    {
          int hNotify = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dwColor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int fdwFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dwReplyType = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int Reply = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pdwResult0 = 1;
          int * pdwResult = (int *) malloc(_len_pdwResult0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwResult0; _i0++) {
            pdwResult[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _RpcRouterReplyPrinterEx(hNotify,dwColor,fdwFlags,pdwResult,dwReplyType,Reply);
          printf("%d\n", benchRet); 
          free(pdwResult);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
