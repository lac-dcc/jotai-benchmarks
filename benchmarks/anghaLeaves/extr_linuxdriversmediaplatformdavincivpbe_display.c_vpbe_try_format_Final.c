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
struct vpbe_display {struct vpbe_device* vpbe_dev; } ;
struct TYPE_2__ {int xres; int yres; scalar_t__ interlaced; } ;
struct vpbe_device {TYPE_1__ current_timings; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; scalar_t__ field; int width; int height; int bytesperline; int sizeimage; } ;

/* Variables and functions */
 scalar_t__ V4L2_FIELD_INTERLACED ; 
 scalar_t__ V4L2_FIELD_NONE ; 
 scalar_t__ V4L2_PIX_FMT_NV12 ; 
 scalar_t__ V4L2_PIX_FMT_UYVY ; 

__attribute__((used)) static int vpbe_try_format(struct vpbe_display *disp_dev,
			struct v4l2_pix_format *pixfmt, int check)
{
	struct vpbe_device *vpbe_dev = disp_dev->vpbe_dev;
	int min_height = 1;
	int min_width = 32;
	int max_height;
	int max_width;
	int bpp;

	if ((pixfmt->pixelformat != V4L2_PIX_FMT_UYVY) &&
	    (pixfmt->pixelformat != V4L2_PIX_FMT_NV12))
		/* choose default as V4L2_PIX_FMT_UYVY */
		pixfmt->pixelformat = V4L2_PIX_FMT_UYVY;

	/* Check the field format */
	if ((pixfmt->field != V4L2_FIELD_INTERLACED) &&
		(pixfmt->field != V4L2_FIELD_NONE)) {
		if (vpbe_dev->current_timings.interlaced)
			pixfmt->field = V4L2_FIELD_INTERLACED;
		else
			pixfmt->field = V4L2_FIELD_NONE;
	}

	if (pixfmt->field == V4L2_FIELD_INTERLACED)
		min_height = 2;

	if (pixfmt->pixelformat == V4L2_PIX_FMT_NV12)
		bpp = 1;
	else
		bpp = 2;

	max_width = vpbe_dev->current_timings.xres;
	max_height = vpbe_dev->current_timings.yres;

	min_width /= bpp;

	if (!pixfmt->width || (pixfmt->width < min_width) ||
		(pixfmt->width > max_width)) {
		pixfmt->width = vpbe_dev->current_timings.xres;
	}

	if (!pixfmt->height || (pixfmt->height  < min_height) ||
		(pixfmt->height  > max_height)) {
		pixfmt->height = vpbe_dev->current_timings.yres;
	}

	if (pixfmt->bytesperline < (pixfmt->width * bpp))
		pixfmt->bytesperline = pixfmt->width * bpp;

	/* Make the bytesperline 32 byte aligned */
	pixfmt->bytesperline = ((pixfmt->width * bpp + 31) & ~31);

	if (pixfmt->pixelformat == V4L2_PIX_FMT_NV12)
		pixfmt->sizeimage = pixfmt->bytesperline * pixfmt->height +
				(pixfmt->bytesperline * pixfmt->height >> 1);
	else
		pixfmt->sizeimage = pixfmt->bytesperline * pixfmt->height;

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
          int check = 100;
          int _len_disp_dev0 = 1;
          struct vpbe_display * disp_dev = (struct vpbe_display *) malloc(_len_disp_dev0*sizeof(struct vpbe_display));
          for(int _i0 = 0; _i0 < _len_disp_dev0; _i0++) {
              int _len_disp_dev__i0__vpbe_dev0 = 1;
          disp_dev[_i0].vpbe_dev = (struct vpbe_device *) malloc(_len_disp_dev__i0__vpbe_dev0*sizeof(struct vpbe_device));
          for(int _j0 = 0; _j0 < _len_disp_dev__i0__vpbe_dev0; _j0++) {
            disp_dev[_i0].vpbe_dev->current_timings.xres = ((-2 * (next_i()%2)) + 1) * next_i();
        disp_dev[_i0].vpbe_dev->current_timings.yres = ((-2 * (next_i()%2)) + 1) * next_i();
        disp_dev[_i0].vpbe_dev->current_timings.interlaced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pixfmt0 = 1;
          struct v4l2_pix_format * pixfmt = (struct v4l2_pix_format *) malloc(_len_pixfmt0*sizeof(struct v4l2_pix_format));
          for(int _i0 = 0; _i0 < _len_pixfmt0; _i0++) {
            pixfmt[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        pixfmt[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        pixfmt[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        pixfmt[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        pixfmt[_i0].bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        pixfmt[_i0].sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpbe_try_format(disp_dev,pixfmt,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_disp_dev0; _aux++) {
          free(disp_dev[_aux].vpbe_dev);
          }
          free(disp_dev);
          free(pixfmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
