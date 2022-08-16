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
typedef  int /*<<< orphan*/  u64 ;
struct nd_region {struct nd_interleave_set* nd_set; } ;
struct nd_interleave_set {int /*<<< orphan*/  altcookie; } ;

/* Variables and functions */

u64 nd_region_interleave_set_altcookie(struct nd_region *nd_region)
{
	struct nd_interleave_set *nd_set = nd_region->nd_set;

	if (nd_set)
		return nd_set->altcookie;
	return 0;
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
          int _len_nd_region0 = 1;
          struct nd_region * nd_region = (struct nd_region *) malloc(_len_nd_region0*sizeof(struct nd_region));
          for(int _i0 = 0; _i0 < _len_nd_region0; _i0++) {
              int _len_nd_region__i0__nd_set0 = 1;
          nd_region[_i0].nd_set = (struct nd_interleave_set *) malloc(_len_nd_region__i0__nd_set0*sizeof(struct nd_interleave_set));
          for(int _j0 = 0; _j0 < _len_nd_region__i0__nd_set0; _j0++) {
            nd_region[_i0].nd_set->altcookie = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nd_region_interleave_set_altcookie(nd_region);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_nd_region0; _aux++) {
          free(nd_region[_aux].nd_set);
          }
          free(nd_region);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
