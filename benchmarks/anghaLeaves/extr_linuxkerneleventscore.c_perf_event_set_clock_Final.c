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
struct perf_event {TYPE_1__* pmu; int /*<<< orphan*/ * clock; } ;
typedef  int clockid_t ;
struct TYPE_2__ {int capabilities; } ;

/* Variables and functions */
#define  CLOCK_BOOTTIME 132 
#define  CLOCK_MONOTONIC 131 
#define  CLOCK_MONOTONIC_RAW 130 
#define  CLOCK_REALTIME 129 
#define  CLOCK_TAI 128 
 int EINVAL ; 
 int PERF_PMU_CAP_NO_NMI ; 
 int /*<<< orphan*/  ktime_get_boot_ns ; 
 int /*<<< orphan*/  ktime_get_mono_fast_ns ; 
 int /*<<< orphan*/  ktime_get_raw_fast_ns ; 
 int /*<<< orphan*/  ktime_get_real_ns ; 
 int /*<<< orphan*/  ktime_get_tai_ns ; 

__attribute__((used)) static int perf_event_set_clock(struct perf_event *event, clockid_t clk_id)
{
	bool nmi_safe = false;

	switch (clk_id) {
	case CLOCK_MONOTONIC:
		event->clock = &ktime_get_mono_fast_ns;
		nmi_safe = true;
		break;

	case CLOCK_MONOTONIC_RAW:
		event->clock = &ktime_get_raw_fast_ns;
		nmi_safe = true;
		break;

	case CLOCK_REALTIME:
		event->clock = &ktime_get_real_ns;
		break;

	case CLOCK_BOOTTIME:
		event->clock = &ktime_get_boot_ns;
		break;

	case CLOCK_TAI:
		event->clock = &ktime_get_tai_ns;
		break;

	default:
		return -EINVAL;
	}

	if (!nmi_safe && !(event->pmu->capabilities & PERF_PMU_CAP_NO_NMI))
		return -EINVAL;

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
          int clk_id = 100;
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              int _len_event__i0__pmu0 = 1;
          event[_i0].pmu = (struct TYPE_2__ *) malloc(_len_event__i0__pmu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_event__i0__pmu0; _j0++) {
            event[_i0].pmu->capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event__i0__clock0 = 1;
          event[_i0].clock = (int *) malloc(_len_event__i0__clock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_event__i0__clock0; _j0++) {
            event[_i0].clock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = perf_event_set_clock(event,clk_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_event0; _aux++) {
          free(event[_aux].pmu);
          }
          for(int _aux = 0; _aux < _len_event0; _aux++) {
          free(event[_aux].clock);
          }
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
