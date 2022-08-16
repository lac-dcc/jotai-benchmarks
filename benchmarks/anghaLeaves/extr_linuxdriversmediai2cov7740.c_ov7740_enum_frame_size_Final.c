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
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ index; int /*<<< orphan*/  max_height; int /*<<< orphan*/  min_height; int /*<<< orphan*/  max_width; int /*<<< orphan*/  min_width; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  VGA_HEIGHT ; 
 int /*<<< orphan*/  VGA_WIDTH ; 

__attribute__((used)) static int ov7740_enum_frame_size(struct v4l2_subdev *sd,
				  struct v4l2_subdev_pad_config *cfg,
				  struct v4l2_subdev_frame_size_enum *fse)
{
	if (fse->pad)
		return -EINVAL;

	if (fse->index > 0)
		return -EINVAL;

	fse->min_width = fse->max_width = VGA_WIDTH;
	fse->min_height = fse->max_height = VGA_HEIGHT;

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
            fse[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].max_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].min_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fse[_i0].pad = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ov7740_enum_frame_size(sd,cfg,fse);
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
