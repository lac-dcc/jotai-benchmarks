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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; scalar_t__ priv; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  field; int /*<<< orphan*/  pixelformat; } ;
struct TYPE_3__ {int width; int height; scalar_t__ interlaced; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct skeleton {scalar_t__ input; int std; TYPE_2__ timings; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_COLORSPACE_REC709 ; 
 int /*<<< orphan*/  V4L2_COLORSPACE_SMPTE170M ; 
 int /*<<< orphan*/  V4L2_FIELD_ALTERNATE ; 
 int /*<<< orphan*/  V4L2_FIELD_INTERLACED ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 
 int /*<<< orphan*/  V4L2_PIX_FMT_YUYV ; 
 int V4L2_STD_525_60 ; 

__attribute__((used)) static void skeleton_fill_pix_format(struct skeleton *skel,
				     struct v4l2_pix_format *pix)
{
	pix->pixelformat = V4L2_PIX_FMT_YUYV;
	if (skel->input == 0) {
		/* S-Video input */
		pix->width = 720;
		pix->height = (skel->std & V4L2_STD_525_60) ? 480 : 576;
		pix->field = V4L2_FIELD_INTERLACED;
		pix->colorspace = V4L2_COLORSPACE_SMPTE170M;
	} else {
		/* HDMI input */
		pix->width = skel->timings.bt.width;
		pix->height = skel->timings.bt.height;
		if (skel->timings.bt.interlaced) {
			pix->field = V4L2_FIELD_ALTERNATE;
			pix->height /= 2;
		} else {
			pix->field = V4L2_FIELD_NONE;
		}
		pix->colorspace = V4L2_COLORSPACE_REC709;
	}

	/*
	 * The YUYV format is four bytes for every two pixels, so bytesperline
	 * is width * 2.
	 */
	pix->bytesperline = pix->width * 2;
	pix->sizeimage = pix->bytesperline * pix->height;
	pix->priv = 0;
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
          int _len_skel0 = 1;
          struct skeleton * skel = (struct skeleton *) malloc(_len_skel0*sizeof(struct skeleton));
          for(int _i0 = 0; _i0 < _len_skel0; _i0++) {
            skel[_i0].input = ((-2 * (next_i()%2)) + 1) * next_i();
        skel[_i0].std = ((-2 * (next_i()%2)) + 1) * next_i();
        skel[_i0].timings.bt.width = ((-2 * (next_i()%2)) + 1) * next_i();
        skel[_i0].timings.bt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        skel[_i0].timings.bt.interlaced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix0 = 1;
          struct v4l2_pix_format * pix = (struct v4l2_pix_format *) malloc(_len_pix0*sizeof(struct v4l2_pix_format));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].priv = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skeleton_fill_pix_format(skel,pix);
          free(skel);
          free(pix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
