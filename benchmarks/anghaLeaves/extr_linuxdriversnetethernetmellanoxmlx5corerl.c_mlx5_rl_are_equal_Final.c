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
struct mlx5_rate_limit {scalar_t__ rate; scalar_t__ max_burst_sz; scalar_t__ typical_pkt_sz; } ;

/* Variables and functions */

bool mlx5_rl_are_equal(struct mlx5_rate_limit *rl_0,
		       struct mlx5_rate_limit *rl_1)
{
	return ((rl_0->rate == rl_1->rate) &&
		(rl_0->max_burst_sz == rl_1->max_burst_sz) &&
		(rl_0->typical_pkt_sz == rl_1->typical_pkt_sz));
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
          int _len_rl_00 = 1;
          struct mlx5_rate_limit * rl_0 = (struct mlx5_rate_limit *) malloc(_len_rl_00*sizeof(struct mlx5_rate_limit));
          for(int _i0 = 0; _i0 < _len_rl_00; _i0++) {
            rl_0[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
        rl_0[_i0].max_burst_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        rl_0[_i0].typical_pkt_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rl_10 = 1;
          struct mlx5_rate_limit * rl_1 = (struct mlx5_rate_limit *) malloc(_len_rl_10*sizeof(struct mlx5_rate_limit));
          for(int _i0 = 0; _i0 < _len_rl_10; _i0++) {
            rl_1[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
        rl_1[_i0].max_burst_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        rl_1[_i0].typical_pkt_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5_rl_are_equal(rl_0,rl_1);
          printf("%d\n", benchRet); 
          free(rl_0);
          free(rl_1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
