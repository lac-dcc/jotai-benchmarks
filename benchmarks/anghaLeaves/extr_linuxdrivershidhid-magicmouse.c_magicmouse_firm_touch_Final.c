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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct magicmouse_sc {int ntouches; int* tracking_ids; TYPE_1__* touches; } ;
struct TYPE_2__ {int size; } ;

/* Variables and functions */

__attribute__((used)) static int magicmouse_firm_touch(struct magicmouse_sc *msc)
{
	int touch = -1;
	int ii;

	/* If there is only one "firm" touch, set touch to its
	 * tracking ID.
	 */
	for (ii = 0; ii < msc->ntouches; ii++) {
		int idx = msc->tracking_ids[ii];
		if (msc->touches[idx].size < 8) {
			/* Ignore this touch. */
		} else if (touch >= 0) {
			touch = -1;
			break;
		} else {
			touch = idx;
		}
	}

	return touch;
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
          int _len_msc0 = 1;
          struct magicmouse_sc * msc = (struct magicmouse_sc *) malloc(_len_msc0*sizeof(struct magicmouse_sc));
          for(int _i0 = 0; _i0 < _len_msc0; _i0++) {
            msc[_i0].ntouches = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msc__i0__tracking_ids0 = 1;
          msc[_i0].tracking_ids = (int *) malloc(_len_msc__i0__tracking_ids0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msc__i0__tracking_ids0; _j0++) {
            msc[_i0].tracking_ids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msc__i0__touches0 = 1;
          msc[_i0].touches = (struct TYPE_2__ *) malloc(_len_msc__i0__touches0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_msc__i0__touches0; _j0++) {
            msc[_i0].touches->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = magicmouse_firm_touch(msc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_msc0; _aux++) {
          free(msc[_aux].tracking_ids);
          }
          for(int _aux = 0; _aux < _len_msc0; _aux++) {
          free(msc[_aux].touches);
          }
          free(msc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
