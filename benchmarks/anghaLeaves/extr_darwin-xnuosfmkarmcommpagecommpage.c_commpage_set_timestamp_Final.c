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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  void* uint64_t ;
struct TYPE_2__ {int TimeStamp_tick; void* Ticks_per_sec; void* Ticks_scale; void* TimeStamp_frac; void* TimeStamp_sec; } ;
typedef  TYPE_1__ new_commpage_timeofday_data_t ;

/* Variables and functions */
 scalar_t__ _COMM_PAGE_NEWTIMEOFDAY_DATA ; 
 scalar_t__ _COMM_PAGE_RW_OFFSET ; 
 scalar_t__ commPagePtr ; 

void
commpage_set_timestamp(
	uint64_t	tbr, 
	uint64_t	secs,
	uint64_t	frac,
	uint64_t	scale,
	uint64_t	tick_per_sec)
{
	new_commpage_timeofday_data_t *commpage_timeofday_datap;

	if (commPagePtr == 0)
		return;

	commpage_timeofday_datap =  (new_commpage_timeofday_data_t *)(_COMM_PAGE_NEWTIMEOFDAY_DATA+_COMM_PAGE_RW_OFFSET);

	commpage_timeofday_datap->TimeStamp_tick = 0x0ULL;

#if	(__ARM_ARCH__ >= 7)
	__asm__ volatile("dmb ish");
#endif
	commpage_timeofday_datap->TimeStamp_sec = secs;
	commpage_timeofday_datap->TimeStamp_frac = frac;
	commpage_timeofday_datap->Ticks_scale = scale;
	commpage_timeofday_datap->Ticks_per_sec = tick_per_sec;

#if	(__ARM_ARCH__ >= 7)
	__asm__ volatile("dmb ish");
#endif
	commpage_timeofday_datap->TimeStamp_tick = tbr;
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
          void * tbr;
          void * secs;
          void * frac;
          void * scale;
          void * tick_per_sec;
          commpage_set_timestamp(tbr,secs,frac,scale,tick_per_sec);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * tbr;
          void * secs;
          void * frac;
          void * scale;
          void * tick_per_sec;
          commpage_set_timestamp(tbr,secs,frac,scale,tick_per_sec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * tbr;
          void * secs;
          void * frac;
          void * scale;
          void * tick_per_sec;
          commpage_set_timestamp(tbr,secs,frac,scale,tick_per_sec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
