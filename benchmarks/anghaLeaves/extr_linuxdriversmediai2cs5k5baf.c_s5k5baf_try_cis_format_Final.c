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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct v4l2_mbus_framefmt {int /*<<< orphan*/  field; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  code; int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;

/* Variables and functions */
 int /*<<< orphan*/  MEDIA_BUS_FMT_FIXED ; 
 int /*<<< orphan*/  S5K5BAF_CIS_HEIGHT ; 
 int /*<<< orphan*/  S5K5BAF_CIS_WIDTH ; 
 int /*<<< orphan*/  V4L2_COLORSPACE_JPEG ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 

__attribute__((used)) static void s5k5baf_try_cis_format(struct v4l2_mbus_framefmt *mf)
{
	mf->width = S5K5BAF_CIS_WIDTH;
	mf->height = S5K5BAF_CIS_HEIGHT;
	mf->code = MEDIA_BUS_FMT_FIXED;
	mf->colorspace = V4L2_COLORSPACE_JPEG;
	mf->field = V4L2_FIELD_NONE;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_mf0 = 65025;
          struct v4l2_mbus_framefmt * mf = (struct v4l2_mbus_framefmt *) malloc(_len_mf0*sizeof(struct v4l2_mbus_framefmt));
          for(int _i0 = 0; _i0 < _len_mf0; _i0++) {
              mf[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          s5k5baf_try_cis_format(mf);
          free(mf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_mf0 = 100;
          struct v4l2_mbus_framefmt * mf = (struct v4l2_mbus_framefmt *) malloc(_len_mf0*sizeof(struct v4l2_mbus_framefmt));
          for(int _i0 = 0; _i0 < _len_mf0; _i0++) {
              mf[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          s5k5baf_try_cis_format(mf);
          free(mf);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_mf0 = 1;
          struct v4l2_mbus_framefmt * mf = (struct v4l2_mbus_framefmt *) malloc(_len_mf0*sizeof(struct v4l2_mbus_framefmt));
          for(int _i0 = 0; _i0 < _len_mf0; _i0++) {
              mf[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          mf[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          s5k5baf_try_cis_format(mf);
          free(mf);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
