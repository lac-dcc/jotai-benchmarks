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
typedef  int /*<<< orphan*/  u32 ;
struct rdt_resource {int num_closid; int /*<<< orphan*/  default_ctrl; } ;

/* Variables and functions */
 int /*<<< orphan*/  MBA_MAX_MBPS ; 

void setup_default_ctrlval(struct rdt_resource *r, u32 *dc, u32 *dm)
{
	int i;

	/*
	 * Initialize the Control MSRs to having no control.
	 * For Cache Allocation: Set all bits in cbm
	 * For Memory Allocation: Set b/w requested to 100%
	 * and the bandwidth in MBps to U32_MAX
	 */
	for (i = 0; i < r->num_closid; i++, dc++, dm++) {
		*dc = r->default_ctrl;
		*dm = MBA_MAX_MBPS;
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
          int _len_r0 = 1;
          struct rdt_resource * r = (struct rdt_resource *) malloc(_len_r0*sizeof(struct rdt_resource));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].num_closid = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].default_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dc0 = 1;
          int * dc = (int *) malloc(_len_dc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm0 = 1;
          int * dm = (int *) malloc(_len_dm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_default_ctrlval(r,dc,dm);
          free(r);
          free(dc);
          free(dm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
