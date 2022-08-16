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
typedef  int u32 ;

/* Variables and functions */
 int HFI_VIDEO_CODEC_DIVX ; 
 int HFI_VIDEO_CODEC_H263 ; 
 int HFI_VIDEO_CODEC_H264 ; 
 int HFI_VIDEO_CODEC_HEVC ; 
 int HFI_VIDEO_CODEC_MPEG1 ; 
 int HFI_VIDEO_CODEC_MPEG2 ; 
 int HFI_VIDEO_CODEC_MPEG4 ; 
 int HFI_VIDEO_CODEC_VC1 ; 
 int HFI_VIDEO_CODEC_VP8 ; 
 int HFI_VIDEO_CODEC_VP9 ; 
#define  V4L2_PIX_FMT_H263 139 
#define  V4L2_PIX_FMT_H264 138 
#define  V4L2_PIX_FMT_H264_NO_SC 137 
#define  V4L2_PIX_FMT_HEVC 136 
#define  V4L2_PIX_FMT_MPEG1 135 
#define  V4L2_PIX_FMT_MPEG2 134 
#define  V4L2_PIX_FMT_MPEG4 133 
#define  V4L2_PIX_FMT_VC1_ANNEX_G 132 
#define  V4L2_PIX_FMT_VC1_ANNEX_L 131 
#define  V4L2_PIX_FMT_VP8 130 
#define  V4L2_PIX_FMT_VP9 129 
#define  V4L2_PIX_FMT_XVID 128 

__attribute__((used)) static u32 to_codec_type(u32 pixfmt)
{
	switch (pixfmt) {
	case V4L2_PIX_FMT_H264:
	case V4L2_PIX_FMT_H264_NO_SC:
		return HFI_VIDEO_CODEC_H264;
	case V4L2_PIX_FMT_H263:
		return HFI_VIDEO_CODEC_H263;
	case V4L2_PIX_FMT_MPEG1:
		return HFI_VIDEO_CODEC_MPEG1;
	case V4L2_PIX_FMT_MPEG2:
		return HFI_VIDEO_CODEC_MPEG2;
	case V4L2_PIX_FMT_MPEG4:
		return HFI_VIDEO_CODEC_MPEG4;
	case V4L2_PIX_FMT_VC1_ANNEX_G:
	case V4L2_PIX_FMT_VC1_ANNEX_L:
		return HFI_VIDEO_CODEC_VC1;
	case V4L2_PIX_FMT_VP8:
		return HFI_VIDEO_CODEC_VP8;
	case V4L2_PIX_FMT_VP9:
		return HFI_VIDEO_CODEC_VP9;
	case V4L2_PIX_FMT_XVID:
		return HFI_VIDEO_CODEC_DIVX;
	case V4L2_PIX_FMT_HEVC:
		return HFI_VIDEO_CODEC_HEVC;
	default:
		return 0;
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
          int pixfmt = 100;
          int benchRet = to_codec_type(pixfmt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pixfmt = 255;
          int benchRet = to_codec_type(pixfmt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pixfmt = 10;
          int benchRet = to_codec_type(pixfmt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
