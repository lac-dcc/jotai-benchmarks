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
struct TYPE_2__ {int type; int /*<<< orphan*/  config; } ;
struct perf_event {TYPE_1__ attr; } ;

/* Variables and functions */
 int /*<<< orphan*/  DTLB_LOAD_MISS ; 
 int ENOENT ; 
 int EOPNOTSUPP ; 
 int /*<<< orphan*/  ITLB_LOAD_MISS ; 
 int PERF_8xx_ID_CPU_CYCLES ; 
 int PERF_8xx_ID_DTLB_LOAD_MISS ; 
 int PERF_8xx_ID_HW_INSTRUCTIONS ; 
 int PERF_8xx_ID_ITLB_LOAD_MISS ; 
 int /*<<< orphan*/  PERF_COUNT_HW_CPU_CYCLES ; 
 int /*<<< orphan*/  PERF_COUNT_HW_INSTRUCTIONS ; 
#define  PERF_TYPE_HARDWARE 130 
#define  PERF_TYPE_HW_CACHE 129 
#define  PERF_TYPE_RAW 128 

__attribute__((used)) static int event_type(struct perf_event *event)
{
	switch (event->attr.type) {
	case PERF_TYPE_HARDWARE:
		if (event->attr.config == PERF_COUNT_HW_CPU_CYCLES)
			return PERF_8xx_ID_CPU_CYCLES;
		if (event->attr.config == PERF_COUNT_HW_INSTRUCTIONS)
			return PERF_8xx_ID_HW_INSTRUCTIONS;
		break;
	case PERF_TYPE_HW_CACHE:
		if (event->attr.config == ITLB_LOAD_MISS)
			return PERF_8xx_ID_ITLB_LOAD_MISS;
		if (event->attr.config == DTLB_LOAD_MISS)
			return PERF_8xx_ID_DTLB_LOAD_MISS;
		break;
	case PERF_TYPE_RAW:
		break;
	default:
		return -ENOENT;
	}
	return -EOPNOTSUPP;
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
            event[_i0].attr.type = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = event_type(event);
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
