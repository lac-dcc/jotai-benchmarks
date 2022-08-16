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
typedef  enum video_format { ____Placeholder_video_format } video_format ;
typedef  enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;

/* Variables and functions */
#define  AV_PIX_FMT_BGRA 136 
#define  AV_PIX_FMT_GRAY8 135 
#define  AV_PIX_FMT_NONE 134 
#define  AV_PIX_FMT_NV12 133 
#define  AV_PIX_FMT_RGBA 132 
#define  AV_PIX_FMT_UYVY422 131 
#define  AV_PIX_FMT_YUV420P 130 
#define  AV_PIX_FMT_YUV444P 129 
#define  AV_PIX_FMT_YUYV422 128 
 int VIDEO_FORMAT_BGRA ; 
 int VIDEO_FORMAT_I420 ; 
 int VIDEO_FORMAT_I444 ; 
 int VIDEO_FORMAT_NONE ; 
 int VIDEO_FORMAT_NV12 ; 
 int VIDEO_FORMAT_RGBA ; 
 int VIDEO_FORMAT_UYVY ; 
 int VIDEO_FORMAT_Y800 ; 
 int VIDEO_FORMAT_YUY2 ; 

__attribute__((used)) static inline enum video_format ffmpeg_to_obs_video_format(
		enum AVPixelFormat format)
{
	switch (format) {
	case AV_PIX_FMT_YUV444P: return VIDEO_FORMAT_I444;
	case AV_PIX_FMT_YUV420P: return VIDEO_FORMAT_I420;
	case AV_PIX_FMT_NV12:    return VIDEO_FORMAT_NV12;
	case AV_PIX_FMT_YUYV422: return VIDEO_FORMAT_YUY2;
	case AV_PIX_FMT_UYVY422: return VIDEO_FORMAT_UYVY;
	case AV_PIX_FMT_RGBA:    return VIDEO_FORMAT_RGBA;
	case AV_PIX_FMT_BGRA:    return VIDEO_FORMAT_BGRA;
	case AV_PIX_FMT_GRAY8:   return VIDEO_FORMAT_Y800;
	case AV_PIX_FMT_NONE:
	default:                 return VIDEO_FORMAT_NONE;
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
          enum AVPixelFormat format = 0;
          enum video_format benchRet = ffmpeg_to_obs_video_format(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
