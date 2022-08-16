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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; scalar_t__ code; size_t index; int /*<<< orphan*/  max_height; int /*<<< orphan*/  min_height; int /*<<< orphan*/  min_width; int /*<<< orphan*/  max_width; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;

/* Variables and functions */
 int EINVAL ; 
 int RES_ISP ; 
 int RES_JPEG ; 
 scalar_t__ S5C73M3_ISP_FMT ; 
 scalar_t__ S5C73M3_ISP_PAD ; 
 scalar_t__ S5C73M3_JPEG_FMT ; 
 TYPE_1__** s5c73m3_resolutions ; 
 size_t* s5c73m3_resolutions_len ; 

__attribute__((used)) static int s5c73m3_enum_frame_size(struct v4l2_subdev *sd,
				   struct v4l2_subdev_pad_config *cfg,
				   struct v4l2_subdev_frame_size_enum *fse)
{
	int idx;

	if (fse->pad == S5C73M3_ISP_PAD) {
		if (fse->code != S5C73M3_ISP_FMT)
			return -EINVAL;
		idx = RES_ISP;
	} else{
		if (fse->code != S5C73M3_JPEG_FMT)
			return -EINVAL;
		idx = RES_JPEG;
	}

	if (fse->index >= s5c73m3_resolutions_len[idx])
		return -EINVAL;

	fse->min_width  = s5c73m3_resolutions[idx][fse->index].width;
	fse->max_width  = fse->min_width;
	fse->max_height = s5c73m3_resolutions[idx][fse->index].height;
	fse->min_height = fse->max_height;

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
          int _len_sd0 = 1;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 1;
          struct v4l2_subdev_pad_config * cfg = (struct v4l2_subdev_pad_config *) malloc(_len_cfg0*sizeof(struct v4l2_subdev_pad_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fse0 = 1;
          struct v4l2_subdev_frame_size_enum * fse = (struct v4l2_subdev_frame_size_enum *) malloc(_len_fse0*sizeof(struct v4l2_subdev_frame_size_enum));
          for(int _i0 = 0; _i0 < _len_fse0; _i0++) {
            fse[_i0].pad = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].max_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].min_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].max_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s5c73m3_enum_frame_size(sd,cfg,fse);
          printf("%d\n", benchRet); 
          free(sd);
          free(cfg);
          free(fse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
