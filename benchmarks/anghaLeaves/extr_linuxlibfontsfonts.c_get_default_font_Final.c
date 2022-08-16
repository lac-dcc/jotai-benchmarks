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
typedef  int u32 ;
struct font_desc {int pref; int height; int width; } ;

/* Variables and functions */
 struct font_desc** fonts ; 
 int num_fonts ; 

const struct font_desc *get_default_font(int xres, int yres, u32 font_w,
					 u32 font_h)
{
    int i, c, cc;
    const struct font_desc *f, *g;

    g = NULL;
    cc = -10000;
    for(i=0; i<num_fonts; i++) {
	f = fonts[i];
	c = f->pref;
#if defined(__mc68000__)
#ifdef CONFIG_FONT_PEARL_8x8
	if (MACH_IS_AMIGA && f->idx == PEARL8x8_IDX)
	    c = 100;
#endif
#ifdef CONFIG_FONT_6x11
	if (MACH_IS_MAC && xres < 640 && f->idx == VGA6x11_IDX)
	    c = 100;
#endif
#endif
	if ((yres < 400) == (f->height <= 8))
	    c += 1000;

	if ((font_w & (1 << (f->width - 1))) &&
	    (font_h & (1 << (f->height - 1))))
	    c += 1000;

	if (c > cc) {
	    cc = c;
	    g = f;
	}
    }
    return g;
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
          int xres = 100;
          int yres = 100;
          int font_w = 100;
          int font_h = 100;
          const struct font_desc * benchRet = get_default_font(xres,yres,font_w,font_h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int xres = 255;
          int yres = 255;
          int font_w = 255;
          int font_h = 255;
          const struct font_desc * benchRet = get_default_font(xres,yres,font_w,font_h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int xres = 10;
          int yres = 10;
          int font_w = 10;
          int font_h = 10;
          const struct font_desc * benchRet = get_default_font(xres,yres,font_w,font_h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
