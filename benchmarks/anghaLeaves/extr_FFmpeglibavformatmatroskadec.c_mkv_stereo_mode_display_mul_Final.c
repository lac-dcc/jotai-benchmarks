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

/* Variables and functions */
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_BOTH_EYES_BLOCK_LR 140 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_BOTH_EYES_BLOCK_RL 139 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_BOTTOM_TOP 138 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_CHECKERBOARD_LR 137 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_CHECKERBOARD_RL 136 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_COL_INTERLEAVED_LR 135 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_COL_INTERLEAVED_RL 134 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_LEFT_RIGHT 133 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_MONO 132 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_RIGHT_LEFT 131 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_ROW_INTERLEAVED_LR 130 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_ROW_INTERLEAVED_RL 129 
#define  MATROSKA_VIDEO_STEREOMODE_TYPE_TOP_BOTTOM 128 

__attribute__((used)) static void mkv_stereo_mode_display_mul(int stereo_mode,
                                        int *h_width, int *h_height)
{
    switch (stereo_mode) {
        case MATROSKA_VIDEO_STEREOMODE_TYPE_MONO:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_CHECKERBOARD_RL:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_CHECKERBOARD_LR:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_BOTH_EYES_BLOCK_RL:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_BOTH_EYES_BLOCK_LR:
            break;
        case MATROSKA_VIDEO_STEREOMODE_TYPE_RIGHT_LEFT:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_LEFT_RIGHT:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_COL_INTERLEAVED_RL:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_COL_INTERLEAVED_LR:
            *h_width = 2;
            break;
        case MATROSKA_VIDEO_STEREOMODE_TYPE_BOTTOM_TOP:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_TOP_BOTTOM:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_ROW_INTERLEAVED_RL:
        case MATROSKA_VIDEO_STEREOMODE_TYPE_ROW_INTERLEAVED_LR:
            *h_height = 2;
            break;
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
          int stereo_mode = 100;
          int _len_h_width0 = 1;
          int * h_width = (int *) malloc(_len_h_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h_width0; _i0++) {
            h_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h_height0 = 1;
          int * h_height = (int *) malloc(_len_h_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h_height0; _i0++) {
            h_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mkv_stereo_mode_display_mul(stereo_mode,h_width,h_height);
          free(h_width);
          free(h_height);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
