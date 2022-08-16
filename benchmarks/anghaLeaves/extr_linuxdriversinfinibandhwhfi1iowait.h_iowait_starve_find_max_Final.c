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
typedef  int /*<<< orphan*/  uint ;
typedef  scalar_t__ u8 ;
struct iowait {scalar_t__ starved_cnt; } ;

/* Variables and functions */

__attribute__((used)) static inline void iowait_starve_find_max(struct iowait *w, u8 *max,
					  uint idx, uint *max_idx)
{
	if (w->starved_cnt > *max) {
		*max = w->starved_cnt;
		*max_idx = idx;
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
          int idx = 100;
          int _len_w0 = 1;
          struct iowait * w = (struct iowait *) malloc(_len_w0*sizeof(struct iowait));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].starved_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 1;
          long * max = (long *) malloc(_len_max0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_idx0 = 1;
          int * max_idx = (int *) malloc(_len_max_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_idx0; _i0++) {
            max_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iowait_starve_find_max(w,max,idx,max_idx);
          free(w);
          free(max);
          free(max_idx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
