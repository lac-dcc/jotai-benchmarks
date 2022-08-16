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
typedef  int u16 ;
typedef  int s16 ;

/* Variables and functions */

__attribute__((used)) static u16 calc_mt9v011_gain(s16 lineargain)
{

	u16 digitalgain = 0;
	u16 analogmult = 0;
	u16 analoginit = 0;

	if (lineargain < 0)
		lineargain = 0;

	/* recommended minimum */
	lineargain += 0x0020;

	if (lineargain > 2047)
		lineargain = 2047;

	if (lineargain > 1023) {
		digitalgain = 3;
		analogmult = 3;
		analoginit = lineargain / 16;
	} else if (lineargain > 511) {
		digitalgain = 1;
		analogmult = 3;
		analoginit = lineargain / 8;
	} else if (lineargain > 255) {
		analogmult = 3;
		analoginit = lineargain / 4;
	} else if (lineargain > 127) {
		analogmult = 1;
		analoginit = lineargain / 2;
	} else
		analoginit = lineargain;

	return analoginit + (analogmult << 7) + (digitalgain << 9);

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
          int lineargain = 100;
          int benchRet = calc_mt9v011_gain(lineargain);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int lineargain = 255;
          int benchRet = calc_mt9v011_gain(lineargain);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lineargain = 10;
          int benchRet = calc_mt9v011_gain(lineargain);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
