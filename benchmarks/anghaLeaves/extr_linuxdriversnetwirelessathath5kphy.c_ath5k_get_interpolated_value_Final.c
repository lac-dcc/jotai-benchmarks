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
typedef  scalar_t__ s16 ;

/* Variables and functions */

__attribute__((used)) static s16
ath5k_get_interpolated_value(s16 target, s16 x_left, s16 x_right,
					s16 y_left, s16 y_right)
{
	s16 ratio, result;

	/* Avoid divide by zero and skip interpolation
	 * if we have the same point */
	if ((x_left == x_right) || (y_left == y_right))
		return y_left;

	/*
	 * Since we use ints and not fps, we need to scale up in
	 * order to get a sane ratio value (or else we 'll eg. get
	 * always 1 instead of 1.25, 1.75 etc). We scale up by 100
	 * to have some accuracy both for 0.5 and 0.25 steps.
	 */
	ratio = ((100 * y_right - 100 * y_left) / (x_right - x_left));

	/* Now scale down to be in range */
	result = y_left + (ratio * (target - x_left) / 100);

	return result;
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
          long target = 100;
          long x_left = 100;
          long x_right = 100;
          long y_left = 100;
          long y_right = 100;
          long benchRet = ath5k_get_interpolated_value(target,x_left,x_right,y_left,y_right);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long target = 255;
          long x_left = 255;
          long x_right = 255;
          long y_left = 255;
          long y_right = 255;
          long benchRet = ath5k_get_interpolated_value(target,x_left,x_right,y_left,y_right);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long target = 10;
          long x_left = 10;
          long x_right = 10;
          long y_left = 10;
          long y_right = 10;
          long benchRet = ath5k_get_interpolated_value(target,x_left,x_right,y_left,y_right);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
