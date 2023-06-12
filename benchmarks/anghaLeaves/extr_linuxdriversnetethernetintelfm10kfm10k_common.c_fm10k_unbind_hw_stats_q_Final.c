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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  scalar_t__ u32 ;
struct fm10k_hw_stats_q {scalar_t__ tx_stats_idx; scalar_t__ rx_stats_idx; } ;

/* Variables and functions */

void fm10k_unbind_hw_stats_q(struct fm10k_hw_stats_q *q, u32 idx, u32 count)
{
	u32 i;

	for (i = 0; i < count; i++, idx++, q++) {
		q->rx_stats_idx = 0;
		q->tx_stats_idx = 0;
	}
}

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
          long idx = 255;
        
          long count = 255;
        
          int _len_q0 = 65025;
          struct fm10k_hw_stats_q * q = (struct fm10k_hw_stats_q *) malloc(_len_q0*sizeof(struct fm10k_hw_stats_q));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].tx_stats_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rx_stats_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          fm10k_unbind_hw_stats_q(q,idx,count);
          free(q);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long idx = 10;
        
          long count = 10;
        
          int _len_q0 = 100;
          struct fm10k_hw_stats_q * q = (struct fm10k_hw_stats_q *) malloc(_len_q0*sizeof(struct fm10k_hw_stats_q));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].tx_stats_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rx_stats_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          fm10k_unbind_hw_stats_q(q,idx,count);
          free(q);
        
        break;
    }
    // empty
    case 2:
    {
          long idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_q0 = 1;
          struct fm10k_hw_stats_q * q = (struct fm10k_hw_stats_q *) malloc(_len_q0*sizeof(struct fm10k_hw_stats_q));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].tx_stats_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rx_stats_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          fm10k_unbind_hw_stats_q(q,idx,count);
          free(q);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
