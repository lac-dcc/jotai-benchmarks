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
typedef  int u64 ;
struct TYPE_2__ {int branch_sample_type; int /*<<< orphan*/  exclude_kernel; int /*<<< orphan*/  exclude_user; } ;
struct perf_event {TYPE_1__ attr; } ;

/* Variables and functions */
 int PERF_SAMPLE_BRANCH_ANY ; 
 int PERF_SAMPLE_BRANCH_KERNEL ; 
 int PERF_SAMPLE_BRANCH_USER ; 

__attribute__((used)) static inline int precise_br_compat(struct perf_event *event)
{
	u64 m = event->attr.branch_sample_type;
	u64 b = 0;

	/* must capture all branches */
	if (!(m & PERF_SAMPLE_BRANCH_ANY))
		return 0;

	m &= PERF_SAMPLE_BRANCH_KERNEL | PERF_SAMPLE_BRANCH_USER;

	if (!event->attr.exclude_user)
		b |= PERF_SAMPLE_BRANCH_USER;

	if (!event->attr.exclude_kernel)
		b |= PERF_SAMPLE_BRANCH_KERNEL;

	/*
	 * ignore PERF_SAMPLE_BRANCH_HV, not supported on x86
	 */

	return m == b;
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
            event[_i0].attr.branch_sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = precise_br_compat(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
