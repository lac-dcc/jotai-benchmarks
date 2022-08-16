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
struct the_nilfs {int /*<<< orphan*/  ns_ctime; int /*<<< orphan*/  ns_seg_seq; scalar_t__ ns_pseg_offset; int /*<<< orphan*/  ns_nextnum; int /*<<< orphan*/  ns_segnum; } ;
struct TYPE_2__ {int /*<<< orphan*/  ctime; int /*<<< orphan*/  seg_seq; scalar_t__ nblocks; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; scalar_t__ sb_fseg_start; scalar_t__ sb_pseg_start; int /*<<< orphan*/  sb_nextnum; int /*<<< orphan*/  sb_segnum; } ;

/* Variables and functions */

__attribute__((used)) static void nilfs_set_next_segment(struct the_nilfs *nilfs,
				   struct nilfs_segment_buffer *segbuf)
{
	nilfs->ns_segnum = segbuf->sb_segnum;
	nilfs->ns_nextnum = segbuf->sb_nextnum;
	nilfs->ns_pseg_offset = segbuf->sb_pseg_start - segbuf->sb_fseg_start
		+ segbuf->sb_sum.nblocks;
	nilfs->ns_seg_seq = segbuf->sb_sum.seg_seq;
	nilfs->ns_ctime = segbuf->sb_sum.ctime;
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
          int _len_nilfs0 = 1;
          struct the_nilfs * nilfs = (struct the_nilfs *) malloc(_len_nilfs0*sizeof(struct the_nilfs));
          for(int _i0 = 0; _i0 < _len_nilfs0; _i0++) {
            nilfs[_i0].ns_ctime = ((-2 * (next_i()%2)) + 1) * next_i();
        nilfs[_i0].ns_seg_seq = ((-2 * (next_i()%2)) + 1) * next_i();
        nilfs[_i0].ns_pseg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        nilfs[_i0].ns_nextnum = ((-2 * (next_i()%2)) + 1) * next_i();
        nilfs[_i0].ns_segnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_segbuf0 = 1;
          struct nilfs_segment_buffer * segbuf = (struct nilfs_segment_buffer *) malloc(_len_segbuf0*sizeof(struct nilfs_segment_buffer));
          for(int _i0 = 0; _i0 < _len_segbuf0; _i0++) {
            segbuf[_i0].sb_sum.ctime = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_sum.seg_seq = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_sum.nblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_fseg_start = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_pseg_start = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_nextnum = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_segnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nilfs_set_next_segment(nilfs,segbuf);
          free(nilfs);
          free(segbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
