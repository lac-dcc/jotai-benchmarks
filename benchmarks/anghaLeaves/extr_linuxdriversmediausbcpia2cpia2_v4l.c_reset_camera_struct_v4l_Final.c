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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  stream_mode; } ;
struct TYPE_5__ {int /*<<< orphan*/  flicker_mode_req; } ;
struct TYPE_7__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;
struct TYPE_8__ {TYPE_2__ camera_state; TYPE_1__ flicker_control; TYPE_3__ roi; } ;
struct camera_data {int /*<<< orphan*/  pixelformat; TYPE_4__ params; int /*<<< orphan*/  num_frames; int /*<<< orphan*/  frame_size; int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_PIX_FMT_JPEG ; 
 int /*<<< orphan*/  alternate ; 
 int /*<<< orphan*/  buffer_size ; 
 int /*<<< orphan*/  flicker_mode ; 
 int /*<<< orphan*/  num_buffers ; 

__attribute__((used)) static void reset_camera_struct_v4l(struct camera_data *cam)
{
	cam->width = cam->params.roi.width;
	cam->height = cam->params.roi.height;

	cam->frame_size = buffer_size;
	cam->num_frames = num_buffers;

	/* Flicker modes */
	cam->params.flicker_control.flicker_mode_req = flicker_mode;

	/* stream modes */
	cam->params.camera_state.stream_mode = alternate;

	cam->pixelformat = V4L2_PIX_FMT_JPEG;
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
          int _len_cam0 = 1;
          struct camera_data * cam = (struct camera_data *) malloc(_len_cam0*sizeof(struct camera_data));
          for(int _i0 = 0; _i0 < _len_cam0; _i0++) {
            cam[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].params.camera_state.stream_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].params.flicker_control.flicker_mode_req = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].params.roi.height = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].params.roi.width = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].num_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        cam[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_camera_struct_v4l(cam);
          free(cam);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
