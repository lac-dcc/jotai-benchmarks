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
 int V4L2_MPEG_VIDEO_H264_LEVEL_1B ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_1_0 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_1_1 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_1_2 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_1_3 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_2_0 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_2_1 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_2_2 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_3_0 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_3_1 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_3_2 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_4_0 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_4_1 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_4_2 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_5_0 ; 
 int V4L2_MPEG_VIDEO_H264_LEVEL_5_1 ; 

int coda_h264_level(int level_idc)
{
	switch (level_idc) {
	case 10: return V4L2_MPEG_VIDEO_H264_LEVEL_1_0;
	case 9:  return V4L2_MPEG_VIDEO_H264_LEVEL_1B;
	case 11: return V4L2_MPEG_VIDEO_H264_LEVEL_1_1;
	case 12: return V4L2_MPEG_VIDEO_H264_LEVEL_1_2;
	case 13: return V4L2_MPEG_VIDEO_H264_LEVEL_1_3;
	case 20: return V4L2_MPEG_VIDEO_H264_LEVEL_2_0;
	case 21: return V4L2_MPEG_VIDEO_H264_LEVEL_2_1;
	case 22: return V4L2_MPEG_VIDEO_H264_LEVEL_2_2;
	case 30: return V4L2_MPEG_VIDEO_H264_LEVEL_3_0;
	case 31: return V4L2_MPEG_VIDEO_H264_LEVEL_3_1;
	case 32: return V4L2_MPEG_VIDEO_H264_LEVEL_3_2;
	case 40: return V4L2_MPEG_VIDEO_H264_LEVEL_4_0;
	case 41: return V4L2_MPEG_VIDEO_H264_LEVEL_4_1;
	case 42: return V4L2_MPEG_VIDEO_H264_LEVEL_4_2;
	case 50: return V4L2_MPEG_VIDEO_H264_LEVEL_5_0;
	case 51: return V4L2_MPEG_VIDEO_H264_LEVEL_5_1;
	default: return -EINVAL;
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
          int level_idc = 100;
          int benchRet = coda_h264_level(level_idc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int level_idc = 255;
          int benchRet = coda_h264_level(level_idc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int level_idc = 10;
          int benchRet = coda_h264_level(level_idc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
