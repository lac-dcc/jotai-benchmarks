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
struct TYPE_2__ {int min_width; int min_height; int max_width; int max_height; int step_width; int step_height; } ;
struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; TYPE_1__ stepwise; int /*<<< orphan*/  type; } ;
struct gspca_dev {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  V4L2_FRMSIZE_TYPE_STEPWISE ; 
 scalar_t__ V4L2_PIX_FMT_SBGGR8 ; 

__attribute__((used)) static int stk1135_enum_framesizes(struct gspca_dev *gspca_dev,
			struct v4l2_frmsizeenum *fsize)
{
	if (fsize->index != 0 || fsize->pixel_format != V4L2_PIX_FMT_SBGGR8)
		return -EINVAL;

	fsize->type = V4L2_FRMSIZE_TYPE_STEPWISE;
	fsize->stepwise.min_width = 32;
	fsize->stepwise.min_height = 32;
	fsize->stepwise.max_width = 1280;
	fsize->stepwise.max_height = 1024;
	fsize->stepwise.step_width = 2;
	fsize->stepwise.step_height = 2;

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
          int _len_gspca_dev0 = 1;
          struct gspca_dev * gspca_dev = (struct gspca_dev *) malloc(_len_gspca_dev0*sizeof(struct gspca_dev));
          for(int _i0 = 0; _i0 < _len_gspca_dev0; _i0++) {
            gspca_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fsize0 = 1;
          struct v4l2_frmsizeenum * fsize = (struct v4l2_frmsizeenum *) malloc(_len_fsize0*sizeof(struct v4l2_frmsizeenum));
          for(int _i0 = 0; _i0 < _len_fsize0; _i0++) {
            fsize[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].pixel_format = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].stepwise.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].stepwise.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].stepwise.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].stepwise.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].stepwise.step_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].stepwise.step_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stk1135_enum_framesizes(gspca_dev,fsize);
          printf("%d\n", benchRet); 
          free(gspca_dev);
          free(fsize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
