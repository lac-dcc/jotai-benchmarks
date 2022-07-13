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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
 int EINVAL ; 
 int TIMECODES ; 
 int* time_codes ; 

__attribute__((used)) static int choose_times(int msec, int *c1p, int *c2p)
{
	/*
	 * Choose two timecodes which add to 'msec' as near as
	 * possible.  The first returned is the 'on' or 'off' time.
	 * The second is to be used as a 'fade-on' or 'fade-off' time.
	 * If 'msec' is even, the first will not be smaller than the
	 * second.  If 'msec' is odd, the first will not be larger
	 * than the second.
	 * If we cannot get a sum within 1/8 of 'msec' fail with
	 * -EINVAL, otherwise return the sum that was achieved, plus 1
	 * if the first is smaller.
	 * If two possibilities are equally good (e.g. 512+0,
	 * 256+256), choose the first pair so there is more
	 * change-time visible (i.e. it is softer).
	 */
	int c1, c2;
	int tmax = msec * 9 / 8;
	int tmin = msec * 7 / 8;
	int diff = 65536;

	/* We start at '1' to ensure we never even think of choosing a
	 * total time of '0'.
	 */
	for (c1 = 1; c1 < TIMECODES; c1++) {
		int t = time_codes[c1];
		if (t*2 < tmin)
			continue;
		if (t > tmax)
			break;
		for (c2 = 0; c2 <= c1; c2++) {
			int tt = t + time_codes[c2];
			int d;
			if (tt < tmin)
				continue;
			if (tt > tmax)
				break;
			/* This works! */
			d = abs(msec - tt);
			if (d >= diff)
				continue;
			/* Best yet */
			*c1p = c1;
			*c2p = c2;
			diff = d;
			if (d == 0)
				return msec;
		}
	}
	if (diff < 65536) {
		int actual;
		if (msec & 1) {
			c1 = *c2p;
			*c2p = *c1p;
			*c1p = c1;
		}
		actual = time_codes[*c1p] + time_codes[*c2p];
		if (*c1p < *c2p)
			return actual + 1;
		else
			return actual;
	}
	/* No close match */
	return -EINVAL;
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
          int msec = 100;
          int _len_c1p0 = 1;
          int * c1p = (int *) malloc(_len_c1p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c1p0; _i0++) {
            c1p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c2p0 = 1;
          int * c2p = (int *) malloc(_len_c2p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c2p0; _i0++) {
            c2p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = choose_times(msec,c1p,c2p);
          printf("%d\n", benchRet); 
          free(c1p);
          free(c2p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int msec = 255;
          int _len_c1p0 = 65025;
          int * c1p = (int *) malloc(_len_c1p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c1p0; _i0++) {
            c1p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c2p0 = 65025;
          int * c2p = (int *) malloc(_len_c2p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c2p0; _i0++) {
            c2p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = choose_times(msec,c1p,c2p);
          printf("%d\n", benchRet); 
          free(c1p);
          free(c2p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int msec = 10;
          int _len_c1p0 = 100;
          int * c1p = (int *) malloc(_len_c1p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c1p0; _i0++) {
            c1p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c2p0 = 100;
          int * c2p = (int *) malloc(_len_c2p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c2p0; _i0++) {
            c2p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = choose_times(msec,c1p,c2p);
          printf("%d\n", benchRet); 
          free(c1p);
          free(c2p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
