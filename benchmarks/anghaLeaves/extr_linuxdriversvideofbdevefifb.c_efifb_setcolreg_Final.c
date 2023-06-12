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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int u32 ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {int length; unsigned int offset; } ;
struct TYPE_7__ {int length; unsigned int offset; } ;
struct TYPE_10__ {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {unsigned int len; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; TYPE_1__ cmap; } ;

/* Variables and functions */

__attribute__((used)) static int efifb_setcolreg(unsigned regno, unsigned red, unsigned green,
			   unsigned blue, unsigned transp,
			   struct fb_info *info)
{
	/*
	 *  Set a single color register. The values supplied are
	 *  already rounded down to the hardware's capabilities
	 *  (according to the entries in the `var' structure). Return
	 *  != 0 for invalid regno.
	 */

	if (regno >= info->cmap.len)
		return 1;

	if (regno < 16) {
		red   >>= 16 - info->var.red.length;
		green >>= 16 - info->var.green.length;
		blue  >>= 16 - info->var.blue.length;
		((u32 *)(info->pseudo_palette))[regno] =
			(red   << info->var.red.offset)   |
			(green << info->var.green.offset) |
			(blue  << info->var.blue.offset);
	}
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int regno = 100;
        
          unsigned int red = 100;
        
          unsigned int green = 100;
        
          unsigned int blue = 100;
        
          unsigned int transp = 100;
        
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          info[_i0].pseudo_palette = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].cmap.len = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = efifb_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int regno = 255;
        
          unsigned int red = 255;
        
          unsigned int green = 255;
        
          unsigned int blue = 255;
        
          unsigned int transp = 255;
        
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          info[_i0].pseudo_palette = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].cmap.len = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = efifb_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          unsigned int regno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int red = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int green = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int blue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int transp = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          info[_i0].pseudo_palette = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].cmap.len = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = efifb_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
