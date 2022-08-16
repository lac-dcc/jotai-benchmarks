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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct nilfs_sc_info {size_t sc_segbuf_nblocks; size_t sc_nblk_this_inc; TYPE_2__* sc_curseg; } ;
struct TYPE_3__ {size_t nblocks; } ;
struct TYPE_4__ {TYPE_1__ sb_sum; } ;

/* Variables and functions */

__attribute__((used)) static size_t nilfs_segctor_buffer_rest(struct nilfs_sc_info *sci)
{
	/* Remaining number of blocks within segment buffer */
	return sci->sc_segbuf_nblocks -
		(sci->sc_nblk_this_inc + sci->sc_curseg->sb_sum.nblocks);
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
          int _len_sci0 = 1;
          struct nilfs_sc_info * sci = (struct nilfs_sc_info *) malloc(_len_sci0*sizeof(struct nilfs_sc_info));
          for(int _i0 = 0; _i0 < _len_sci0; _i0++) {
            sci[_i0].sc_segbuf_nblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        sci[_i0].sc_nblk_this_inc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sci__i0__sc_curseg0 = 1;
          sci[_i0].sc_curseg = (struct TYPE_4__ *) malloc(_len_sci__i0__sc_curseg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sci__i0__sc_curseg0; _j0++) {
            sci[_i0].sc_curseg->sb_sum.nblocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = nilfs_segctor_buffer_rest(sci);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_sci0; _aux++) {
          free(sci[_aux].sc_curseg);
          }
          free(sci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
