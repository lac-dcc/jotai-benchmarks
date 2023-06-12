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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_caps0 = 65025;
          struct fb_blit_caps * caps = (struct fb_blit_caps *) malloc(_len_caps0*sizeof(struct fb_blit_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
              caps[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          caps[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          caps[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          svga_get_caps(info,caps,var);
          free(info);
          free(caps);
          free(var);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_caps0 = 100;
          struct fb_blit_caps * caps = (struct fb_blit_caps *) malloc(_len_caps0*sizeof(struct fb_blit_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
              caps[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          caps[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          caps[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          svga_get_caps(info,caps,var);
          free(info);
          free(caps);
          free(var);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_caps0 = 1;
          struct fb_blit_caps * caps = (struct fb_blit_caps *) malloc(_len_caps0*sizeof(struct fb_blit_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
              caps[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          caps[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          caps[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
