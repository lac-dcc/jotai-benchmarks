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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* c_segment_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_6__ {int /*<<< orphan*/  asked_permission; } ;
struct TYPE_5__ {scalar_t__ c_bytes_used; scalar_t__ c_nextoffset; scalar_t__ c_nextslot; } ;

/* Variables and functions */
 scalar_t__ C_MAJOR_COMPACTION_SIZE_APPROPRIATE ; 
 scalar_t__ C_SEG_OFF_LIMIT ; 
 scalar_t__ C_SLOT_MAX_INDEX ; 
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 TYPE_2__ c_seg_major_compact_stats ; 

boolean_t
c_seg_major_compact_ok(
	c_segment_t c_seg_dst,
	c_segment_t c_seg_src)
{

	c_seg_major_compact_stats.asked_permission++;

	if (c_seg_src->c_bytes_used >= C_MAJOR_COMPACTION_SIZE_APPROPRIATE &&
	    c_seg_dst->c_bytes_used >= C_MAJOR_COMPACTION_SIZE_APPROPRIATE)
		return (FALSE);

	if (c_seg_dst->c_nextoffset >= C_SEG_OFF_LIMIT || c_seg_dst->c_nextslot >= C_SLOT_MAX_INDEX) {
		/*
		 * destination segment is full... can't compact
		 */
		return (FALSE);
	}

	return (TRUE);
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
          int _len_c_seg_dst0 = 1;
          struct TYPE_5__ * c_seg_dst = (struct TYPE_5__ *) malloc(_len_c_seg_dst0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c_seg_dst0; _i0++) {
            c_seg_dst[_i0].c_bytes_used = ((-2 * (next_i()%2)) + 1) * next_i();
        c_seg_dst[_i0].c_nextoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        c_seg_dst[_i0].c_nextslot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c_seg_src0 = 1;
          struct TYPE_5__ * c_seg_src = (struct TYPE_5__ *) malloc(_len_c_seg_src0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c_seg_src0; _i0++) {
            c_seg_src[_i0].c_bytes_used = ((-2 * (next_i()%2)) + 1) * next_i();
        c_seg_src[_i0].c_nextoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        c_seg_src[_i0].c_nextslot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = c_seg_major_compact_ok(c_seg_dst,c_seg_src);
          printf("%d\n", benchRet); 
          free(c_seg_dst);
          free(c_seg_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
