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
typedef  int /*<<< orphan*/  WINSPOOL_PORT_VAR_CONTAINER ;
typedef  int /*<<< orphan*/  WINSPOOL_PORT_CONTAINER ;
typedef  int /*<<< orphan*/  WINSPOOL_HANDLE ;
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int /*<<< orphan*/  DWORD ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcAddPortEx(WINSPOOL_HANDLE pName, WINSPOOL_PORT_CONTAINER* pPortContainer, WINSPOOL_PORT_VAR_CONTAINER* pPortVarContainer, WCHAR* pMonitorName)
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
          int pName = 100;
          int _len_pPortContainer0 = 1;
          int * pPortContainer = (int *) malloc(_len_pPortContainer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pPortContainer0; _i0++) {
            pPortContainer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pPortVarContainer0 = 1;
          int * pPortVarContainer = (int *) malloc(_len_pPortVarContainer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pPortVarContainer0; _i0++) {
            pPortVarContainer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMonitorName0 = 1;
          int * pMonitorName = (int *) malloc(_len_pMonitorName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMonitorName0; _i0++) {
            pMonitorName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcAddPortEx(pName,pPortContainer,pPortVarContainer,pMonitorName);
          printf("%d\n", benchRet); 
          free(pPortContainer);
          free(pPortVarContainer);
          free(pMonitorName);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
