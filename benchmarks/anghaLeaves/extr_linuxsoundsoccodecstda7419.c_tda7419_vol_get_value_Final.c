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

__attribute__((used)) static inline int tda7419_vol_get_value(int val, unsigned int mask,
					int min, int thresh,
					unsigned int invert)
{
	val &= mask;
	if (val < thresh) {
		if (invert)
			val = 0 - val;
	} else if (val > thresh) {
		if (invert)
			val = val - thresh;
		else
			val = thresh - val;
	}

	if (val < min)
		val = min;

	return val;
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
          int val = 100;
          unsigned int mask = 100;
          int min = 100;
          int thresh = 100;
          unsigned int invert = 100;
          int benchRet = tda7419_vol_get_value(val,mask,min,thresh,invert);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int val = 255;
          unsigned int mask = 255;
          int min = 255;
          int thresh = 255;
          unsigned int invert = 255;
          int benchRet = tda7419_vol_get_value(val,mask,min,thresh,invert);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int val = 10;
          unsigned int mask = 10;
          int min = 10;
          int thresh = 10;
          unsigned int invert = 10;
          int benchRet = tda7419_vol_get_value(val,mask,min,thresh,invert);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
