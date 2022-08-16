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
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int yres_virtual; int sync; int yoffset; } ;
struct TYPE_3__ {int sync; int /*<<< orphan*/  mode; } ;
struct TYPE_4__ {TYPE_1__ tt; } ;
struct atafb_par {int yres_virtual; int next_line; scalar_t__ screen_base; TYPE_2__ hw; } ;

/* Variables and functions */
 int EINVAL ; 
 int FB_SYNC_EXT ; 
 int /*<<< orphan*/  TT_SHIFTER_STHIGH ; 
 int /*<<< orphan*/  TT_SHIFTER_STLOW ; 
 int /*<<< orphan*/  TT_SHIFTER_STMID ; 
 int /*<<< orphan*/  TT_SHIFTER_TTHIGH ; 
 int /*<<< orphan*/  TT_SHIFTER_TTLOW ; 
 int /*<<< orphan*/  TT_SHIFTER_TTMID ; 
 scalar_t__ mono_moni ; 
 scalar_t__ screen_base ; 
 int screen_len ; 
 int st_yres ; 
 int sttt_xres ; 
 int tt_yres ; 

__attribute__((used)) static int tt_decode_var(struct fb_var_screeninfo *var, struct atafb_par *par)
{
	int xres = var->xres;
	int yres = var->yres;
	int bpp = var->bits_per_pixel;
	int linelen;
	int yres_virtual = var->yres_virtual;

	if (mono_moni) {
		if (bpp > 1 || xres > sttt_xres * 2 || yres > tt_yres * 2)
			return -EINVAL;
		par->hw.tt.mode = TT_SHIFTER_TTHIGH;
		xres = sttt_xres * 2;
		yres = tt_yres * 2;
		bpp = 1;
	} else {
		if (bpp > 8 || xres > sttt_xres || yres > tt_yres)
			return -EINVAL;
		if (bpp > 4) {
			if (xres > sttt_xres / 2 || yres > tt_yres)
				return -EINVAL;
			par->hw.tt.mode = TT_SHIFTER_TTLOW;
			xres = sttt_xres / 2;
			yres = tt_yres;
			bpp = 8;
		} else if (bpp > 2) {
			if (xres > sttt_xres || yres > tt_yres)
				return -EINVAL;
			if (xres > sttt_xres / 2 || yres > st_yres / 2) {
				par->hw.tt.mode = TT_SHIFTER_TTMID;
				xres = sttt_xres;
				yres = tt_yres;
				bpp = 4;
			} else {
				par->hw.tt.mode = TT_SHIFTER_STLOW;
				xres = sttt_xres / 2;
				yres = st_yres / 2;
				bpp = 4;
			}
		} else if (bpp > 1) {
			if (xres > sttt_xres || yres > st_yres / 2)
				return -EINVAL;
			par->hw.tt.mode = TT_SHIFTER_STMID;
			xres = sttt_xres;
			yres = st_yres / 2;
			bpp = 2;
		} else if (var->xres > sttt_xres || var->yres > st_yres) {
			return -EINVAL;
		} else {
			par->hw.tt.mode = TT_SHIFTER_STHIGH;
			xres = sttt_xres;
			yres = st_yres;
			bpp = 1;
		}
	}
	if (yres_virtual <= 0)
		yres_virtual = 0;
	else if (yres_virtual < yres)
		yres_virtual = yres;
	if (var->sync & FB_SYNC_EXT)
		par->hw.tt.sync = 0;
	else
		par->hw.tt.sync = 1;
	linelen = xres * bpp / 8;
	if (yres_virtual * linelen > screen_len && screen_len)
		return -EINVAL;
	if (yres * linelen > screen_len && screen_len)
		return -EINVAL;
	if (var->yoffset + yres > yres_virtual && yres_virtual)
		return -EINVAL;
	par->yres_virtual = yres_virtual;
	par->screen_base = screen_base + var->yoffset * linelen;
	par->next_line = linelen;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].sync = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          struct atafb_par * par = (struct atafb_par *) malloc(_len_par0*sizeof(struct atafb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].next_line = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].screen_base = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].hw.tt.sync = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].hw.tt.mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tt_decode_var(var,par);
          printf("%d\n", benchRet); 
          free(var);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
