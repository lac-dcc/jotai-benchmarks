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
struct blk_rq_stat {unsigned long long min; scalar_t__ batch; scalar_t__ mean; scalar_t__ nr_samples; scalar_t__ max; } ;

/* Variables and functions */

void blk_rq_stat_init(struct blk_rq_stat *stat)
{
	stat->min = -1ULL;
	stat->max = stat->nr_samples = stat->mean = 0;
	stat->batch = 0;
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
          int _len_stat0 = 1;
          struct blk_rq_stat * stat = (struct blk_rq_stat *) malloc(_len_stat0*sizeof(struct blk_rq_stat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
            stat[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].batch = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].mean = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].nr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_rq_stat_init(stat);
          free(stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
