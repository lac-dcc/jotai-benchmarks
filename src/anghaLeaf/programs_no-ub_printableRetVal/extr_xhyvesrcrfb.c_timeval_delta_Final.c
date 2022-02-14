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
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef  scalar_t__ int64_t ;

/* Variables and functions */

__attribute__((used)) static int64_t
timeval_delta(struct timeval *prev, struct timeval *now)
{
	int64_t n1, n2;
	n1 = now->tv_sec * 1000000 + now->tv_usec;
	n2 = prev->tv_sec * 1000000 + prev->tv_usec;
	return (n1 - n2);
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
          int _len_prev0 = 1;
          struct timeval * prev = (struct timeval *) malloc(_len_prev0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev->tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        prev->tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_now0 = 1;
          struct timeval * now = (struct timeval *) malloc(_len_now0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_now0; _i0++) {
            now->tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        now->tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = timeval_delta(prev,now);
          printf("%ld\n", benchRet); 
          free(prev);
          free(now);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
