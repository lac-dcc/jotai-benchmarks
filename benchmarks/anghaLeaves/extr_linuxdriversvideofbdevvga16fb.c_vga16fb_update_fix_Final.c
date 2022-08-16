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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int bits_per_pixel; int xres_virtual; scalar_t__ nonstd; } ;
struct TYPE_3__ {int line_length; void* type; int /*<<< orphan*/  type_aux; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;

/* Variables and functions */
 int /*<<< orphan*/  FB_AUX_TEXT_CGA ; 
 int /*<<< orphan*/  FB_AUX_VGA_PLANES_CFB8 ; 
 int /*<<< orphan*/  FB_AUX_VGA_PLANES_VGA4 ; 
 void* FB_TYPE_PACKED_PIXELS ; 
 void* FB_TYPE_TEXT ; 
 void* FB_TYPE_VGA_PLANES ; 

__attribute__((used)) static void vga16fb_update_fix(struct fb_info *info)
{
	if (info->var.bits_per_pixel == 4) {
		if (info->var.nonstd) {
			info->fix.type = FB_TYPE_PACKED_PIXELS;
			info->fix.line_length = info->var.xres_virtual / 2;
		} else {
			info->fix.type = FB_TYPE_VGA_PLANES;
			info->fix.type_aux = FB_AUX_VGA_PLANES_VGA4;
			info->fix.line_length = info->var.xres_virtual / 8;
		}
	} else if (info->var.bits_per_pixel == 0) {
		info->fix.type = FB_TYPE_TEXT;
		info->fix.type_aux = FB_AUX_TEXT_CGA;
		info->fix.line_length = info->var.xres_virtual / 4;
	} else {	/* 8bpp */
		if (info->var.nonstd) {
			info->fix.type = FB_TYPE_VGA_PLANES;
			info->fix.type_aux = FB_AUX_VGA_PLANES_CFB8;
			info->fix.line_length = info->var.xres_virtual / 4;
		} else {
			info->fix.type = FB_TYPE_PACKED_PIXELS;
			info->fix.line_length = info->var.xres_virtual;
		}
	}
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
        info[_i0].var.xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.type_aux = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vga16fb_update_fix(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
