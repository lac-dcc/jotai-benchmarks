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
       0            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u64 ;
typedef  int loff_t ;
typedef  int /*<<< orphan*/  blkcnt_t ;

/* Variables and functions */
 int MAX_LFS_FILESIZE ; 

__attribute__((used)) static loff_t ext4_max_size(int blkbits, int has_huge_files)
{
    loff_t res;
    loff_t upper_limit = MAX_LFS_FILESIZE;

    /* small i_blocks in vfs inode? */
    if (!has_huge_files || sizeof(blkcnt_t) < sizeof(u64)) {
        /*
         * CONFIG_LBD is not enabled implies the inode
         * i_block represent total blocks in 512 bytes
         * 32 == size of vfs inode i_blocks * 8
         */
        upper_limit = (1LL << 32) - 1;

        /* total blocks in file system block size */
        upper_limit >>= (blkbits - 9);
        upper_limit <<= blkbits;
    }

    /* 32-bit extent-start container, ee_block */
    res = 1LL << 32;
    res <<= blkbits;
    res -= 1;

    /* Sanity check against vm- & vfs- imposed limits */
    if (res > upper_limit)
        res = upper_limit;

    return res;
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

    // big-arr-10x
    case 0:
    {
          int blkbits = 10;
          int has_huge_files = 10;
          int benchRet = ext4_max_size(blkbits,has_huge_files);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
