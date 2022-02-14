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

/* Type definitions */
typedef  int u32 ;
struct fb_var_screeninfo {int bits_per_pixel; } ;
struct fb_info {int dummy; } ;
struct fb_blit_caps {int x; int y; int len; } ;

/* Variables and functions */

void svga_get_caps(struct fb_info *info, struct fb_blit_caps *caps,
		   struct fb_var_screeninfo *var)
{
	if (var->bits_per_pixel == 0) {
		/* can only support 256 8x16 bitmap */
		caps->x = 1 << (8 - 1);
		caps->y = 1 << (16 - 1);
		caps->len = 256;
	} else {
		caps->x = (var->bits_per_pixel == 4) ? 1 << (8 - 1) : ~(u32)0;
		caps->y = ~(u32)0;
		caps->len = ~(u32)0;
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

    // big-arr
    case 0:
    {
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_caps0 = 1;
          struct fb_blit_caps * caps = (struct fb_blit_caps *) malloc(_len_caps0*sizeof(struct fb_blit_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps->x = ((-2 * (next_i()%2)) + 1) * next_i();
        caps->y = ((-2 * (next_i()%2)) + 1) * next_i();
        caps->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          svga_get_caps(info,caps,var);
          free(info);
          free(caps);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
