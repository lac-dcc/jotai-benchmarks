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
typedef  enum v4l2_mpeg_video_hevc_level { ____Placeholder_v4l2_mpeg_video_hevc_level } v4l2_mpeg_video_hevc_level ;

/* Variables and functions */

__attribute__((used)) static inline int hevc_level(enum v4l2_mpeg_video_hevc_level lvl)
{
	static unsigned int t[] = {
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_1    */ 10,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_2    */ 20,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_2_1  */ 21,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_3    */ 30,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_3_1  */ 31,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_4    */ 40,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_4_1  */ 41,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_5    */ 50,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_5_1  */ 51,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_5_2  */ 52,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_6    */ 60,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_6_1  */ 61,
		/* V4L2_MPEG_VIDEO_HEVC_LEVEL_6_2  */ 62,
	};
	return t[lvl];
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
          enum v4l2_mpeg_video_hevc_level lvl = 0;
          int benchRet = hevc_level(lvl);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
