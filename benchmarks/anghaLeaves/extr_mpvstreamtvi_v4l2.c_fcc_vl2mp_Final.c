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
 int MP_FOURCC_BGR15 ; 
 int MP_FOURCC_BGR16 ; 
 int MP_FOURCC_BGR24 ; 
 int MP_FOURCC_BGR32 ; 
 int MP_FOURCC_I420 ; 
 int MP_FOURCC_JPEG ; 
 int MP_FOURCC_MJPEG ; 
 int MP_FOURCC_RGB24 ; 
 int MP_FOURCC_RGB32 ; 
 int MP_FOURCC_RGB8 ; 
 int MP_FOURCC_UYVY ; 
 int MP_FOURCC_Y800 ; 
 int MP_FOURCC_YUV9 ; 
 int MP_FOURCC_YUY2 ; 
 int MP_FOURCC_YV12 ; 
#define  V4L2_PIX_FMT_BGR24 142 
#define  V4L2_PIX_FMT_BGR32 141 
#define  V4L2_PIX_FMT_GREY 140 
#define  V4L2_PIX_FMT_JPEG 139 
#define  V4L2_PIX_FMT_MJPEG 138 
#define  V4L2_PIX_FMT_RGB24 137 
#define  V4L2_PIX_FMT_RGB32 136 
#define  V4L2_PIX_FMT_RGB332 135 
#define  V4L2_PIX_FMT_RGB555 134 
#define  V4L2_PIX_FMT_RGB565 133 
#define  V4L2_PIX_FMT_UYVY 132 
#define  V4L2_PIX_FMT_YUV410 131 
#define  V4L2_PIX_FMT_YUV420 130 
#define  V4L2_PIX_FMT_YUYV 129 
#define  V4L2_PIX_FMT_YVU420 128 

__attribute__((used)) static int fcc_vl2mp(int fcc)
{
    switch (fcc) {
    case V4L2_PIX_FMT_RGB332:   return MP_FOURCC_RGB8;
    case V4L2_PIX_FMT_RGB555:   return MP_FOURCC_BGR15;
    case V4L2_PIX_FMT_RGB565:   return MP_FOURCC_BGR16;
    case V4L2_PIX_FMT_RGB24:    return MP_FOURCC_RGB24;
    case V4L2_PIX_FMT_RGB32:    return MP_FOURCC_RGB32;
    case V4L2_PIX_FMT_BGR24:    return MP_FOURCC_BGR24;
    case V4L2_PIX_FMT_BGR32:    return MP_FOURCC_BGR32;
    case V4L2_PIX_FMT_GREY:     return MP_FOURCC_Y800;
    case V4L2_PIX_FMT_YUV410:   return MP_FOURCC_YUV9;
    case V4L2_PIX_FMT_YUV420:   return MP_FOURCC_I420;
    case V4L2_PIX_FMT_YVU420:   return MP_FOURCC_YV12;
    case V4L2_PIX_FMT_YUYV:     return MP_FOURCC_YUY2;
    case V4L2_PIX_FMT_UYVY:     return MP_FOURCC_UYVY;
    case V4L2_PIX_FMT_MJPEG:    return MP_FOURCC_MJPEG;
    case V4L2_PIX_FMT_JPEG:     return MP_FOURCC_JPEG;
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
          int benchRet = fcc_vl2mp(fcc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int fcc = 255;
          int benchRet = fcc_vl2mp(fcc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fcc = 10;
          int benchRet = fcc_vl2mp(fcc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
