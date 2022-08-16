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
typedef  int uint32_t ;

/* Variables and functions */
#define  ATOM_DEVICE_CRT1_SUPPORT 134 
 int ATOM_DEVICE_CRT2_SUPPORT ; 
#define  ATOM_DEVICE_DFP1_SUPPORT 133 
#define  ATOM_DEVICE_DFP2_SUPPORT 132 
#define  ATOM_DEVICE_DFP3_SUPPORT 131 
#define  ATOM_DEVICE_DFP4_SUPPORT 130 
#define  ATOM_DEVICE_DFP5_SUPPORT 129 
 int ATOM_DEVICE_DFP6_SUPPORT ; 
#define  ATOM_DEVICE_LCD1_SUPPORT 128 
 int ATOM_DEVICE_LCD2_SUPPORT ; 

__attribute__((used)) static uint32_t enum_next_dev_id(uint32_t dev_id)
{
	/* Get next device ID in the group. */
	switch (dev_id) {
	case ATOM_DEVICE_CRT1_SUPPORT:
		return ATOM_DEVICE_CRT2_SUPPORT;
	case ATOM_DEVICE_LCD1_SUPPORT:
		return ATOM_DEVICE_LCD2_SUPPORT;
	case ATOM_DEVICE_DFP1_SUPPORT:
		return ATOM_DEVICE_DFP2_SUPPORT;
	case ATOM_DEVICE_DFP2_SUPPORT:
		return ATOM_DEVICE_DFP3_SUPPORT;
	case ATOM_DEVICE_DFP3_SUPPORT:
		return ATOM_DEVICE_DFP4_SUPPORT;
	case ATOM_DEVICE_DFP4_SUPPORT:
		return ATOM_DEVICE_DFP5_SUPPORT;
	case ATOM_DEVICE_DFP5_SUPPORT:
		return ATOM_DEVICE_DFP6_SUPPORT;
	}

	/* Done enumerating through devices. */
	return 0;
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
          int dev_id = 100;
          int benchRet = enum_next_dev_id(dev_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int dev_id = 255;
          int benchRet = enum_next_dev_id(dev_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dev_id = 10;
          int benchRet = enum_next_dev_id(dev_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
