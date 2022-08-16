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
struct pnfs_block_extent {scalar_t__ be_state; scalar_t__ be_f_offset; scalar_t__ be_length; } ;
struct layout_verification {scalar_t__ mode; scalar_t__ start; scalar_t__ cowread; scalar_t__ inval; } ;

/* Variables and functions */
 int EIO ; 
 scalar_t__ IOMODE_READ ; 
 scalar_t__ PNFS_BLOCK_INVALID_DATA ; 
 scalar_t__ PNFS_BLOCK_READWRITE_DATA ; 
 scalar_t__ PNFS_BLOCK_READ_DATA ; 

__attribute__((used)) static int verify_extent(struct pnfs_block_extent *be,
			 struct layout_verification *lv)
{
	if (lv->mode == IOMODE_READ) {
		if (be->be_state == PNFS_BLOCK_READWRITE_DATA ||
		    be->be_state == PNFS_BLOCK_INVALID_DATA)
			return -EIO;
		if (be->be_f_offset != lv->start)
			return -EIO;
		lv->start += be->be_length;
		return 0;
	}
	/* lv->mode == IOMODE_RW */
	if (be->be_state == PNFS_BLOCK_READWRITE_DATA) {
		if (be->be_f_offset != lv->start)
			return -EIO;
		if (lv->cowread > lv->start)
			return -EIO;
		lv->start += be->be_length;
		lv->inval = lv->start;
		return 0;
	} else if (be->be_state == PNFS_BLOCK_INVALID_DATA) {
		if (be->be_f_offset != lv->start)
			return -EIO;
		lv->start += be->be_length;
		return 0;
	} else if (be->be_state == PNFS_BLOCK_READ_DATA) {
		if (be->be_f_offset > lv->start)
			return -EIO;
		if (be->be_f_offset < lv->inval)
			return -EIO;
		if (be->be_f_offset < lv->cowread)
			return -EIO;
		/* It looks like you might want to min this with lv->start,
		 * but you really don't.
		 */
		lv->inval = lv->inval + be->be_length;
		lv->cowread = be->be_f_offset + be->be_length;
		return 0;
	} else
		return -EIO;
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
          int _len_be0 = 1;
          struct pnfs_block_extent * be = (struct pnfs_block_extent *) malloc(_len_be0*sizeof(struct pnfs_block_extent));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
            be[_i0].be_state = ((-2 * (next_i()%2)) + 1) * next_i();
        be[_i0].be_f_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        be[_i0].be_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lv0 = 1;
          struct layout_verification * lv = (struct layout_verification *) malloc(_len_lv0*sizeof(struct layout_verification));
          for(int _i0 = 0; _i0 < _len_lv0; _i0++) {
            lv[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        lv[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        lv[_i0].cowread = ((-2 * (next_i()%2)) + 1) * next_i();
        lv[_i0].inval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verify_extent(be,lv);
          printf("%d\n", benchRet); 
          free(be);
          free(lv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
