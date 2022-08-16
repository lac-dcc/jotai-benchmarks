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
struct pnfs_block_extent {scalar_t__ be_state; scalar_t__ be_device; scalar_t__ be_f_offset; scalar_t__ be_length; scalar_t__ be_v_offset; scalar_t__ be_tag; } ;

/* Variables and functions */
 scalar_t__ PNFS_BLOCK_INVALID_DATA ; 
 scalar_t__ PNFS_BLOCK_NONE_DATA ; 

__attribute__((used)) static bool
ext_can_merge(struct pnfs_block_extent *be1, struct pnfs_block_extent *be2)
{
	if (be1->be_state != be2->be_state)
		return false;
	if (be1->be_device != be2->be_device)
		return false;

	if (be1->be_f_offset + be1->be_length != be2->be_f_offset)
		return false;

	if (be1->be_state != PNFS_BLOCK_NONE_DATA &&
	    (be1->be_v_offset + be1->be_length != be2->be_v_offset))
		return false;

	if (be1->be_state == PNFS_BLOCK_INVALID_DATA &&
	    be1->be_tag != be2->be_tag)
		return false;

	return true;
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
          int _len_be10 = 1;
          struct pnfs_block_extent * be1 = (struct pnfs_block_extent *) malloc(_len_be10*sizeof(struct pnfs_block_extent));
          for(int _i0 = 0; _i0 < _len_be10; _i0++) {
            be1[_i0].be_state = ((-2 * (next_i()%2)) + 1) * next_i();
        be1[_i0].be_device = ((-2 * (next_i()%2)) + 1) * next_i();
        be1[_i0].be_f_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        be1[_i0].be_length = ((-2 * (next_i()%2)) + 1) * next_i();
        be1[_i0].be_v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        be1[_i0].be_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_be20 = 1;
          struct pnfs_block_extent * be2 = (struct pnfs_block_extent *) malloc(_len_be20*sizeof(struct pnfs_block_extent));
          for(int _i0 = 0; _i0 < _len_be20; _i0++) {
            be2[_i0].be_state = ((-2 * (next_i()%2)) + 1) * next_i();
        be2[_i0].be_device = ((-2 * (next_i()%2)) + 1) * next_i();
        be2[_i0].be_f_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        be2[_i0].be_length = ((-2 * (next_i()%2)) + 1) * next_i();
        be2[_i0].be_v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        be2[_i0].be_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext_can_merge(be1,be2);
          printf("%d\n", benchRet); 
          free(be1);
          free(be2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
