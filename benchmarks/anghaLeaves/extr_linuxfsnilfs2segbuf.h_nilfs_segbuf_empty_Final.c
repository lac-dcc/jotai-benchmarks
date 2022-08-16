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
struct TYPE_2__ {scalar_t__ nblocks; scalar_t__ nsumblk; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; } ;

/* Variables and functions */

__attribute__((used)) static inline int nilfs_segbuf_empty(struct nilfs_segment_buffer *segbuf)
{
	return segbuf->sb_sum.nblocks == segbuf->sb_sum.nsumblk;
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
            segbuf[_i0].sb_sum.nblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        segbuf[_i0].sb_sum.nsumblk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nilfs_segbuf_empty(segbuf);
          printf("%d\n", benchRet); 
          free(segbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
