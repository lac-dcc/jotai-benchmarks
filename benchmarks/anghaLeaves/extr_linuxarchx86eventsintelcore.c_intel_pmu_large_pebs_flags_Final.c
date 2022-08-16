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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int sample_regs_user; int /*<<< orphan*/  exclude_kernel; scalar_t__ use_clockid; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_4__ {unsigned long large_pebs_flags; } ;

/* Variables and functions */
 int PEBS_GP_REGS ; 
 unsigned long PERF_SAMPLE_REGS_INTR ; 
 unsigned long PERF_SAMPLE_REGS_USER ; 
 unsigned long PERF_SAMPLE_TIME ; 
 TYPE_2__ x86_pmu ; 

__attribute__((used)) static unsigned long intel_pmu_large_pebs_flags(struct perf_event *event)
{
	unsigned long flags = x86_pmu.large_pebs_flags;

	if (event->attr.use_clockid)
		flags &= ~PERF_SAMPLE_TIME;
	if (!event->attr.exclude_kernel)
		flags &= ~PERF_SAMPLE_REGS_USER;
	if (event->attr.sample_regs_user & ~PEBS_GP_REGS)
		flags &= ~(PERF_SAMPLE_REGS_USER | PERF_SAMPLE_REGS_INTR);
	return flags;
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
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].attr.sample_regs_user = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.use_clockid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = intel_pmu_large_pebs_flags(event);
          printf("%lu\n", benchRet); 
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
