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
struct TYPE_2__ {scalar_t__ nblocks; } ;
struct nilfs_segment_buffer {scalar_t__ sb_pseg_start; scalar_t__ sb_fseg_end; scalar_t__ sb_rest_blocks; TYPE_1__ sb_sum; int /*<<< orphan*/  sb_fseg_start; int /*<<< orphan*/  sb_segnum; } ;

/* Variables and functions */

void nilfs_segbuf_map_cont(struct nilfs_segment_buffer *segbuf,
			   struct nilfs_segment_buffer *prev)
{
	segbuf->sb_segnum = prev->sb_segnum;
	segbuf->sb_fseg_start = prev->sb_fseg_start;
	segbuf->sb_fseg_end = prev->sb_fseg_end;
	segbuf->sb_pseg_start = prev->sb_pseg_start + prev->sb_sum.nblocks;
	segbuf->sb_rest_blocks =
		segbuf->sb_fseg_end - segbuf->sb_pseg_start + 1;
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
          int _len_segbuf0 = 1;
          struct nilfs_segment_buffer * segbuf = (struct nilfs_segment_buffer *) malloc(_len_segbuf0*sizeof(struct nilfs_segment_buffer));
          for(int _i0 = 0; _i0 < _len_segbuf0; _i0++) {
            segbuf[_i0].sb_pseg_start = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_fseg_end = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_rest_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_sum.nblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_fseg_start = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_segnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev0 = 1;
          struct nilfs_segment_buffer * prev = (struct nilfs_segment_buffer *) malloc(_len_prev0*sizeof(struct nilfs_segment_buffer));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].sb_pseg_start = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].sb_fseg_end = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].sb_rest_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].sb_sum.nblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].sb_fseg_start = ((-2 * (next_i()%2)) + 1) * next_i();
        prev[_i0].sb_segnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nilfs_segbuf_map_cont(segbuf,prev);
          free(segbuf);
          free(prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
