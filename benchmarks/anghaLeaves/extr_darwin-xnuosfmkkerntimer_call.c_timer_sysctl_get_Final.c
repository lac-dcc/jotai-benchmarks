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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
struct TYPE_5__ {int interval; int scans; int preempts; int latency; int latency_min; int latency_max; } ;
struct TYPE_6__ {int count; } ;
struct TYPE_7__ {int enqueues; int dequeues; int escalates; int scan_limit; int scan_interval; int scan_pauses; TYPE_1__ threshold; TYPE_2__ queue; } ;
typedef  TYPE_3__ timer_longterm_t ;

/* Variables and functions */
#define  DEQUEUES 140 
#define  ENQUEUES 139 
#define  ESCALATES 138 
#define  LATENCY 137 
#define  LATENCY_MAX 136 
#define  LATENCY_MIN 135 
 int NSEC_PER_MSEC ; 
#define  PAUSES 134 
#define  PREEMPTS 133 
#define  QCOUNT 132 
#define  SCANS 131 
#define  SCAN_INTERVAL 130 
#define  SCAN_LIMIT 129 
#define  THRESHOLD 128 
 int TIMER_LONGTERM_NONE ; 
 TYPE_3__ timer_longterm ; 

uint64_t
timer_sysctl_get(int oid)
{
	timer_longterm_t	*tlp = &timer_longterm;

	switch (oid) {
	case THRESHOLD:
		return (tlp->threshold.interval == TIMER_LONGTERM_NONE) ?
			0 : tlp->threshold.interval / NSEC_PER_MSEC;
	case QCOUNT:
		return tlp->queue.count;
	case ENQUEUES:
		return tlp->enqueues;
	case DEQUEUES:
		return tlp->dequeues;
	case ESCALATES:
		return tlp->escalates;
	case SCANS:
		return tlp->threshold.scans;
	case PREEMPTS:
		return tlp->threshold.preempts;
	case LATENCY:
		return tlp->threshold.latency;
	case LATENCY_MIN:
		return tlp->threshold.latency_min;
	case LATENCY_MAX:
		return tlp->threshold.latency_max;
	case SCAN_LIMIT:
		return tlp->scan_limit;
	case SCAN_INTERVAL:
		return tlp->scan_interval;
	case PAUSES:
		return tlp->scan_pauses;
	default:
		return 0;
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
          int oid = 100;
          int benchRet = timer_sysctl_get(oid);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int oid = 255;
          int benchRet = timer_sysctl_get(oid);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int oid = 10;
          int benchRet = timer_sysctl_get(oid);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
