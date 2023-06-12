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

/* Type definitions */
typedef  scalar_t__ u_int ;
typedef  int u32 ;
struct fb_info {int* pseudo_palette; } ;

/* Variables and functions */
 scalar_t__ MAX_PALETTES ; 

__attribute__((used)) static int mbxfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
			   u_int trans, struct fb_info *info)
{
	u32 val, ret = 1;

	if (regno < MAX_PALETTES) {
		u32 *pal = info->pseudo_palette;

		val = (red & 0xf800) | ((green & 0xfc00) >> 5) |
			((blue & 0xf800) >> 11);
		pal[regno] = val;
		ret = 0;
	}

	return ret;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long regno = 100;
        
          long red = 100;
        
          long green = 100;
        
          long blue = 100;
        
          long trans = 100;
        
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__pseudo_palette0 = 1;
          info[_i0].pseudo_palette = (int *) malloc(_len_info__i0__pseudo_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__pseudo_palette0; _j0++) {
            info[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = mbxfb_setcolreg(regno,red,green,blue,trans,info);
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long regno = 255;
        
          long red = 255;
        
          long green = 255;
        
          long blue = 255;
        
          long trans = 255;
        
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__pseudo_palette0 = 1;
          info[_i0].pseudo_palette = (int *) malloc(_len_info__i0__pseudo_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__pseudo_palette0; _j0++) {
            info[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = mbxfb_setcolreg(regno,red,green,blue,trans,info);
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long regno = 10;
        
          long red = 10;
        
          long green = 10;
        
          long blue = 10;
        
          long trans = 10;
        
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__pseudo_palette0 = 1;
          info[_i0].pseudo_palette = (int *) malloc(_len_info__i0__pseudo_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__pseudo_palette0; _j0++) {
            info[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = mbxfb_setcolreg(regno,red,green,blue,trans,info);
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
