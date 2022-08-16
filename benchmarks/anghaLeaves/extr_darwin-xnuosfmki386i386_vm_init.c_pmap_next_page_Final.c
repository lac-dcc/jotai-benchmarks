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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ppnum_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_2__ {scalar_t__ alloc_up; scalar_t__ alloc_down; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 scalar_t__ avail_remaining ; 
 scalar_t__ lowest_lo ; 
 scalar_t__ max_ppnum ; 
 size_t pmap_memory_region_count ; 
 size_t pmap_memory_region_current ; 
 TYPE_1__* pmap_memory_regions ; 

boolean_t
pmap_next_page(
	       ppnum_t *pn)
{
	if (avail_remaining) while (pmap_memory_region_current < pmap_memory_region_count) {
		if (pmap_memory_regions[pmap_memory_region_current].alloc_up >
		    pmap_memory_regions[pmap_memory_region_current].alloc_down) {
			pmap_memory_region_current++;
			continue;
		}
		*pn = pmap_memory_regions[pmap_memory_region_current].alloc_up++;
		avail_remaining--;

		if (*pn > max_ppnum)
			max_ppnum = *pn;

		if (lowest_lo == 0 || *pn < lowest_lo)
			lowest_lo = *pn;

		return TRUE;
	}
	return FALSE;
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
          int _len_pn0 = 1;
          long * pn = (long *) malloc(_len_pn0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmap_next_page(pn);
          printf("%d\n", benchRet); 
          free(pn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pn0 = 100;
          long * pn = (long *) malloc(_len_pn0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmap_next_page(pn);
          printf("%d\n", benchRet); 
          free(pn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
