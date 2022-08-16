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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
 unsigned int BTRFS_INODE_APPEND ; 
 unsigned int BTRFS_INODE_COMPRESS ; 
 unsigned int BTRFS_INODE_DIRSYNC ; 
 unsigned int BTRFS_INODE_IMMUTABLE ; 
 unsigned int BTRFS_INODE_NOATIME ; 
 unsigned int BTRFS_INODE_NOCOMPRESS ; 
 unsigned int BTRFS_INODE_NODATACOW ; 
 unsigned int BTRFS_INODE_NODUMP ; 
 unsigned int BTRFS_INODE_SYNC ; 
 unsigned int FS_APPEND_FL ; 
 unsigned int FS_COMPR_FL ; 
 unsigned int FS_DIRSYNC_FL ; 
 unsigned int FS_IMMUTABLE_FL ; 
 unsigned int FS_NOATIME_FL ; 
 unsigned int FS_NOCOMP_FL ; 
 unsigned int FS_NOCOW_FL ; 
 unsigned int FS_NODUMP_FL ; 
 unsigned int FS_SYNC_FL ; 

__attribute__((used)) static unsigned int btrfs_inode_flags_to_fsflags(unsigned int flags)
{
	unsigned int iflags = 0;

	if (flags & BTRFS_INODE_SYNC)
		iflags |= FS_SYNC_FL;
	if (flags & BTRFS_INODE_IMMUTABLE)
		iflags |= FS_IMMUTABLE_FL;
	if (flags & BTRFS_INODE_APPEND)
		iflags |= FS_APPEND_FL;
	if (flags & BTRFS_INODE_NODUMP)
		iflags |= FS_NODUMP_FL;
	if (flags & BTRFS_INODE_NOATIME)
		iflags |= FS_NOATIME_FL;
	if (flags & BTRFS_INODE_DIRSYNC)
		iflags |= FS_DIRSYNC_FL;
	if (flags & BTRFS_INODE_NODATACOW)
		iflags |= FS_NOCOW_FL;

	if (flags & BTRFS_INODE_NOCOMPRESS)
		iflags |= FS_NOCOMP_FL;
	else if (flags & BTRFS_INODE_COMPRESS)
		iflags |= FS_COMPR_FL;

	return iflags;
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
          unsigned int flags = 100;
          unsigned int benchRet = btrfs_inode_flags_to_fsflags(flags);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int flags = 255;
          unsigned int benchRet = btrfs_inode_flags_to_fsflags(flags);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int flags = 10;
          unsigned int benchRet = btrfs_inode_flags_to_fsflags(flags);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
