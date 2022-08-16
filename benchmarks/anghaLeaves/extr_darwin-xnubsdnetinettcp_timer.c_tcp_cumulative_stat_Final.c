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
typedef  scalar_t__ u_int32_t ;
typedef  scalar_t__ int32_t ;

/* Variables and functions */

__attribute__((used)) static inline void
tcp_cumulative_stat(u_int32_t cur, u_int32_t *prev, u_int32_t *dest)
{
	/* handle wrap around */
	int32_t diff = (int32_t) (cur - *prev);
	if (diff > 0)
		*dest = diff;
	else
		*dest = 0;
	*prev = cur;
	return;
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
          long cur = 100;
          int _len_prev0 = 1;
          long * prev = (long *) malloc(_len_prev0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          long * dest = (long *) malloc(_len_dest0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_cumulative_stat(cur,prev,dest);
          free(prev);
          free(dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
