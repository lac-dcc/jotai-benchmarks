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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u_int ;
struct fb_var_screeninfo {int xres; int xres_virtual; int bits_per_pixel; int yres; int accel_flags; int yres_virtual; int vmode; int yoffset; int hsync_len; int vsync_len; scalar_t__ xoffset; } ;
struct TYPE_3__ {int smem_len; scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; } ;
struct TYPE_4__ {int vram_half_sam; scalar_t__ screen_end; scalar_t__ using_vram; } ;

/* Variables and functions */
 int EINVAL ; 
 int FB_ACCELF_TEXT ; 
 int FB_VMODE_YWRAP ; 
 TYPE_2__ current_par ; 

__attribute__((used)) static int
acornfb_adjust_timing(struct fb_info *info, struct fb_var_screeninfo *var, u_int fontht)
{
	u_int font_line_len, sam_size, min_size, size, nr_y;

	/* xres must be even */
	var->xres = (var->xres + 1) & ~1;

	/*
	 * We don't allow xres_virtual to differ from xres
	 */
	var->xres_virtual = var->xres;
	var->xoffset = 0;

	if (current_par.using_vram)
		sam_size = current_par.vram_half_sam * 2;
	else
		sam_size = 16;

	/*
	 * Now, find a value for yres_virtual which allows
	 * us to do ywrap scrolling.  The value of
	 * yres_virtual must be such that the end of the
	 * displayable frame buffer must be aligned with
	 * the start of a font line.
	 */
	font_line_len = var->xres * var->bits_per_pixel * fontht / 8;
	min_size = var->xres * var->yres * var->bits_per_pixel / 8;

	/*
	 * If minimum screen size is greater than that we have
	 * available, reject it.
	 */
	if (min_size > info->fix.smem_len)
		return -EINVAL;

	/* Find int 'y', such that y * fll == s * sam < maxsize
	 * y = s * sam / fll; s = maxsize / sam
	 */
	for (size = info->fix.smem_len;
	     nr_y = size / font_line_len, min_size <= size;
	     size -= sam_size) {
		if (nr_y * font_line_len == size)
			break;
	}
	nr_y *= fontht;

	if (var->accel_flags & FB_ACCELF_TEXT) {
		if (min_size > size) {
			/*
			 * failed, use ypan
			 */
			size = info->fix.smem_len;
			var->yres_virtual = size / (font_line_len / fontht);
		} else
			var->yres_virtual = nr_y;
	} else if (var->yres_virtual > nr_y)
		var->yres_virtual = nr_y;

	current_par.screen_end = info->fix.smem_start + size;

	/*
	 * Fix yres & yoffset if needed.
	 */
	if (var->yres > var->yres_virtual)
		var->yres = var->yres_virtual;

	if (var->vmode & FB_VMODE_YWRAP) {
		if (var->yoffset > var->yres_virtual)
			var->yoffset = var->yres_virtual;
	} else {
		if (var->yoffset + var->yres > var->yres_virtual)
			var->yoffset = var->yres_virtual - var->yres;
	}

	/* hsync_len must be even */
	var->hsync_len = (var->hsync_len + 1) & ~1;

#if defined(HAS_VIDC20)
	/* left_margin must be even */
	if (var->left_margin & 1) {
		var->left_margin += 1;
		var->right_margin -= 1;
	}

	/* right_margin must be even */
	if (var->right_margin & 1)
		var->right_margin += 1;
#endif

	if (var->vsync_len < 1)
		var->vsync_len = 1;

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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 114
          // dynamic_instructions_O0 : 143720
          // ------------------------------- 
          // static_instructions_O1 : 83
          // dynamic_instructions_O1 : 93007
          // ------------------------------- 
          // static_instructions_O2 : 83
          // dynamic_instructions_O2 : 93007
          // ------------------------------- 
          // static_instructions_O3 : 83
          // dynamic_instructions_O3 : 93007
          // ------------------------------- 
          // static_instructions_Ofast : 83
          // dynamic_instructions_Ofast : 93007
          // ------------------------------- 
          // static_instructions_Os : 81
          // dynamic_instructions_Os : 93005
          // ------------------------------- 
          // static_instructions_Oz : 81
          // dynamic_instructions_Oz : 93005
          // ------------------------------- 

          int fontht = 100;
        
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.smem_start = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].accel_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = acornfb_adjust_timing(info,var,fontht);
          printf("%d\n", benchRet); 
          free(info);
          free(var);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 114
          // dynamic_instructions_O0 : 143720
          // ------------------------------- 
          // static_instructions_O1 : 83
          // dynamic_instructions_O1 : 93007
          // ------------------------------- 
          // static_instructions_O2 : 83
          // dynamic_instructions_O2 : 93007
          // ------------------------------- 
          // static_instructions_O3 : 83
          // dynamic_instructions_O3 : 93007
          // ------------------------------- 
          // static_instructions_Ofast : 83
          // dynamic_instructions_Ofast : 93007
          // ------------------------------- 
          // static_instructions_Os : 81
          // dynamic_instructions_Os : 93005
          // ------------------------------- 
          // static_instructions_Oz : 81
          // dynamic_instructions_Oz : 93005
          // ------------------------------- 

          int fontht = 255;
        
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.smem_start = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].accel_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = acornfb_adjust_timing(info,var,fontht);
          printf("%d\n", benchRet); 
          free(info);
          free(var);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 114
          // dynamic_instructions_O0 : 143720
          // ------------------------------- 
          // static_instructions_O1 : 83
          // dynamic_instructions_O1 : 93007
          // ------------------------------- 
          // static_instructions_O2 : 83
          // dynamic_instructions_O2 : 93007
          // ------------------------------- 
          // static_instructions_O3 : 83
          // dynamic_instructions_O3 : 93007
          // ------------------------------- 
          // static_instructions_Ofast : 83
          // dynamic_instructions_Ofast : 93007
          // ------------------------------- 
          // static_instructions_Os : 81
          // dynamic_instructions_Os : 93005
          // ------------------------------- 
          // static_instructions_Oz : 81
          // dynamic_instructions_Oz : 93005
          // ------------------------------- 

          int fontht = 10;
        
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.smem_start = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].accel_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = acornfb_adjust_timing(info,var,fontht);
          printf("%d\n", benchRet); 
          free(info);
          free(var);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 114
          // dynamic_instructions_O0 : 143720
          // ------------------------------- 
          // static_instructions_O1 : 83
          // dynamic_instructions_O1 : 93007
          // ------------------------------- 
          // static_instructions_O2 : 83
          // dynamic_instructions_O2 : 93007
          // ------------------------------- 
          // static_instructions_O3 : 83
          // dynamic_instructions_O3 : 93007
          // ------------------------------- 
          // static_instructions_Ofast : 83
          // dynamic_instructions_Ofast : 93007
          // ------------------------------- 
          // static_instructions_Os : 81
          // dynamic_instructions_Os : 93005
          // ------------------------------- 
          // static_instructions_Oz : 81
          // dynamic_instructions_Oz : 93005
          // ------------------------------- 

          int fontht = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.smem_start = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].accel_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = acornfb_adjust_timing(info,var,fontht);
          printf("%d\n", benchRet); 
          free(info);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
