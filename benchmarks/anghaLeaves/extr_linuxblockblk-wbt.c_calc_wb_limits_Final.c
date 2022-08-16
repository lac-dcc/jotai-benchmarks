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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int max_depth; } ;
struct rq_wb {scalar_t__ min_lat_nsec; int wb_normal; int wb_background; TYPE_1__ rq_depth; } ;

/* Variables and functions */

__attribute__((used)) static void calc_wb_limits(struct rq_wb *rwb)
{
	if (rwb->min_lat_nsec == 0) {
		rwb->wb_normal = rwb->wb_background = 0;
	} else if (rwb->rq_depth.max_depth <= 2) {
		rwb->wb_normal = rwb->rq_depth.max_depth;
		rwb->wb_background = 1;
	} else {
		rwb->wb_normal = (rwb->rq_depth.max_depth + 1) / 2;
		rwb->wb_background = (rwb->rq_depth.max_depth + 3) / 4;
	}
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
          int _len_rwb0 = 1;
          struct rq_wb * rwb = (struct rq_wb *) malloc(_len_rwb0*sizeof(struct rq_wb));
          for(int _i0 = 0; _i0 < _len_rwb0; _i0++) {
            rwb[_i0].min_lat_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        rwb[_i0].wb_normal = ((-2 * (next_i()%2)) + 1) * next_i();
        rwb[_i0].wb_background = ((-2 * (next_i()%2)) + 1) * next_i();
        rwb[_i0].rq_depth.max_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_wb_limits(rwb);
          free(rwb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
