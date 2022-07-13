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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {scalar_t__ length; int offset; } ;
struct TYPE_5__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ red; TYPE_2__ transp; TYPE_1__ green; } ;

/* Variables and functions */
 int EINVAL ; 
 int PIXFMT_BGR565 ; 
 int PIXFMT_BGR888PACK ; 
 int PIXFMT_BGR888UNPACK ; 
 int PIXFMT_BGRA888 ; 
 int PIXFMT_PSEUDOCOLOR ; 
 int PIXFMT_RGB565 ; 
 int PIXFMT_RGB888PACK ; 
 int PIXFMT_RGB888UNPACK ; 
 int PIXFMT_RGBA888 ; 
 int PIXFMT_UYVY ; 
 int PIXFMT_VYUY ; 
 int PIXFMT_YUV420P ; 
 int PIXFMT_YUV422P ; 
 int PIXFMT_YUYV ; 
 int PIXFMT_YVU420P ; 
 int PIXFMT_YVU422P ; 

__attribute__((used)) static int var_to_pixfmt(struct fb_var_screeninfo *var)
{
	/*
	 * Pseudocolor mode?
	 */
	if (var->bits_per_pixel == 8)
		return PIXFMT_PSEUDOCOLOR;

	/*
	 * Check for YUV422PLANAR.
	 */
	if (var->bits_per_pixel == 16 && var->red.length == 8 &&
			var->green.length == 4 && var->blue.length == 4) {
		if (var->green.offset >= var->blue.offset)
			return PIXFMT_YUV422P;
		else
			return PIXFMT_YVU422P;
	}

	/*
	 * Check for YUV420PLANAR.
	 */
	if (var->bits_per_pixel == 12 && var->red.length == 8 &&
			var->green.length == 2 && var->blue.length == 2) {
		if (var->green.offset >= var->blue.offset)
			return PIXFMT_YUV420P;
		else
			return PIXFMT_YVU420P;
	}

	/*
	 * Check for YUV422PACK.
	 */
	if (var->bits_per_pixel == 16 && var->red.length == 16 &&
			var->green.length == 16 && var->blue.length == 16) {
		if (var->red.offset == 0)
			return PIXFMT_YUYV;
		else if (var->green.offset >= var->blue.offset)
			return PIXFMT_UYVY;
		else
			return PIXFMT_VYUY;
	}

	/*
	 * Check for 565/1555.
	 */
	if (var->bits_per_pixel == 16 && var->red.length <= 5 &&
			var->green.length <= 6 && var->blue.length <= 5) {
		if (var->transp.length == 0) {
			if (var->red.offset >= var->blue.offset)
				return PIXFMT_RGB565;
			else
				return PIXFMT_BGR565;
		}
	}

	/*
	 * Check for 888/A888.
	 */
	if (var->bits_per_pixel <= 32 && var->red.length <= 8 &&
			var->green.length <= 8 && var->blue.length <= 8) {
		if (var->bits_per_pixel == 24 && var->transp.length == 0) {
			if (var->red.offset >= var->blue.offset)
				return PIXFMT_RGB888PACK;
			else
				return PIXFMT_BGR888PACK;
		}

		if (var->bits_per_pixel == 32 && var->transp.offset == 24) {
			if (var->red.offset >= var->blue.offset)
				return PIXFMT_RGBA888;
			else
				return PIXFMT_BGRA888;
		} else {
			if (var->red.offset >= var->blue.offset)
				return PIXFMT_RGB888UNPACK;
			else
				return PIXFMT_BGR888UNPACK;
		}

		/* fall through */
	}

	return -EINVAL;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = var_to_pixfmt(var);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = var_to_pixfmt(var);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = var_to_pixfmt(var);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
