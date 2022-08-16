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
typedef  int u8 ;
typedef  int u16 ;
struct v4l2_pix_format_mplane {int pixelformat; int width; int height; TYPE_1__* plane_fmt; } ;
struct TYPE_2__ {int bytesperline; } ;

/* Variables and functions */
#define  V4L2_PIX_FMT_NV12 135 
#define  V4L2_PIX_FMT_NV16 134 
#define  V4L2_PIX_FMT_NV21 133 
#define  V4L2_PIX_FMT_NV61 132 
#define  V4L2_PIX_FMT_UYVY 131 
#define  V4L2_PIX_FMT_VYUY 130 
#define  V4L2_PIX_FMT_YUYV 129 
#define  V4L2_PIX_FMT_YVYU 128 

__attribute__((used)) static void vfe_get_wm_sizes(struct v4l2_pix_format_mplane *pix, u8 plane,
			     u16 *width, u16 *height, u16 *bytesperline)
{
	switch (pix->pixelformat) {
	case V4L2_PIX_FMT_NV12:
	case V4L2_PIX_FMT_NV21:
		*width = pix->width;
		*height = pix->height;
		*bytesperline = pix->plane_fmt[0].bytesperline;
		if (plane == 1)
			*height /= 2;
		break;
	case V4L2_PIX_FMT_NV16:
	case V4L2_PIX_FMT_NV61:
		*width = pix->width;
		*height = pix->height;
		*bytesperline = pix->plane_fmt[0].bytesperline;
		break;
	case V4L2_PIX_FMT_YUYV:
	case V4L2_PIX_FMT_YVYU:
	case V4L2_PIX_FMT_VYUY:
	case V4L2_PIX_FMT_UYVY:
		*width = pix->width;
		*height = pix->height;
		*bytesperline = pix->plane_fmt[plane].bytesperline;
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
          int plane = 100;
          int _len_pix0 = 1;
          struct v4l2_pix_format_mplane * pix = (struct v4l2_pix_format_mplane *) malloc(_len_pix0*sizeof(struct v4l2_pix_format_mplane));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pix__i0__plane_fmt0 = 1;
          pix[_i0].plane_fmt = (struct TYPE_2__ *) malloc(_len_pix__i0__plane_fmt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pix__i0__plane_fmt0; _j0++) {
            pix[_i0].plane_fmt->bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_width0 = 1;
          int * width = (int *) malloc(_len_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width0; _i0++) {
            width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_height0 = 1;
          int * height = (int *) malloc(_len_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_height0; _i0++) {
            height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bytesperline0 = 1;
          int * bytesperline = (int *) malloc(_len_bytesperline0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bytesperline0; _i0++) {
            bytesperline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vfe_get_wm_sizes(pix,plane,width,height,bytesperline);
          for(int _aux = 0; _aux < _len_pix0; _aux++) {
          free(pix[_aux].plane_fmt);
          }
          free(pix);
          free(width);
          free(height);
          free(bytesperline);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
