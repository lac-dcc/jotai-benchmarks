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
typedef  int /*<<< orphan*/  ULONG ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  DRS_MSG_DCINFOREQ ;
typedef  int /*<<< orphan*/  DRS_MSG_DCINFOREPLY ;
typedef  int /*<<< orphan*/  DRS_HANDLE ;

/* Variables and functions */
 int /*<<< orphan*/  STATUS_NOT_IMPLEMENTED ; 

ULONG SRV_IDL_DRSDomainControllerInfoNotImplemented(DRS_HANDLE hDrs, DWORD dwInVersion, DRS_MSG_DCINFOREQ *pmsgIn, DWORD *pdwOutVersion, DRS_MSG_DCINFOREPLY *pmsgOut)
{
	return STATUS_NOT_IMPLEMENTED;
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
          int hDrs = 100;
          int dwInVersion = 100;
          int _len_pmsgIn0 = 1;
          int * pmsgIn = (int *) malloc(_len_pmsgIn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmsgIn0; _i0++) {
            pmsgIn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdwOutVersion0 = 1;
          int * pdwOutVersion = (int *) malloc(_len_pdwOutVersion0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwOutVersion0; _i0++) {
            pdwOutVersion[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmsgOut0 = 1;
          int * pmsgOut = (int *) malloc(_len_pmsgOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmsgOut0; _i0++) {
            pmsgOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SRV_IDL_DRSDomainControllerInfoNotImplemented(hDrs,dwInVersion,pmsgIn,pdwOutVersion,pmsgOut);
          printf("%d\n", benchRet); 
          free(pmsgIn);
          free(pdwOutVersion);
          free(pmsgOut);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
