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
struct dm_cell_key {scalar_t__ virtual; scalar_t__ dev; scalar_t__ block_end; scalar_t__ block_begin; } ;

/* Variables and functions */

__attribute__((used)) static int cmp_keys(struct dm_cell_key *lhs,
		    struct dm_cell_key *rhs)
{
	if (lhs->virtual < rhs->virtual)
		return -1;

	if (lhs->virtual > rhs->virtual)
		return 1;

	if (lhs->dev < rhs->dev)
		return -1;

	if (lhs->dev > rhs->dev)
		return 1;

	if (lhs->block_end <= rhs->block_begin)
		return -1;

	if (lhs->block_begin >= rhs->block_end)
		return 1;

	return 0;
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
          int _len_lhs0 = 1;
          struct dm_cell_key * lhs = (struct dm_cell_key *) malloc(_len_lhs0*sizeof(struct dm_cell_key));
          for(int _i0 = 0; _i0 < _len_lhs0; _i0++) {
            lhs->virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        lhs->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        lhs->block_end = ((-2 * (next_i()%2)) + 1) * next_i();
        lhs->block_begin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rhs0 = 1;
          struct dm_cell_key * rhs = (struct dm_cell_key *) malloc(_len_rhs0*sizeof(struct dm_cell_key));
          for(int _i0 = 0; _i0 < _len_rhs0; _i0++) {
            rhs->virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        rhs->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        rhs->block_end = ((-2 * (next_i()%2)) + 1) * next_i();
        rhs->block_begin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_keys(lhs,rhs);
          printf("%d\n", benchRet); 
          free(lhs);
          free(rhs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
