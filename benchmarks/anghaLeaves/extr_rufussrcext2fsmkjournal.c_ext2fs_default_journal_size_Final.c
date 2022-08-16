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
typedef  int __u64 ;

/* Variables and functions */

int ext2fs_default_journal_size(__u64 num_blocks)
{
	if (num_blocks < 2048)
		return -1;
	if (num_blocks < 32768)		/* 128 MB */
		return (1024);			/* 4 MB */
	if (num_blocks < 256*1024)	/* 1 GB */
		return (4096);			/* 16 MB */
	if (num_blocks < 512*1024)	/* 2 GB */
		return (8192);			/* 32 MB */
	if (num_blocks < 4096*1024)	/* 16 GB */
		return (16384);			/* 64 MB */
	if (num_blocks < 8192*1024)	/* 32 GB */
		return (32768);			/* 128 MB */
	if (num_blocks < 16384*1024)	/* 64 GB */
		return (65536);			/* 256 MB */
	if (num_blocks < 32768*1024)	/* 128 GB */
		return (131072);		/* 512 MB */
	return 262144;				/* 1 GB */
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
          int num_blocks = 100;
          int benchRet = ext2fs_default_journal_size(num_blocks);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_blocks = 255;
          int benchRet = ext2fs_default_journal_size(num_blocks);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_blocks = 10;
          int benchRet = ext2fs_default_journal_size(num_blocks);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
