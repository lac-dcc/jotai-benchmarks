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
struct TYPE_2__ {scalar_t__ exclusive; } ;
struct perf_event {int group_caps; TYPE_1__ attr; } ;
struct perf_cpu_context {scalar_t__ active_oncpu; scalar_t__ exclusive; } ;

/* Variables and functions */
 int PERF_EV_CAP_SOFTWARE ; 

__attribute__((used)) static int group_can_go_on(struct perf_event *event,
			   struct perf_cpu_context *cpuctx,
			   int can_add_hw)
{
	/*
	 * Groups consisting entirely of software events can always go on.
	 */
	if (event->group_caps & PERF_EV_CAP_SOFTWARE)
		return 1;
	/*
	 * If an exclusive group is already on, no other hardware
	 * events can go on.
	 */
	if (cpuctx->exclusive)
		return 0;
	/*
	 * If this group is exclusive and there are already
	 * events on the CPU, it can't go on.
	 */
	if (event->attr.exclusive && cpuctx->active_oncpu)
		return 0;
	/*
	 * Otherwise, try to add it if all previous groups were able
	 * to go on.
	 */
	return can_add_hw;
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
          int can_add_hw = 100;
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].group_caps = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.exclusive = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpuctx0 = 1;
          struct perf_cpu_context * cpuctx = (struct perf_cpu_context *) malloc(_len_cpuctx0*sizeof(struct perf_cpu_context));
          for(int _i0 = 0; _i0 < _len_cpuctx0; _i0++) {
            cpuctx[_i0].active_oncpu = ((-2 * (next_i()%2)) + 1) * next_i();
        cpuctx[_i0].exclusive = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = group_can_go_on(event,cpuctx,can_add_hw);
          printf("%d\n", benchRet); 
          free(event);
          free(cpuctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
