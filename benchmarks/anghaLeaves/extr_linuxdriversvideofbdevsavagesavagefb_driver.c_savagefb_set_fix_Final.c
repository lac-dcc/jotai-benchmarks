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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int line_length; int xpanstep; int /*<<< orphan*/  visual; } ;
struct TYPE_3__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;

/* Variables and functions */
 int /*<<< orphan*/  FB_VISUAL_PSEUDOCOLOR ; 
 int /*<<< orphan*/  FB_VISUAL_TRUECOLOR ; 

__attribute__((used)) static void savagefb_set_fix(struct fb_info *info)
{
	info->fix.line_length = info->var.xres_virtual *
		info->var.bits_per_pixel / 8;

	if (info->var.bits_per_pixel == 8) {
		info->fix.visual      = FB_VISUAL_PSEUDOCOLOR;
		info->fix.xpanstep    = 4;
	} else {
		info->fix.visual      = FB_VISUAL_TRUECOLOR;
		info->fix.xpanstep    = 2;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.xpanstep = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          savagefb_set_fix(info);
          free(info);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.xpanstep = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          savagefb_set_fix(info);
          free(info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.xpanstep = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
        
          info[_i0].var.xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          savagefb_set_fix(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
