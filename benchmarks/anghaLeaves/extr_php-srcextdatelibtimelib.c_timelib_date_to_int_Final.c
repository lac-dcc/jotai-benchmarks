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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ sse; } ;
typedef  TYPE_1__ timelib_time ;
typedef  scalar_t__ timelib_sll ;
typedef  int /*<<< orphan*/  timelib_long ;

/* Variables and functions */
 scalar_t__ TIMELIB_LONG_MAX ; 
 scalar_t__ TIMELIB_LONG_MIN ; 

timelib_long timelib_date_to_int(timelib_time *d, int *error)
{
	timelib_sll ts;

	ts = d->sse;

	if (ts < TIMELIB_LONG_MIN || ts > TIMELIB_LONG_MAX) {
		if (error) {
			*error = 1;
		}
		return 0;
	}
	if (error) {
		*error = 0;
	}
	return (timelib_long) d->sse;
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
          int _len_d0 = 1;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].sse = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_error0 = 1;
          int * error = (int *) malloc(_len_error0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = timelib_date_to_int(d,error);
          printf("%d\n", benchRet); 
          free(d);
          free(error);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
