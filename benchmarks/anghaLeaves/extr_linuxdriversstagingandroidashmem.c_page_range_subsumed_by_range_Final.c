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
struct ashmem_range {size_t pgstart; size_t pgend; } ;

/* Variables and functions */

__attribute__((used)) static inline bool page_range_subsumed_by_range(struct ashmem_range *range,
						size_t start, size_t end)
{
	return (range->pgstart <= start) && (range->pgend >= end);
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
          unsigned long start = 100;
          unsigned long end = 100;
          int _len_range0 = 1;
          struct ashmem_range * range = (struct ashmem_range *) malloc(_len_range0*sizeof(struct ashmem_range));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0].pgstart = ((-2 * (next_i()%2)) + 1) * next_i();
        range[_i0].pgend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = page_range_subsumed_by_range(range,start,end);
          printf("%d\n", benchRet); 
          free(range);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
