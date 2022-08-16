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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ext2_inode {int i_flags; } ;
typedef  TYPE_1__* ext2_filsys ;
typedef  unsigned long long blk64_t ;
struct TYPE_3__ {int blocksize; } ;

/* Variables and functions */
 int EXT4_EXTENTS_FL ; 

int ext2fs_file_block_offset_too_big(ext2_filsys fs,
				     struct ext2_inode *inode,
				     blk64_t offset)
{
	blk64_t addr_per_block, max_map_block;

	/* Kernel seems to cut us off at 4294967294 blocks */
	if (offset >= (1ULL << 32) - 1)
		return 1;

	if (inode->i_flags & EXT4_EXTENTS_FL)
		return 0;

	addr_per_block = fs->blocksize >> 2;
	max_map_block = addr_per_block;
	max_map_block += addr_per_block * addr_per_block;
	max_map_block += addr_per_block * addr_per_block * addr_per_block;
	max_map_block += 12;

	return offset >= max_map_block;
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
          unsigned long long offset = 100;
          int _len_fs0 = 1;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inode0 = 1;
          struct ext2_inode * inode = (struct ext2_inode *) malloc(_len_inode0*sizeof(struct ext2_inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].i_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_file_block_offset_too_big(fs,inode,offset);
          printf("%d\n", benchRet); 
          free(fs);
          free(inode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
