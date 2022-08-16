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
struct dm_bio_prison_v2 {int dummy; } ;
struct dm_bio_prison_cell_v2 {unsigned int exclusive_level; scalar_t__ shared_count; int /*<<< orphan*/  exclusive_lock; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int __promote(struct dm_bio_prison_v2 *prison,
		     struct dm_bio_prison_cell_v2 *cell,
		     unsigned new_lock_level)
{
	if (!cell->exclusive_lock)
		return -EINVAL;

	cell->exclusive_level = new_lock_level;
	return cell->shared_count > 0;
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
          unsigned int new_lock_level = 100;
          int _len_prison0 = 1;
          struct dm_bio_prison_v2 * prison = (struct dm_bio_prison_v2 *) malloc(_len_prison0*sizeof(struct dm_bio_prison_v2));
          for(int _i0 = 0; _i0 < _len_prison0; _i0++) {
            prison[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cell0 = 1;
          struct dm_bio_prison_cell_v2 * cell = (struct dm_bio_prison_cell_v2 *) malloc(_len_cell0*sizeof(struct dm_bio_prison_cell_v2));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
            cell[_i0].exclusive_level = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].shared_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].exclusive_lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __promote(prison,cell,new_lock_level);
          printf("%d\n", benchRet); 
          free(prison);
          free(cell);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
