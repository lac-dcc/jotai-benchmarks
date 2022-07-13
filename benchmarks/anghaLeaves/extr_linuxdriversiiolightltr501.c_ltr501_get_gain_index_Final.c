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
       0            big-arr\n\
       1            big-arr-10x\n\
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

/* Type definitions */
struct ltr501_gain {int scale; int uscale; } ;

/* Variables and functions */

__attribute__((used)) static int ltr501_get_gain_index(struct ltr501_gain *gain, int size,
				 int val, int val2)
{
	int i;

	for (i = 0; i < size; i++)
		if (val == gain[i].scale && val2 == gain[i].uscale)
			return i;

	return -1;
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

    // big-arr
    case 0:
    {
          int size = 255;
          int val = 255;
          int val2 = 255;
          int _len_gain0 = 65025;
          struct ltr501_gain * gain = (struct ltr501_gain *) malloc(_len_gain0*sizeof(struct ltr501_gain));
          for(int _i0 = 0; _i0 < _len_gain0; _i0++) {
            gain[_i0].scale = ((-2 * (next_i()%2)) + 1) * next_i();
        gain[_i0].uscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ltr501_get_gain_index(gain,size,val,val2);
          printf("%d\n", benchRet); 
          free(gain);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int size = 10;
          int val = 10;
          int val2 = 10;
          int _len_gain0 = 100;
          struct ltr501_gain * gain = (struct ltr501_gain *) malloc(_len_gain0*sizeof(struct ltr501_gain));
          for(int _i0 = 0; _i0 < _len_gain0; _i0++) {
            gain[_i0].scale = ((-2 * (next_i()%2)) + 1) * next_i();
        gain[_i0].uscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ltr501_get_gain_index(gain,size,val,val2);
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
