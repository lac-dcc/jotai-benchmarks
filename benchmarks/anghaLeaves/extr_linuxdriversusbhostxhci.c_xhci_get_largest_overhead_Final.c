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
struct xhci_interval_bw {scalar_t__* overhead; } ;

/* Variables and functions */
 unsigned int FS_OVERHEAD ; 
 size_t FS_OVERHEAD_TYPE ; 
 unsigned int HS_OVERHEAD ; 
 unsigned int LS_OVERHEAD ; 
 size_t LS_OVERHEAD_TYPE ; 

__attribute__((used)) static unsigned int
xhci_get_largest_overhead(struct xhci_interval_bw *interval_bw)
{
	if (interval_bw->overhead[LS_OVERHEAD_TYPE])
		return LS_OVERHEAD;
	if (interval_bw->overhead[FS_OVERHEAD_TYPE])
		return FS_OVERHEAD;
	return HS_OVERHEAD;
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
          int _len_interval_bw0 = 1;
          struct xhci_interval_bw * interval_bw = (struct xhci_interval_bw *) malloc(_len_interval_bw0*sizeof(struct xhci_interval_bw));
          for(int _i0 = 0; _i0 < _len_interval_bw0; _i0++) {
              int _len_interval_bw__i0__overhead0 = 1;
          interval_bw[_i0].overhead = (long *) malloc(_len_interval_bw__i0__overhead0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_interval_bw__i0__overhead0; _j0++) {
            interval_bw[_i0].overhead[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = xhci_get_largest_overhead(interval_bw);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_interval_bw0; _aux++) {
          free(interval_bw[_aux].overhead);
          }
          free(interval_bw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
