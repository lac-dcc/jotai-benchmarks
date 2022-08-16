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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
typedef  scalar_t__ u16 ;
struct fman_ext_pools {int num_of_pools_used; TYPE_1__* ext_buf_pool; } ;
struct TYPE_2__ {scalar_t__ size; size_t id; } ;

/* Variables and functions */

void fman_sp_set_buf_pools_in_asc_order_of_buf_sizes(struct fman_ext_pools
						     *fm_ext_pools,
						     u8 *ordered_array,
						     u16 *sizes_array)
{
	u16 buf_size = 0;
	int i = 0, j = 0, k = 0;

	/* First we copy the external buffers pools information
	 * to an ordered local array
	 */
	for (i = 0; i < fm_ext_pools->num_of_pools_used; i++) {
		/* get pool size */
		buf_size = fm_ext_pools->ext_buf_pool[i].size;

		/* keep sizes in an array according to poolId
		 * for direct access
		 */
		sizes_array[fm_ext_pools->ext_buf_pool[i].id] = buf_size;

		/* save poolId in an ordered array according to size */
		for (j = 0; j <= i; j++) {
			/* this is the next free place in the array */
			if (j == i)
				ordered_array[i] =
				    fm_ext_pools->ext_buf_pool[i].id;
			else {
				/* find the right place for this poolId */
				if (buf_size < sizes_array[ordered_array[j]]) {
					/* move the pool_ids one place ahead
					 * to make room for this poolId
					 */
					for (k = i; k > j; k--)
						ordered_array[k] =
						    ordered_array[k - 1];

					/* now k==j, this is the place for
					 * the new size
					 */
					ordered_array[k] =
					    fm_ext_pools->ext_buf_pool[i].id;
					break;
				}
			}
		}
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
          int _len_fm_ext_pools0 = 1;
          struct fman_ext_pools * fm_ext_pools = (struct fman_ext_pools *) malloc(_len_fm_ext_pools0*sizeof(struct fman_ext_pools));
          for(int _i0 = 0; _i0 < _len_fm_ext_pools0; _i0++) {
            fm_ext_pools[_i0].num_of_pools_used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fm_ext_pools__i0__ext_buf_pool0 = 1;
          fm_ext_pools[_i0].ext_buf_pool = (struct TYPE_2__ *) malloc(_len_fm_ext_pools__i0__ext_buf_pool0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fm_ext_pools__i0__ext_buf_pool0; _j0++) {
            fm_ext_pools[_i0].ext_buf_pool->size = ((-2 * (next_i()%2)) + 1) * next_i();
        fm_ext_pools[_i0].ext_buf_pool->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ordered_array0 = 1;
          unsigned long * ordered_array = (unsigned long *) malloc(_len_ordered_array0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ordered_array0; _i0++) {
            ordered_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sizes_array0 = 1;
          long * sizes_array = (long *) malloc(_len_sizes_array0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_sizes_array0; _i0++) {
            sizes_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fman_sp_set_buf_pools_in_asc_order_of_buf_sizes(fm_ext_pools,ordered_array,sizes_array);
          for(int _aux = 0; _aux < _len_fm_ext_pools0; _aux++) {
          free(fm_ext_pools[_aux].ext_buf_pool);
          }
          free(fm_ext_pools);
          free(ordered_array);
          free(sizes_array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
