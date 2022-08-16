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
struct x86_pmu_capability {unsigned int events_mask; int /*<<< orphan*/  events_mask_len; int /*<<< orphan*/  bit_width_fixed; int /*<<< orphan*/  bit_width_gp; int /*<<< orphan*/  num_counters_fixed; int /*<<< orphan*/  num_counters_gp; int /*<<< orphan*/  version; } ;
struct TYPE_2__ {int /*<<< orphan*/  events_mask_len; scalar_t__ events_maskl; int /*<<< orphan*/  cntval_bits; int /*<<< orphan*/  num_counters_fixed; int /*<<< orphan*/  num_counters; int /*<<< orphan*/  version; } ;

/* Variables and functions */
 TYPE_1__ x86_pmu ; 

void perf_get_x86_pmu_capability(struct x86_pmu_capability *cap)
{
	cap->version		= x86_pmu.version;
	cap->num_counters_gp	= x86_pmu.num_counters;
	cap->num_counters_fixed	= x86_pmu.num_counters_fixed;
	cap->bit_width_gp	= x86_pmu.cntval_bits;
	cap->bit_width_fixed	= x86_pmu.cntval_bits;
	cap->events_mask	= (unsigned int)x86_pmu.events_maskl;
	cap->events_mask_len	= x86_pmu.events_mask_len;
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
          int _len_cap0 = 1;
          struct x86_pmu_capability * cap = (struct x86_pmu_capability *) malloc(_len_cap0*sizeof(struct x86_pmu_capability));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
            cap[_i0].events_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].events_mask_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].bit_width_fixed = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].bit_width_gp = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].num_counters_fixed = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].num_counters_gp = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          perf_get_x86_pmu_capability(cap);
          free(cap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
