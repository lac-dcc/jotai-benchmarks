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
       3            empty\n\
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 33
          // ------------------------------- 
          // static_instructions_O3 : 33
          // dynamic_instructions_O3 : 33
          // ------------------------------- 
          // static_instructions_Ofast : 33
          // dynamic_instructions_Ofast : 33
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int adjust = 100;
        
          rtc_compensate(adjust);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 1433
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 789
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 514
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 514
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 514
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 787
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 787
          // ------------------------------- 

          int adjust = 255;
        
          rtc_compensate(adjust);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 33
          // ------------------------------- 
          // static_instructions_O3 : 33
          // dynamic_instructions_O3 : 33
          // ------------------------------- 
          // static_instructions_Ofast : 33
          // dynamic_instructions_Ofast : 33
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int adjust = 10;
        
          rtc_compensate(adjust);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 36
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 36
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int adjust = ((-2 * (next_i()%2)) + 1) * next_i();
        
          rtc_compensate(adjust);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
