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
 int EINVAL ; 
#define  IPUV3_CHANNEL_G_MEM_IC_PP 134 
#define  IPUV3_CHANNEL_G_MEM_IC_PRP_VF 133 
#define  IPUV3_CHANNEL_MEM_BG_ASYNC 132 
#define  IPUV3_CHANNEL_MEM_BG_SYNC 131 
#define  IPUV3_CHANNEL_MEM_FG_ASYNC 130 
#define  IPUV3_CHANNEL_MEM_FG_SYNC 129 
#define  IPUV3_CHANNEL_MEM_VDI_PLANE1_COMB 128 

__attribute__((used)) static int ipu_channel_albm(int ch_num)
{
	switch (ch_num) {
	case IPUV3_CHANNEL_G_MEM_IC_PRP_VF:	return 0;
	case IPUV3_CHANNEL_G_MEM_IC_PP:		return 1;
	case IPUV3_CHANNEL_MEM_FG_SYNC:		return 2;
	case IPUV3_CHANNEL_MEM_FG_ASYNC:	return 3;
	case IPUV3_CHANNEL_MEM_BG_SYNC:		return 4;
	case IPUV3_CHANNEL_MEM_BG_ASYNC:	return 5;
	case IPUV3_CHANNEL_MEM_VDI_PLANE1_COMB: return 6;
	default:
		return -EINVAL;
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
          int ch_num = 100;
          int benchRet = ipu_channel_albm(ch_num);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ch_num = 255;
          int benchRet = ipu_channel_albm(ch_num);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ch_num = 10;
          int benchRet = ipu_channel_albm(ch_num);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
