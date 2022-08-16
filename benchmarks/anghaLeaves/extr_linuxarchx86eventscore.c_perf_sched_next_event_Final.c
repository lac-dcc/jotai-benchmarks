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
struct TYPE_2__ {scalar_t__ weight; size_t event; scalar_t__ counter; int /*<<< orphan*/  unassigned; } ;
struct perf_sched {size_t max_events; scalar_t__ max_weight; TYPE_1__ state; struct event_constraint** constraints; } ;
struct event_constraint {scalar_t__ weight; } ;

/* Variables and functions */

__attribute__((used)) static bool perf_sched_next_event(struct perf_sched *sched)
{
	struct event_constraint *c;

	if (!sched->state.unassigned || !--sched->state.unassigned)
		return false;

	do {
		/* next event */
		sched->state.event++;
		if (sched->state.event >= sched->max_events) {
			/* next weight */
			sched->state.event = 0;
			sched->state.weight++;
			if (sched->state.weight > sched->max_weight)
				return false;
		}
		c = sched->constraints[sched->state.event];
	} while (c->weight != sched->state.weight);

	sched->state.counter = 0;	/* start with first counter */

	return true;
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
          int _len_sched0 = 1;
          struct perf_sched * sched = (struct perf_sched *) malloc(_len_sched0*sizeof(struct perf_sched));
          for(int _i0 = 0; _i0 < _len_sched0; _i0++) {
            sched[_i0].max_events = ((-2 * (next_i()%2)) + 1) * next_i();
        sched[_i0].max_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        sched[_i0].state.weight = ((-2 * (next_i()%2)) + 1) * next_i();
        sched[_i0].state.event = ((-2 * (next_i()%2)) + 1) * next_i();
        sched[_i0].state.counter = ((-2 * (next_i()%2)) + 1) * next_i();
        sched[_i0].state.unassigned = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sched__i0__constraints0 = 1;
          sched[_i0].constraints = (struct event_constraint **) malloc(_len_sched__i0__constraints0*sizeof(struct event_constraint *));
          for(int _j0 = 0; _j0 < _len_sched__i0__constraints0; _j0++) {
            int _len_sched__i0__constraints1 = 1;
            sched[_i0].constraints[_j0] = (struct event_constraint *) malloc(_len_sched__i0__constraints1*sizeof(struct event_constraint));
            for(int _j1 = 0; _j1 < _len_sched__i0__constraints1; _j1++) {
              sched[_i0].constraints[_j0]->weight = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = perf_sched_next_event(sched);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sched0; _aux++) {
          free(*(sched[_aux].constraints));
        free(sched[_aux].constraints);
          }
          free(sched);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
