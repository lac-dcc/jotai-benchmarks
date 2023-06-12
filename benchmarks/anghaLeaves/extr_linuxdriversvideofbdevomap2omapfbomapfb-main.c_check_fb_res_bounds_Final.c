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
struct fb_var_screeninfo {int xres_virtual; int xres; int yres_virtual; int yres; } ;

/* Variables and functions */
 int EINVAL ; 
 int OMAPFB_PLANE_XRES_MIN ; 
 int OMAPFB_PLANE_YRES_MIN ; 

__attribute__((used)) static int check_fb_res_bounds(struct fb_var_screeninfo *var)
{
	int xres_min = OMAPFB_PLANE_XRES_MIN;
	int xres_max = 2048;
	int yres_min = OMAPFB_PLANE_YRES_MIN;
	int yres_max = 2048;

	/* XXX: some applications seem to set virtual res to 0. */
	if (var->xres_virtual == 0)
		var->xres_virtual = var->xres;

	if (var->yres_virtual == 0)
		var->yres_virtual = var->yres;

	if (var->xres_virtual < xres_min || var->yres_virtual < yres_min)
		return -EINVAL;

	if (var->xres < xres_min)
		var->xres = xres_min;
	if (var->yres < yres_min)
		var->yres = yres_min;
	if (var->xres > xres_max)
		var->xres = xres_max;
	if (var->yres > yres_max)
		var->yres = yres_max;

	if (var->xres > var->xres_virtual)
		var->xres = var->xres_virtual;
	if (var->yres > var->yres_virtual)
		var->yres = var->yres_virtual;

	return 0;
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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_fb_res_bounds(var);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_fb_res_bounds(var);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_fb_res_bounds(var);
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
