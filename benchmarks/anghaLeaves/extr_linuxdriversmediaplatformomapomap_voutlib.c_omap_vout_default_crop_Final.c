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
struct v4l2_rect {int width; int height; int left; int top; } ;
struct v4l2_pix_format {int width; int height; } ;
struct TYPE_2__ {int width; int height; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;

/* Variables and functions */

void omap_vout_default_crop(struct v4l2_pix_format *pix,
		  struct v4l2_framebuffer *fbuf, struct v4l2_rect *crop)
{
	crop->width = (pix->width < fbuf->fmt.width) ?
		pix->width : fbuf->fmt.width;
	crop->height = (pix->height < fbuf->fmt.height) ?
		pix->height : fbuf->fmt.height;
	crop->width &= ~1;
	crop->height &= ~1;
	crop->left = ((pix->width - crop->width) >> 1) & ~1;
	crop->top = ((pix->height - crop->height) >> 1) & ~1;
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
          int _len_pix0 = 1;
          struct v4l2_pix_format * pix = (struct v4l2_pix_format *) malloc(_len_pix0*sizeof(struct v4l2_pix_format));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fbuf0 = 1;
          struct v4l2_framebuffer * fbuf = (struct v4l2_framebuffer *) malloc(_len_fbuf0*sizeof(struct v4l2_framebuffer));
          for(int _i0 = 0; _i0 < _len_fbuf0; _i0++) {
            fbuf[_i0].fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fbuf[_i0].fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crop0 = 1;
          struct v4l2_rect * crop = (struct v4l2_rect *) malloc(_len_crop0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_crop0; _i0++) {
            crop[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        crop[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        crop[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        crop[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          omap_vout_default_crop(pix,fbuf,crop);
          free(pix);
          free(fbuf);
          free(crop);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
