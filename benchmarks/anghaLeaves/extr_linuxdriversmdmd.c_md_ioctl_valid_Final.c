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
#define  ADD_NEW_DISK 144 
#define  BLKROSET 143 
#define  CLUSTERED_DISK_NACK 142 
#define  GET_ARRAY_INFO 141 
#define  GET_BITMAP_FILE 140 
#define  GET_DISK_INFO 139 
#define  HOT_ADD_DISK 138 
#define  HOT_REMOVE_DISK 137 
#define  RAID_AUTORUN 136 
#define  RAID_VERSION 135 
#define  RESTART_ARRAY_RW 134 
#define  RUN_ARRAY 133 
#define  SET_ARRAY_INFO 132 
#define  SET_BITMAP_FILE 131 
#define  SET_DISK_FAULTY 130 
#define  STOP_ARRAY 129 
#define  STOP_ARRAY_RO 128 

__attribute__((used)) static inline bool md_ioctl_valid(unsigned int cmd)
{
	switch (cmd) {
	case ADD_NEW_DISK:
	case BLKROSET:
	case GET_ARRAY_INFO:
	case GET_BITMAP_FILE:
	case GET_DISK_INFO:
	case HOT_ADD_DISK:
	case HOT_REMOVE_DISK:
	case RAID_AUTORUN:
	case RAID_VERSION:
	case RESTART_ARRAY_RW:
	case RUN_ARRAY:
	case SET_ARRAY_INFO:
	case SET_BITMAP_FILE:
	case SET_DISK_FAULTY:
	case STOP_ARRAY:
	case STOP_ARRAY_RO:
	case CLUSTERED_DISK_NACK:
		return true;
	default:
		return false;
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
          unsigned int cmd = 100;
          int benchRet = md_ioctl_valid(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int cmd = 255;
          int benchRet = md_ioctl_valid(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int cmd = 10;
          int benchRet = md_ioctl_valid(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
