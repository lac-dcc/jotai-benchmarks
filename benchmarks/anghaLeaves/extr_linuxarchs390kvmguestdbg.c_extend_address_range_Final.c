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
typedef  scalar_t__ u64 ;

/* Variables and functions */

__attribute__((used)) static void extend_address_range(u64 *start, u64 *stop, u64 estart, int len)
{
	u64 estop;

	if (len > 0)
		len--;
	else
		len = 0;

	estop = estart + len;

	/* 0-0 range represents "not set" */
	if ((*start == 0) && (*stop == 0)) {
		*start = estart;
		*stop = estop;
	} else if (*start <= *stop) {
		/* increase the existing range */
		if (estart < *start)
			*start = estart;
		if (estop > *stop)
			*stop = estop;
	} else {
		/* "overflowing" interval, whereby *stop > *start */
		if (estart <= *stop) {
			if (estop > *stop)
				*stop = estop;
		} else if (estop > *start) {
			if (estart < *start)
				*start = estart;
		}
		/* minimize the range */
		else if ((estop - *stop) < (*start - estart))
			*stop = estop;
		else
			*start = estart;
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

    // int-bounds
    case 0:
    {
          long estart = 100;
          int len = 100;
          int _len_start0 = 1;
          long * start = (long *) malloc(_len_start0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stop0 = 1;
          long * stop = (long *) malloc(_len_stop0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_stop0; _i0++) {
            stop[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extend_address_range(start,stop,estart,len);
          free(start);
          free(stop);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
