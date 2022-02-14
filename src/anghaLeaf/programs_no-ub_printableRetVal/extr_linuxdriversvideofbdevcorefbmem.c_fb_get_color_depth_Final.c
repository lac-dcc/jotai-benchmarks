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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int length; scalar_t__ offset; } ;
struct TYPE_5__ {int length; scalar_t__ offset; } ;
struct TYPE_4__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {TYPE_3__ blue; TYPE_2__ red; TYPE_1__ green; } ;
struct fb_fix_screeninfo {scalar_t__ visual; } ;

/* Variables and functions */
 scalar_t__ FB_VISUAL_MONO01 ; 
 scalar_t__ FB_VISUAL_MONO10 ; 

int fb_get_color_depth(struct fb_var_screeninfo *var,
		       struct fb_fix_screeninfo *fix)
{
	int depth = 0;

	if (fix->visual == FB_VISUAL_MONO01 ||
	    fix->visual == FB_VISUAL_MONO10)
		depth = 1;
	else {
		if (var->green.length == var->blue.length &&
		    var->green.length == var->red.length &&
		    var->green.offset == var->blue.offset &&
		    var->green.offset == var->red.offset)
			depth = var->green.length;
		else
			depth = var->green.length + var->red.length +
				var->blue.length;
	}

	return depth;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var->blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var->green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fix0 = 1;
          struct fb_fix_screeninfo * fix = (struct fb_fix_screeninfo *) malloc(_len_fix0*sizeof(struct fb_fix_screeninfo));
          for(int _i0 = 0; _i0 < _len_fix0; _i0++) {
            fix->visual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fb_get_color_depth(var,fix);
          printf("%d\n", benchRet); 
          free(var);
          free(fix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
