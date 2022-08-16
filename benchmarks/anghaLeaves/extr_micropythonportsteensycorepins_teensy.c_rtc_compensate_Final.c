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

/* Type definitions */
typedef  int uint32_t ;

/* Variables and functions */
 int RTC_TCR ; 

void rtc_compensate(int adjust)
{
	uint32_t comp, interval, tcr;

	// This simple approach tries to maximize the interval.
	// Perhaps minimizing TCR would be better, so the
	// compensation is distributed more evenly across
	// many seconds, rather than saving it all up and then
	// altering one second up to +/- 0.38%
	if (adjust >= 0) {
		comp = adjust;
		interval = 256;
		while (1) {
			tcr = comp * interval;
			if (tcr < 128*256) break;
			if (--interval == 1) break;
		}
		tcr = tcr >> 8;
	} else {
		comp = -adjust;
		interval = 256;
		while (1) {
			tcr = comp * interval;
			if (tcr < 129*256) break;
			if (--interval == 1) break;
		}
		tcr = tcr >> 8;
		tcr = 256 - tcr;
	}
	RTC_TCR = ((interval - 1) << 8) | tcr;
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
          int adjust = 100;
          rtc_compensate(adjust);
        
        break;
    }
    // big-arr
    case 1:
    {
          int adjust = 255;
          rtc_compensate(adjust);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adjust = 10;
          rtc_compensate(adjust);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
