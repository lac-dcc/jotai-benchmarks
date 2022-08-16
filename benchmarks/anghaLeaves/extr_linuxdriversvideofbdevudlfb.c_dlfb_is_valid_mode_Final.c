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
struct fb_videomode {int xres; int yres; } ;
struct dlfb_data {int sku_pixel_limit; } ;

/* Variables and functions */

__attribute__((used)) static int dlfb_is_valid_mode(struct fb_videomode *mode, struct dlfb_data *dlfb)
{
	if (mode->xres * mode->yres > dlfb->sku_pixel_limit)
		return 0;

	return 1;
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
          int _len_mode0 = 1;
          struct fb_videomode * mode = (struct fb_videomode *) malloc(_len_mode0*sizeof(struct fb_videomode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dlfb0 = 1;
          struct dlfb_data * dlfb = (struct dlfb_data *) malloc(_len_dlfb0*sizeof(struct dlfb_data));
          for(int _i0 = 0; _i0 < _len_dlfb0; _i0++) {
            dlfb[_i0].sku_pixel_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dlfb_is_valid_mode(mode,dlfb);
          printf("%d\n", benchRet); 
          free(mode);
          free(dlfb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
