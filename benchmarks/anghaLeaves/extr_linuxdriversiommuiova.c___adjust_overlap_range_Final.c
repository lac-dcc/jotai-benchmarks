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
struct iova {unsigned long pfn_lo; unsigned long pfn_hi; } ;

/* Variables and functions */

__attribute__((used)) static void
__adjust_overlap_range(struct iova *iova,
	unsigned long *pfn_lo, unsigned long *pfn_hi)
{
	if (*pfn_lo < iova->pfn_lo)
		iova->pfn_lo = *pfn_lo;
	if (*pfn_hi > iova->pfn_hi)
		*pfn_lo = iova->pfn_hi + 1;
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
          int _len_iova0 = 1;
          struct iova * iova = (struct iova *) malloc(_len_iova0*sizeof(struct iova));
          for(int _i0 = 0; _i0 < _len_iova0; _i0++) {
            iova[_i0].pfn_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        iova[_i0].pfn_hi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfn_lo0 = 1;
          unsigned long * pfn_lo = (unsigned long *) malloc(_len_pfn_lo0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pfn_lo0; _i0++) {
            pfn_lo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfn_hi0 = 1;
          unsigned long * pfn_hi = (unsigned long *) malloc(_len_pfn_hi0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pfn_hi0; _i0++) {
            pfn_hi[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __adjust_overlap_range(iova,pfn_lo,pfn_hi);
          free(iova);
          free(pfn_lo);
          free(pfn_hi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
