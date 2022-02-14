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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void find_aspect_ratio(u32 width, u32 height,
			       u32 *num, u32 *denom)
{
	if (!(height % 3) && ((height * 4 / 3) == width)) {
		*num = 4;
		*denom = 3;
	} else if (!(height % 9) && ((height * 16 / 9) == width)) {
		*num = 16;
		*denom = 9;
	} else if (!(height % 10) && ((height * 16 / 10) == width)) {
		*num = 16;
		*denom = 10;
	} else if (!(height % 4) && ((height * 5 / 4) == width)) {
		*num = 5;
		*denom = 4;
	} else if (!(height % 9) && ((height * 15 / 9) == width)) {
		*num = 15;
		*denom = 9;
	} else { /* default to 16:9 */
		*num = 16;
		*denom = 9;
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

    // big-arr
    case 0:
    {
          int width = 255;
          int height = 255;
          int _len_num0 = 65025;
          int * num = (int *) malloc(_len_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_denom0 = 65025;
          int * denom = (int *) malloc(_len_denom0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_denom0; _i0++) {
            denom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          find_aspect_ratio(width,height,num,denom);
          free(num);
          free(denom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
