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
struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct TYPE_9__ {int /*<<< orphan*/  visual; } ;
struct fb_info {TYPE_5__ var; TYPE_4__ fix; } ;

/* Variables and functions */
 int /*<<< orphan*/  FB_VISUAL_TRUECOLOR ; 

__attribute__((used)) static inline void
s1d13xxxfb_setup_truecolour(struct fb_info *info)
{
	info->fix.visual = FB_VISUAL_TRUECOLOR;
	info->var.bits_per_pixel = 16;

	info->var.red.length = 5;
	info->var.red.offset = 11;

	info->var.green.length = 6;
	info->var.green.offset = 5;

	info->var.blue.length = 5;
	info->var.blue.offset = 0;
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

    // int-bounds
    case 0:
    {
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s1d13xxxfb_setup_truecolour(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
