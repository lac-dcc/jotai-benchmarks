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
struct mmpfb_info {int fb_size; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xoffset; int xres; int xres_virtual; int yoffset; int yres; int yres_virtual; } ;
struct fb_info {struct mmpfb_info* par; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mmpfb_check_var(struct fb_var_screeninfo *var,
		struct fb_info *info)
{
	struct mmpfb_info *fbi = info->par;

	if (var->bits_per_pixel == 8)
		return -EINVAL;
	/*
	 * Basic geometry sanity checks.
	 */
	if (var->xoffset + var->xres > var->xres_virtual)
		return -EINVAL;
	if (var->yoffset + var->yres > var->yres_virtual)
		return -EINVAL;

	/*
	 * Check size of framebuffer.
	 */
	if (var->xres_virtual * var->yres_virtual *
			(var->bits_per_pixel >> 3) > fbi->fb_size)
		return -EINVAL;

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
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 24
          // ------------------------------- 

          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__par0 = 1;
          info[_i0].par = (struct mmpfb_info *) malloc(_len_info__i0__par0*sizeof(struct mmpfb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              info[_i0].par->fb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mmpfb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 24
          // ------------------------------- 

          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__par0 = 1;
          info[_i0].par = (struct mmpfb_info *) malloc(_len_info__i0__par0*sizeof(struct mmpfb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              info[_i0].par->fb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mmpfb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 24
          // ------------------------------- 

          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__par0 = 1;
          info[_i0].par = (struct mmpfb_info *) malloc(_len_info__i0__par0*sizeof(struct mmpfb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              info[_i0].par->fb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mmpfb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
