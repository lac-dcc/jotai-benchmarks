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

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct mode_registers {int /*<<< orphan*/  bpp24_133; int /*<<< orphan*/  bpp16_133; int /*<<< orphan*/  bpp8_133; int /*<<< orphan*/  bpp24_100; int /*<<< orphan*/  bpp16_100; int /*<<< orphan*/  bpp8_100; } ;
struct i810fb_par {int mem_freq; struct mode_registers regs; } ;
struct fb_var_screeninfo {int bits_per_pixel; } ;

/* Variables and functions */

u32 i810_get_watermark(struct fb_var_screeninfo *var,
		       struct i810fb_par *par)
{
	struct mode_registers *params = &par->regs;
	u32 wmark = 0;
	
	if (par->mem_freq == 100) {
		switch (var->bits_per_pixel) {
		case 8:
			wmark = params->bpp8_100;
			break;
		case 16:
			wmark = params->bpp16_100;
			break;
		case 24:
		case 32:
			wmark = params->bpp24_100;
		}
	} else {					
		switch (var->bits_per_pixel) {
		case 8:
			wmark = params->bpp8_133;
			break;
		case 16:
			wmark = params->bpp16_133;
			break;
		case 24:
		case 32:
			wmark = params->bpp24_133;
		}
	}
	return wmark;
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
          }
          int _len_par0 = 1;
          struct i810fb_par * par = (struct i810fb_par *) malloc(_len_par0*sizeof(struct i810fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].mem_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].regs.bpp24_133 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].regs.bpp16_133 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].regs.bpp8_133 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].regs.bpp24_100 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].regs.bpp16_100 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].regs.bpp8_100 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i810_get_watermark(var,par);
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
