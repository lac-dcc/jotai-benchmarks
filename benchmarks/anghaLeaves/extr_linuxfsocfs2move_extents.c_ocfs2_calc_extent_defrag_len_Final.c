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
typedef  scalar_t__ u32 ;

/* Variables and functions */

__attribute__((used)) static void ocfs2_calc_extent_defrag_len(u32 *alloc_size, u32 *len_defraged,
					 u32 threshold, int *skip)
{
	if ((*alloc_size + *len_defraged) < threshold) {
		/*
		 * proceed defragmentation until we meet the thresh
		 */
		*len_defraged += *alloc_size;
	} else if (*len_defraged == 0) {
		/*
		 * XXX: skip a large extent.
		 */
		*skip = 1;
	} else {
		/*
		 * split this extent to coalesce with former pieces as
		 * to reach the threshold.
		 *
		 * we're done here with one cycle of defragmentation
		 * in a size of 'thresh', resetting 'len_defraged'
		 * forces a new defragmentation.
		 */
		*alloc_size = threshold - *len_defraged;
		*len_defraged = 0;
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
          long threshold = 100;
          int _len_alloc_size0 = 1;
          long * alloc_size = (long *) malloc(_len_alloc_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_alloc_size0; _i0++) {
            alloc_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len_defraged0 = 1;
          long * len_defraged = (long *) malloc(_len_len_defraged0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_len_defraged0; _i0++) {
            len_defraged[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skip0 = 1;
          int * skip = (int *) malloc(_len_skip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_skip0; _i0++) {
            skip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocfs2_calc_extent_defrag_len(alloc_size,len_defraged,threshold,skip);
          free(alloc_size);
          free(len_defraged);
          free(skip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
