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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ config; scalar_t__ type; scalar_t__ sample_period; scalar_t__ exclude_guest; scalar_t__ exclude_host; scalar_t__ exclude_idle; scalar_t__ exclude_hv; scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_4__ {scalar_t__ type; } ;

/* Variables and functions */
 scalar_t__ AMD_POWER_EVENTSEL_PKG ; 
 scalar_t__ AMD_POWER_EVENT_MASK ; 
 int EINVAL ; 
 int ENOENT ; 
 TYPE_2__ pmu_class ; 

__attribute__((used)) static int pmu_event_init(struct perf_event *event)
{
	u64 cfg = event->attr.config & AMD_POWER_EVENT_MASK;

	/* Only look at AMD power events. */
	if (event->attr.type != pmu_class.type)
		return -ENOENT;

	/* Unsupported modes and filters. */
	if (event->attr.exclude_user   ||
	    event->attr.exclude_kernel ||
	    event->attr.exclude_hv     ||
	    event->attr.exclude_idle   ||
	    event->attr.exclude_host   ||
	    event->attr.exclude_guest  ||
	    /* no sampling */
	    event->attr.sample_period)
		return -EINVAL;

	if (cfg != AMD_POWER_EVENTSEL_PKG)
		return -EINVAL;

	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_event0 = 65025;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].attr.config = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.type = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.sample_period = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_guest = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_host = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_idle = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_hv = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = pmu_event_init(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_event0 = 100;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].attr.config = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.type = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.sample_period = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_guest = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_host = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_idle = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_hv = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = pmu_event_init(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].attr.config = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.type = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.sample_period = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_guest = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_host = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_idle = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_hv = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = pmu_event_init(event);
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
