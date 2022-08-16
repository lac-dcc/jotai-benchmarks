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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct vbe_mode_ib {int y_res; int bytes_per_scan_line; int bits_per_pixel; int red_len; int green_len; int blue_len; scalar_t__ rsvd_len; scalar_t__ rsvd_off; scalar_t__ blue_off; scalar_t__ green_off; scalar_t__ red_off; int /*<<< orphan*/  x_res; } ;
struct uvesafb_par {scalar_t__ ypan; } ;
struct TYPE_10__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_9__ {int length; scalar_t__ offset; } ;
struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int yres; int yres_virtual; int bits_per_pixel; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ yoffset; scalar_t__ xoffset; int /*<<< orphan*/  xres_virtual; int /*<<< orphan*/  xres; int /*<<< orphan*/  sync; int /*<<< orphan*/  vmode; } ;
struct TYPE_6__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; struct uvesafb_par* par; } ;

/* Variables and functions */
 int /*<<< orphan*/  FB_SYNC_VERT_HIGH_ACT ; 
 int /*<<< orphan*/  FB_VMODE_NONINTERLACED ; 

__attribute__((used)) static void uvesafb_setup_var(struct fb_var_screeninfo *var,
		struct fb_info *info, struct vbe_mode_ib *mode)
{
	struct uvesafb_par *par = info->par;

	var->vmode = FB_VMODE_NONINTERLACED;
	var->sync = FB_SYNC_VERT_HIGH_ACT;

	var->xres = mode->x_res;
	var->yres = mode->y_res;
	var->xres_virtual = mode->x_res;
	var->yres_virtual = (par->ypan) ?
			info->fix.smem_len / mode->bytes_per_scan_line :
			mode->y_res;
	var->xoffset = 0;
	var->yoffset = 0;
	var->bits_per_pixel = mode->bits_per_pixel;

	if (var->bits_per_pixel == 15)
		var->bits_per_pixel = 16;

	if (var->bits_per_pixel > 8) {
		var->red.offset    = mode->red_off;
		var->red.length    = mode->red_len;
		var->green.offset  = mode->green_off;
		var->green.length  = mode->green_len;
		var->blue.offset   = mode->blue_off;
		var->blue.length   = mode->blue_len;
		var->transp.offset = mode->rsvd_off;
		var->transp.length = mode->rsvd_len;
	} else {
		var->red.offset    = 0;
		var->green.offset  = 0;
		var->blue.offset   = 0;
		var->transp.offset = 0;

		var->red.length    = 8;
		var->green.length  = 8;
		var->blue.length   = 8;
		var->transp.length = 0;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].sync = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__par0 = 1;
          info[_i0].par = (struct uvesafb_par *) malloc(_len_info__i0__par0*sizeof(struct uvesafb_par));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
            info[_i0].par->ypan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mode0 = 1;
          struct vbe_mode_ib * mode = (struct vbe_mode_ib *) malloc(_len_mode0*sizeof(struct vbe_mode_ib));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].y_res = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].bytes_per_scan_line = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].red_len = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].green_len = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].blue_len = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].rsvd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].rsvd_off = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].blue_off = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].green_off = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].red_off = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].x_res = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uvesafb_setup_var(var,info,mode);
          free(var);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
