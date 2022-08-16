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

/* Variables and functions */
 int EINVAL ; 
 int timeout ; 
 int timeoutW ; 

__attribute__((used)) static int wdt_set_timeout(int t)
{
	unsigned int tmrval;

	/*
	 * Convert seconds to watchdog counter time units, rounding up.
	 * On PCM-5335 watchdog units are 30 seconds/step with 15 sec startup
	 * value. This information is supplied in the PCM-5335 manual and was
	 * checked by me on a real board. This is a bit strange because W83977f
	 * datasheet says counter unit is in minutes!
	 */
	if (t < 15)
		return -EINVAL;

	tmrval = ((t + 15) + 29) / 30;

	if (tmrval > 255)
		return -EINVAL;

	/*
	 * timeout is the timeout in seconds,
	 * timeoutW is the timeout in watchdog counter units.
	 */
	timeoutW = tmrval;
	timeout = (timeoutW * 30) - 15;
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
          int t = 100;
          int benchRet = wdt_set_timeout(t);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int t = 255;
          int benchRet = wdt_set_timeout(t);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int t = 10;
          int benchRet = wdt_set_timeout(t);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
