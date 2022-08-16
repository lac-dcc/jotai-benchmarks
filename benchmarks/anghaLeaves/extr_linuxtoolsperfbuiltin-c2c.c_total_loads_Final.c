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
typedef  scalar_t__ uint64_t ;
struct c2c_stats {scalar_t__ lcl_hitm; scalar_t__ ld_llchit; scalar_t__ ld_l2hit; scalar_t__ ld_l1hit; scalar_t__ ld_fbhit; scalar_t__ rmt_hit; scalar_t__ rmt_hitm; scalar_t__ rmt_dram; scalar_t__ lcl_dram; } ;

/* Variables and functions */

__attribute__((used)) static uint64_t total_loads(struct c2c_stats *stats)
{
	uint64_t lclmiss, ldcnt;

	lclmiss  = stats->lcl_dram +
		   stats->rmt_dram +
		   stats->rmt_hitm +
		   stats->rmt_hit;

	ldcnt    = lclmiss +
		   stats->ld_fbhit +
		   stats->ld_l1hit +
		   stats->ld_l2hit +
		   stats->ld_llchit +
		   stats->lcl_hitm;

	return ldcnt;
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
          int _len_stats0 = 1;
          struct c2c_stats * stats = (struct c2c_stats *) malloc(_len_stats0*sizeof(struct c2c_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].lcl_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ld_llchit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ld_l2hit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ld_l1hit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].ld_fbhit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rmt_hit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rmt_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rmt_dram = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].lcl_dram = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = total_loads(stats);
          printf("%ld\n", benchRet); 
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
