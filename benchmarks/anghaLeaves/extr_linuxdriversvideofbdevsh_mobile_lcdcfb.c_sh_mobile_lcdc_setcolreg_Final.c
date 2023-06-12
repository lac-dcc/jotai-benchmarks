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
typedef  int u_int ;
typedef  int u32 ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {int* pseudo_palette; TYPE_5__ var; } ;

/* Variables and functions */
 int EINVAL ; 
 int PALETTE_NR ; 

__attribute__((used)) static int sh_mobile_lcdc_setcolreg(u_int regno,
				    u_int red, u_int green, u_int blue,
				    u_int transp, struct fb_info *info)
{
	u32 *palette = info->pseudo_palette;

	if (regno >= PALETTE_NR)
		return -EINVAL;

	/* only FB_VISUAL_TRUECOLOR supported */

	red >>= 16 - info->var.red.length;
	green >>= 16 - info->var.green.length;
	blue >>= 16 - info->var.blue.length;
	transp >>= 16 - info->var.transp.length;

	palette[regno] = (red << info->var.red.offset) |
	  (green << info->var.green.offset) |
	  (blue << info->var.blue.offset) |
	  (transp << info->var.transp.offset);

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int regno = 100;
        
          int red = 100;
        
          int green = 100;
        
          int blue = 100;
        
          int transp = 100;
        
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__pseudo_palette0 = 1;
          info[_i0].pseudo_palette = (int *) malloc(_len_info__i0__pseudo_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__pseudo_palette0; _j0++) {
            info[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          info[_i0].var.transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = sh_mobile_lcdc_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].pseudo_palette);
          }
          free(info);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int regno = 255;
        
          int red = 255;
        
          int green = 255;
        
          int blue = 255;
        
          int transp = 255;
        
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__pseudo_palette0 = 1;
          info[_i0].pseudo_palette = (int *) malloc(_len_info__i0__pseudo_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__pseudo_palette0; _j0++) {
            info[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          info[_i0].var.transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = sh_mobile_lcdc_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].pseudo_palette);
          }
          free(info);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int regno = 10;
        
          int red = 10;
        
          int green = 10;
        
          int blue = 10;
        
          int transp = 10;
        
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__pseudo_palette0 = 1;
          info[_i0].pseudo_palette = (int *) malloc(_len_info__i0__pseudo_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__pseudo_palette0; _j0++) {
            info[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          info[_i0].var.transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = sh_mobile_lcdc_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].pseudo_palette);
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
