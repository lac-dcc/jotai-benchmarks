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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef  TYPE_1__ tv ;

/* Variables and functions */

__attribute__((used)) static int timeval_subtract(tv *result, tv *end, tv *begin) {
	// Perform the carry for the later subtraction by updating Y
	if (end->tv_usec < begin->tv_usec) {
		int nsec = (begin->tv_usec - end->tv_usec) / 1000000 + 1;
		begin->tv_usec -= 1000000 * nsec;
		begin->tv_sec += nsec;
	}
	if (end->tv_usec - begin->tv_usec > 1000000) {
		int nsec = (end->tv_usec - begin->tv_usec) / 1000000;
		begin->tv_usec += 1000000 * nsec;
		begin->tv_sec -= nsec;
	}

	// Compute the time remaining to wait. 'tv_usec' is certainly positive.
	result->tv_sec = end->tv_sec - begin->tv_sec;
	result->tv_usec = end->tv_usec - begin->tv_usec;

	// Return 1 if result is negative
	return end->tv_sec < begin->tv_sec;
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
          int _len_result0 = 1;
          struct TYPE_5__ * result = (struct TYPE_5__ *) malloc(_len_result0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          struct TYPE_5__ * end = (struct TYPE_5__ *) malloc(_len_end0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        end[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_begin0 = 1;
          struct TYPE_5__ * begin = (struct TYPE_5__ *) malloc(_len_begin0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_begin0; _i0++) {
            begin[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        begin[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = timeval_subtract(result,end,begin);
          printf("%d\n", benchRet); 
          free(result);
          free(end);
          free(begin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
