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
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  DRS_MSG_REPDEL ;
typedef  int /*<<< orphan*/  DRS_HANDLE ;

/* Variables and functions */
 int /*<<< orphan*/  STATUS_NOT_IMPLEMENTED ; 

ULONG SRV_IDL_DRSReplicaDelNotImplemented(DRS_HANDLE hDrs, DWORD dwVersion, DRS_MSG_REPDEL *pmsgDel)
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
          int dwVersion = 100;
          int _len_pmsgDel0 = 1;
          int * pmsgDel = (int *) malloc(_len_pmsgDel0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmsgDel0; _i0++) {
            pmsgDel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SRV_IDL_DRSReplicaDelNotImplemented(hDrs,dwVersion,pmsgDel);
          printf("%d\n", benchRet); 
          free(pmsgDel);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int hDrs = 10;
          int dwVersion = 10;
          int _len_pmsgDel0 = 100;
          int * pmsgDel = (int *) malloc(_len_pmsgDel0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmsgDel0; _i0++) {
            pmsgDel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SRV_IDL_DRSReplicaDelNotImplemented(hDrs,dwVersion,pmsgDel);
          printf("%d\n", benchRet); 
          free(pmsgDel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
