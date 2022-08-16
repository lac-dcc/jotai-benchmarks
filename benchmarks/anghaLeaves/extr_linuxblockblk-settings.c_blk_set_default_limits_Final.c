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
struct queue_limits {int max_discard_segments; int logical_block_size; int physical_block_size; int io_min; unsigned long bounce_pfn; int cluster; int /*<<< orphan*/  zoned; scalar_t__ misaligned; scalar_t__ io_opt; scalar_t__ alignment_offset; scalar_t__ discard_misaligned; scalar_t__ discard_alignment; scalar_t__ discard_granularity; scalar_t__ max_hw_discard_sectors; scalar_t__ max_discard_sectors; scalar_t__ max_write_zeroes_sectors; scalar_t__ max_write_same_sectors; scalar_t__ chunk_sectors; scalar_t__ max_dev_sectors; int /*<<< orphan*/  max_hw_sectors; int /*<<< orphan*/  max_sectors; int /*<<< orphan*/  max_segment_size; scalar_t__ virt_boundary_mask; int /*<<< orphan*/  seg_boundary_mask; scalar_t__ max_integrity_segments; int /*<<< orphan*/  max_segments; } ;

/* Variables and functions */
 int BLK_BOUNCE_ANY ; 
 int /*<<< orphan*/  BLK_MAX_SEGMENTS ; 
 int /*<<< orphan*/  BLK_MAX_SEGMENT_SIZE ; 
 int /*<<< orphan*/  BLK_SAFE_MAX_SECTORS ; 
 int /*<<< orphan*/  BLK_SEG_BOUNDARY_MASK ; 
 int /*<<< orphan*/  BLK_ZONED_NONE ; 
 int PAGE_SHIFT ; 

void blk_set_default_limits(struct queue_limits *lim)
{
	lim->max_segments = BLK_MAX_SEGMENTS;
	lim->max_discard_segments = 1;
	lim->max_integrity_segments = 0;
	lim->seg_boundary_mask = BLK_SEG_BOUNDARY_MASK;
	lim->virt_boundary_mask = 0;
	lim->max_segment_size = BLK_MAX_SEGMENT_SIZE;
	lim->max_sectors = lim->max_hw_sectors = BLK_SAFE_MAX_SECTORS;
	lim->max_dev_sectors = 0;
	lim->chunk_sectors = 0;
	lim->max_write_same_sectors = 0;
	lim->max_write_zeroes_sectors = 0;
	lim->max_discard_sectors = 0;
	lim->max_hw_discard_sectors = 0;
	lim->discard_granularity = 0;
	lim->discard_alignment = 0;
	lim->discard_misaligned = 0;
	lim->logical_block_size = lim->physical_block_size = lim->io_min = 512;
	lim->bounce_pfn = (unsigned long)(BLK_BOUNCE_ANY >> PAGE_SHIFT);
	lim->alignment_offset = 0;
	lim->io_opt = 0;
	lim->misaligned = 0;
	lim->cluster = 1;
	lim->zoned = BLK_ZONED_NONE;
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
          int _len_lim0 = 1;
          struct queue_limits * lim = (struct queue_limits *) malloc(_len_lim0*sizeof(struct queue_limits));
          for(int _i0 = 0; _i0 < _len_lim0; _i0++) {
            lim[_i0].max_discard_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].logical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].physical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].io_min = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].bounce_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].cluster = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].zoned = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].misaligned = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].io_opt = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].alignment_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].discard_misaligned = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].discard_alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].discard_granularity = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_hw_discard_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_discard_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_write_zeroes_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_write_same_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_dev_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_hw_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_segment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].virt_boundary_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].seg_boundary_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_integrity_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        lim[_i0].max_segments = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_set_default_limits(lim);
          free(lim);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
