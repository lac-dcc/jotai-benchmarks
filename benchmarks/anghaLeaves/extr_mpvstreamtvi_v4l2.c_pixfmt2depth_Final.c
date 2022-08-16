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
#define  V4L2_PIX_FMT_BGR24 150 
#define  V4L2_PIX_FMT_BGR32 149 
#define  V4L2_PIX_FMT_GREY 148 
#define  V4L2_PIX_FMT_HI240 147 
#define  V4L2_PIX_FMT_NV12 146 
#define  V4L2_PIX_FMT_NV21 145 
#define  V4L2_PIX_FMT_RGB24 144 
#define  V4L2_PIX_FMT_RGB32 143 
#define  V4L2_PIX_FMT_RGB332 142 
#define  V4L2_PIX_FMT_RGB555 141 
#define  V4L2_PIX_FMT_RGB555X 140 
#define  V4L2_PIX_FMT_RGB565 139 
#define  V4L2_PIX_FMT_RGB565X 138 
#define  V4L2_PIX_FMT_UYVY 137 
#define  V4L2_PIX_FMT_Y41P 136 
#define  V4L2_PIX_FMT_YUV410 135 
#define  V4L2_PIX_FMT_YUV411P 134 
#define  V4L2_PIX_FMT_YUV420 133 
#define  V4L2_PIX_FMT_YUV422P 132 
#define  V4L2_PIX_FMT_YUYV 131 
#define  V4L2_PIX_FMT_YVU410 130 
#define  V4L2_PIX_FMT_YVU420 129 
#define  V4L2_PIX_FMT_YYUV 128 

__attribute__((used)) static int pixfmt2depth(int pixfmt)
{
    switch (pixfmt) {
    case V4L2_PIX_FMT_RGB332:
        return 8;
    case V4L2_PIX_FMT_RGB555:
    case V4L2_PIX_FMT_RGB565:
    case V4L2_PIX_FMT_RGB555X:
    case V4L2_PIX_FMT_RGB565X:
        return 16;
    case V4L2_PIX_FMT_BGR24:
    case V4L2_PIX_FMT_RGB24:
        return 24;
    case V4L2_PIX_FMT_BGR32:
    case V4L2_PIX_FMT_RGB32:
        return 32;
    case V4L2_PIX_FMT_GREY:
        return 8;
    case V4L2_PIX_FMT_YVU410:
        return 9;
    case V4L2_PIX_FMT_YVU420:
        return 12;
    case V4L2_PIX_FMT_YUYV:
    case V4L2_PIX_FMT_UYVY:
    case V4L2_PIX_FMT_YUV422P:
    case V4L2_PIX_FMT_YUV411P:
        return 16;
    case V4L2_PIX_FMT_Y41P:
    case V4L2_PIX_FMT_NV12:
    case V4L2_PIX_FMT_NV21:
        return 12;
    case V4L2_PIX_FMT_YUV410:
        return 9;
    case V4L2_PIX_FMT_YUV420:
        return 12;
    case V4L2_PIX_FMT_YYUV:
        return 16;
    case V4L2_PIX_FMT_HI240:
        return 8;

    }
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
          int pixfmt = 100;
          int benchRet = pixfmt2depth(pixfmt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pixfmt = 255;
          int benchRet = pixfmt2depth(pixfmt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pixfmt = 10;
          int benchRet = pixfmt2depth(pixfmt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
