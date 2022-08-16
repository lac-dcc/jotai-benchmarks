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
#define  MP_FOURCC_BGR15 142 
#define  MP_FOURCC_BGR16 141 
#define  MP_FOURCC_BGR24 140 
#define  MP_FOURCC_BGR32 139 
#define  MP_FOURCC_I420 138 
#define  MP_FOURCC_JPEG 137 
#define  MP_FOURCC_MJPEG 136 
#define  MP_FOURCC_RGB24 135 
#define  MP_FOURCC_RGB32 134 
#define  MP_FOURCC_RGB8 133 
#define  MP_FOURCC_UYVY 132 
#define  MP_FOURCC_Y800 131 
#define  MP_FOURCC_YUV9 130 
#define  MP_FOURCC_YUY2 129 
#define  MP_FOURCC_YV12 128 
 int V4L2_PIX_FMT_BGR24 ; 
 int V4L2_PIX_FMT_BGR32 ; 
 int V4L2_PIX_FMT_GREY ; 
 int V4L2_PIX_FMT_JPEG ; 
 int V4L2_PIX_FMT_MJPEG ; 
 int V4L2_PIX_FMT_RGB24 ; 
 int V4L2_PIX_FMT_RGB32 ; 
 int V4L2_PIX_FMT_RGB332 ; 
 int V4L2_PIX_FMT_RGB555 ; 
 int V4L2_PIX_FMT_RGB565 ; 
 int V4L2_PIX_FMT_UYVY ; 
 int V4L2_PIX_FMT_YUV410 ; 
 int V4L2_PIX_FMT_YUV420 ; 
 int V4L2_PIX_FMT_YUYV ; 
 int V4L2_PIX_FMT_YVU420 ; 

__attribute__((used)) static int fcc_mp2vl(int fcc)
{
    switch (fcc) {
    case MP_FOURCC_RGB8:   return V4L2_PIX_FMT_RGB332;
    case MP_FOURCC_BGR15:  return V4L2_PIX_FMT_RGB555;
    case MP_FOURCC_BGR16:  return V4L2_PIX_FMT_RGB565;
    case MP_FOURCC_RGB24:  return V4L2_PIX_FMT_RGB24;
    case MP_FOURCC_RGB32:  return V4L2_PIX_FMT_RGB32;
    case MP_FOURCC_BGR24:  return V4L2_PIX_FMT_BGR24;
    case MP_FOURCC_BGR32:  return V4L2_PIX_FMT_BGR32;
    case MP_FOURCC_Y800:   return V4L2_PIX_FMT_GREY;
    case MP_FOURCC_YUV9:   return V4L2_PIX_FMT_YUV410;
    case MP_FOURCC_I420:   return V4L2_PIX_FMT_YUV420;
    case MP_FOURCC_YUY2:   return V4L2_PIX_FMT_YUYV;
    case MP_FOURCC_YV12:   return V4L2_PIX_FMT_YVU420;
    case MP_FOURCC_UYVY:   return V4L2_PIX_FMT_UYVY;
    case MP_FOURCC_MJPEG:  return V4L2_PIX_FMT_MJPEG;
    case MP_FOURCC_JPEG:   return V4L2_PIX_FMT_JPEG;
    }
    return fcc;
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
          int fcc = 100;
          int benchRet = fcc_mp2vl(fcc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int fcc = 255;
          int benchRet = fcc_mp2vl(fcc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fcc = 10;
          int benchRet = fcc_mp2vl(fcc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
