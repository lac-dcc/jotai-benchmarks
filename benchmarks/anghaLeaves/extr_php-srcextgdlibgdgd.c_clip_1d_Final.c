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

/* Type definitions */

/* Variables and functions */

__attribute__((used)) static int clip_1d(int *x0, int *y0, int *x1, int *y1, int maxdim) {
	double m;      /* gradient of line */

	if (*x0 < 0) {  /* start of line is left of window */
		if(*x1 < 0) { /* as is the end, so the line never cuts the window */
			return 0;
		}
		m = (*y1 - *y0)/(double)(*x1 - *x0); /* calculate the slope of the line */
		/* adjust x0 to be on the left boundary (ie to be zero), and y0 to match */
		*y0 -= (int)(m * *x0);
		*x0 = 0;
		/* now, perhaps, adjust the far end of the line as well */
		if (*x1 > maxdim) {
			*y1 += (int)(m * (maxdim - *x1));
			*x1 = maxdim;
		}
		return 1;
	}
	if (*x0 > maxdim) { /* start of line is right of window - complement of above */
		if (*x1 > maxdim) { /* as is the end, so the line misses the window */
			return 0;
		}
		m = (*y1 - *y0)/(double)(*x1 - *x0);  /* calculate the slope of the line */
		*y0 += (int)(m * (maxdim - *x0)); /* adjust so point is on the right boundary */
		*x0 = maxdim;
		/* now, perhaps, adjust the end of the line */
		if (*x1 < 0) {
			*y1 -= (int)(m * *x1);
			*x1 = 0;
		}
		return 1;
	}
	/* the final case - the start of the line is inside the window */
	if (*x1 > maxdim) { /* other end is outside to the right */
		m = (*y1 - *y0)/(double)(*x1 - *x0);  /* calculate the slope of the line */
		*y1 += (int)(m * (maxdim - *x1));
		*x1 = maxdim;
		return 1;
	}
	if (*x1 < 0) { /* other end is outside to the left */
		m = (*y1 - *y0)/(double)(*x1 - *x0);  /* calculate the slope of the line */
		*y1 -= (int)(m * *x1);
		*x1 = 0;
		return 1;
	}
	/* only get here if both points are inside the window */
	return 1;
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
          int maxdim = 100;
          int _len_x00 = 1;
          int * x0 = (int *) malloc(_len_x00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x00; _i0++) {
            x0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y00 = 1;
          int * y0 = (int *) malloc(_len_y00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y00; _i0++) {
            y0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x10 = 1;
          int * x1 = (int *) malloc(_len_x10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x10; _i0++) {
            x1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y10 = 1;
          int * y1 = (int *) malloc(_len_y10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y10; _i0++) {
            y1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clip_1d(x0,y0,x1,y1,maxdim);
          printf("%d\n", benchRet); 
          free(x0);
          free(y0);
          free(x1);
          free(y1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
