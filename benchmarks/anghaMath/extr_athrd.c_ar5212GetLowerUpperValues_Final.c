// ========================================================================= //

// includes
#include <math.h>
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
typedef  scalar_t__ u_int32_t ;
typedef  int u_int16_t ;

/* Variables and functions */
 int EEP_DELTA ; 
 int EEP_SCALE ; 

__attribute__((used)) static void
ar5212GetLowerUpperValues(u_int16_t v, u_int16_t *lp, u_int16_t listSize,
                          u_int16_t *vlo, u_int16_t *vhi)
{
	u_int32_t target = v * EEP_SCALE;
	u_int16_t *ep = lp+listSize;

	/*
	 * Check first and last elements for out-of-bounds conditions.
	 */
	if (target < (u_int32_t)(lp[0] * EEP_SCALE - EEP_DELTA)) {
		*vlo = *vhi = lp[0];
		return;
	}
	if (target > (u_int32_t)(ep[-1] * EEP_SCALE + EEP_DELTA)) {
		*vlo = *vhi = ep[-1];
		return;
	}

	/* look for value being near or between 2 values in list */
	for (; lp < ep; lp++) {
		/*
		 * If value is close to the current value of the list
		 * then target is not between values, it is one of the values
		 */
		if (abs(lp[0] * EEP_SCALE - target) < EEP_DELTA) {
			*vlo = *vhi = lp[0];
			return;
		}
		/*
		 * Look for value being between current value and next value
		 * if so return these 2 values
		 */
		if (target < (u_int32_t)(lp[1] * EEP_SCALE - EEP_DELTA)) {
			*vlo = lp[0];
			*vhi = lp[1];
			return;
		}
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
          int v = 255;
          int listSize = 255;
          int _len_lp0 = 65025;
          int * lp = (int *) malloc(_len_lp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vlo0 = 65025;
          int * vlo = (int *) malloc(_len_vlo0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vlo0; _i0++) {
            vlo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vhi0 = 65025;
          int * vhi = (int *) malloc(_len_vhi0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vhi0; _i0++) {
            vhi[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar5212GetLowerUpperValues(v,lp,listSize,vlo,vhi);
          free(lp);
          free(vlo);
          free(vhi);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int v = 10;
          int listSize = 10;
          int _len_lp0 = 100;
          int * lp = (int *) malloc(_len_lp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vlo0 = 100;
          int * vlo = (int *) malloc(_len_vlo0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vlo0; _i0++) {
            vlo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vhi0 = 100;
          int * vhi = (int *) malloc(_len_vhi0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vhi0; _i0++) {
            vhi[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar5212GetLowerUpperValues(v,lp,listSize,vlo,vhi);
          free(lp);
          free(vlo);
          free(vhi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
