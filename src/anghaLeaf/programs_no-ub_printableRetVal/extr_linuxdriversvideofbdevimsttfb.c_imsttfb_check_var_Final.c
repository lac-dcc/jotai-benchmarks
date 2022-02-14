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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int length; scalar_t__ msb_right; int /*<<< orphan*/  offset; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_10__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; int xres; int yres_virtual; int yres; int vmode; int height; int width; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; TYPE_3__ transp; TYPE_2__ blue; TYPE_1__ green; TYPE_5__ red; scalar_t__ nonstd; } ;
struct TYPE_9__ {int smem_len; } ;
struct fb_info {TYPE_4__ fix; } ;
typedef  int __u32 ;

/* Variables and functions */
 int EINVAL ; 
 int FB_VMODE_MASK ; 
 int FB_VMODE_NONINTERLACED ; 
 int PAGE_SIZE ; 

__attribute__((used)) static int
imsttfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
{
	if ((var->bits_per_pixel != 8 && var->bits_per_pixel != 16
	    && var->bits_per_pixel != 24 && var->bits_per_pixel != 32)
	    || var->xres_virtual < var->xres || var->yres_virtual < var->yres
	    || var->nonstd
	    || (var->vmode & FB_VMODE_MASK) != FB_VMODE_NONINTERLACED)
		return -EINVAL;

	if ((var->xres * var->yres) * (var->bits_per_pixel >> 3) > info->fix.smem_len
	    || (var->xres_virtual * var->yres_virtual) * (var->bits_per_pixel >> 3) > info->fix.smem_len)
		return -EINVAL;

	switch (var->bits_per_pixel) {
		case 8:
			var->red.offset = 0;
			var->red.length = 8;
			var->green.offset = 0;
			var->green.length = 8;
			var->blue.offset = 0;
			var->blue.length = 8;
			var->transp.offset = 0;
			var->transp.length = 0;
			break;
		case 16:	/* RGB 555 or 565 */
			if (var->green.length != 6)
				var->red.offset = 10;
			var->red.length = 5;
			var->green.offset = 5;
			if (var->green.length != 6)
				var->green.length = 5;
			var->blue.offset = 0;
			var->blue.length = 5;
			var->transp.offset = 0;
			var->transp.length = 0;
			break;
		case 24:	/* RGB 888 */
			var->red.offset = 16;
			var->red.length = 8;
			var->green.offset = 8;
			var->green.length = 8;
			var->blue.offset = 0;
			var->blue.length = 8;
			var->transp.offset = 0;
			var->transp.length = 0;
			break;
		case 32:	/* RGBA 8888 */
			var->red.offset = 16;
			var->red.length = 8;
			var->green.offset = 8;
			var->green.length = 8;
			var->blue.offset = 0;
			var->blue.length = 8;
			var->transp.offset = 24;
			var->transp.length = 8;
			break;
	}

	if (var->yres == var->yres_virtual) {
		__u32 vram = (info->fix.smem_len - (PAGE_SIZE << 2));
		var->yres_virtual = ((vram << 3) / var->bits_per_pixel) / var->xres_virtual;
		if (var->yres_virtual < var->yres)
			var->yres_virtual = var->yres;
	}

	var->red.msb_right = 0;
	var->green.msb_right = 0;
	var->blue.msb_right = 0;
	var->transp.msb_right = 0;
	var->height = -1;
	var->width = -1;
	var->vmode = FB_VMODE_NONINTERLACED;
	var->left_margin = var->right_margin = 16;
	var->upper_margin = var->lower_margin = 16;
	var->hsync_len = var->vsync_len = 8;
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

    // big-arr
    case 0:
    {
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var->vmode = ((-2 * (next_i()%2)) + 1) * next_i();
        var->height = ((-2 * (next_i()%2)) + 1) * next_i();
        var->width = ((-2 * (next_i()%2)) + 1) * next_i();
        var->left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var->hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var->vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var->transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->transp.msb_right = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.msb_right = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.msb_right = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.msb_right = ((-2 * (next_i()%2)) + 1) * next_i();
        var->nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info->fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = imsttfb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
