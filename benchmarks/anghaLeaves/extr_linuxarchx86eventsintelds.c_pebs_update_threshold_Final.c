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
typedef  scalar_t__ u64 ;
struct debug_store {scalar_t__ pebs_interrupt_threshold; scalar_t__ pebs_buffer_base; scalar_t__ pebs_absolute_maximum; } ;
struct cpu_hw_events {scalar_t__ n_pebs; scalar_t__ n_large_pebs; struct debug_store* ds; } ;
struct TYPE_2__ {int flags; int max_pebs_events; int num_counters_fixed; int pebs_record_size; } ;

/* Variables and functions */
 int PMU_FL_PEBS_ALL ; 
 TYPE_1__ x86_pmu ; 

__attribute__((used)) static inline void pebs_update_threshold(struct cpu_hw_events *cpuc)
{
	struct debug_store *ds = cpuc->ds;
	u64 threshold;
	int reserved;

	if (x86_pmu.flags & PMU_FL_PEBS_ALL)
		reserved = x86_pmu.max_pebs_events + x86_pmu.num_counters_fixed;
	else
		reserved = x86_pmu.max_pebs_events;

	if (cpuc->n_pebs == cpuc->n_large_pebs) {
		threshold = ds->pebs_absolute_maximum -
			reserved * x86_pmu.pebs_record_size;
	} else {
		threshold = ds->pebs_buffer_base + x86_pmu.pebs_record_size;
	}

	ds->pebs_interrupt_threshold = threshold;
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
          int _len_cpuc0 = 1;
          struct cpu_hw_events * cpuc = (struct cpu_hw_events *) malloc(_len_cpuc0*sizeof(struct cpu_hw_events));
          for(int _i0 = 0; _i0 < _len_cpuc0; _i0++) {
            cpuc[_i0].n_pebs = ((-2 * (next_i()%2)) + 1) * next_i();
        cpuc[_i0].n_large_pebs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpuc__i0__ds0 = 1;
          cpuc[_i0].ds = (struct debug_store *) malloc(_len_cpuc__i0__ds0*sizeof(struct debug_store));
          for(int _j0 = 0; _j0 < _len_cpuc__i0__ds0; _j0++) {
            cpuc[_i0].ds->pebs_interrupt_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        cpuc[_i0].ds->pebs_buffer_base = ((-2 * (next_i()%2)) + 1) * next_i();
        cpuc[_i0].ds->pebs_absolute_maximum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pebs_update_threshold(cpuc);
          for(int _aux = 0; _aux < _len_cpuc0; _aux++) {
          free(cpuc[_aux].ds);
          }
          free(cpuc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
