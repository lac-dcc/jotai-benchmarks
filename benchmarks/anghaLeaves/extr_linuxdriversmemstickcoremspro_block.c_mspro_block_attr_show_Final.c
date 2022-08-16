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
typedef  int /*<<< orphan*/  sysfs_show_t ;

/* Variables and functions */
#define  MSPRO_BLOCK_ID_DEVINFO 133 
#define  MSPRO_BLOCK_ID_MBR 132 
#define  MSPRO_BLOCK_ID_MODELNAME 131 
#define  MSPRO_BLOCK_ID_SPECFILEVALUES1 130 
#define  MSPRO_BLOCK_ID_SPECFILEVALUES2 129 
#define  MSPRO_BLOCK_ID_SYSINFO 128 
 int /*<<< orphan*/  mspro_block_attr_show_default ; 
 int /*<<< orphan*/  mspro_block_attr_show_devinfo ; 
 int /*<<< orphan*/  mspro_block_attr_show_mbr ; 
 int /*<<< orphan*/  mspro_block_attr_show_modelname ; 
 int /*<<< orphan*/  mspro_block_attr_show_specfile ; 
 int /*<<< orphan*/  mspro_block_attr_show_sysinfo ; 

__attribute__((used)) static sysfs_show_t mspro_block_attr_show(unsigned char tag)
{
	switch (tag) {
	case MSPRO_BLOCK_ID_SYSINFO:
		return mspro_block_attr_show_sysinfo;
	case MSPRO_BLOCK_ID_MODELNAME:
		return mspro_block_attr_show_modelname;
	case MSPRO_BLOCK_ID_MBR:
		return mspro_block_attr_show_mbr;
	case MSPRO_BLOCK_ID_SPECFILEVALUES1:
	case MSPRO_BLOCK_ID_SPECFILEVALUES2:
		return mspro_block_attr_show_specfile;
	case MSPRO_BLOCK_ID_DEVINFO:
		return mspro_block_attr_show_devinfo;
	default:
		return mspro_block_attr_show_default;
	}
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
          unsigned char tag = 100;
          int benchRet = mspro_block_attr_show(tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char tag = 255;
          int benchRet = mspro_block_attr_show(tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char tag = 10;
          int benchRet = mspro_block_attr_show(tag);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
