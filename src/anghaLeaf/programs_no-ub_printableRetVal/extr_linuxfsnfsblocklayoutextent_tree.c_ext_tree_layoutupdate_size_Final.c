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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct pnfs_block_layout {scalar_t__ bl_scsi_layout; } ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
 size_t PNFS_BLOCK_EXTENT_SIZE ; 
 size_t PNFS_SCSI_RANGE_SIZE ; 

__attribute__((used)) static size_t ext_tree_layoutupdate_size(struct pnfs_block_layout *bl, size_t count)
{
	if (bl->bl_scsi_layout)
		return sizeof(__be32) + PNFS_SCSI_RANGE_SIZE * count;
	else
		return sizeof(__be32) + PNFS_BLOCK_EXTENT_SIZE * count;
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

    // big-arr
    case 0:
    {
          unsigned long count = 255;
          int _len_bl0 = 1;
          struct pnfs_block_layout * bl = (struct pnfs_block_layout *) malloc(_len_bl0*sizeof(struct pnfs_block_layout));
          for(int _i0 = 0; _i0 < _len_bl0; _i0++) {
            bl->bl_scsi_layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ext_tree_layoutupdate_size(bl,count);
          printf("%lu\n", benchRet); 
          free(bl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
