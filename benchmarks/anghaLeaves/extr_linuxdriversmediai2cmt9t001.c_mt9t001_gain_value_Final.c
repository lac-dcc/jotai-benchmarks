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
       1            big-arr-10x\n\
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
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static u16 mt9t001_gain_value(s32 *gain)
{
	/* Gain is controlled by 2 analog stages and a digital stage. Valid
	 * values for the 3 stages are
	 *
	 * Stage		Min	Max	Step
	 * ------------------------------------------
	 * First analog stage	x1	x2	1
	 * Second analog stage	x1	x4	0.125
	 * Digital stage	x1	x16	0.125
	 *
	 * To minimize noise, the gain stages should be used in the second
	 * analog stage, first analog stage, digital stage order. Gain from a
	 * previous stage should be pushed to its maximum value before the next
	 * stage is used.
	 */
	if (*gain <= 32)
		return *gain;

	if (*gain <= 64) {
		*gain &= ~1;
		return (1 << 6) | (*gain >> 1);
	}

	*gain &= ~7;
	return ((*gain - 64) << 5) | (1 << 6) | 32;
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
          int _len_gain0 = 1;
          int * gain = (int *) malloc(_len_gain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gain0; _i0++) {
            gain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt9t001_gain_value(gain);
          printf("%d\n", benchRet); 
          free(gain);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_gain0 = 100;
          int * gain = (int *) malloc(_len_gain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gain0; _i0++) {
            gain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt9t001_gain_value(gain);
          printf("%d\n", benchRet); 
          free(gain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
