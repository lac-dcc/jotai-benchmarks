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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int u32 ;
struct TYPE_5__ {int length; } ;
struct TYPE_6__ {int bits_per_pixel; TYPE_2__ green; } ;
struct TYPE_4__ {unsigned int len; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_3__ var; TYPE_1__ cmap; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int vivid_fb_setcolreg(unsigned regno, unsigned red, unsigned green,
				unsigned blue, unsigned transp,
				struct fb_info *info)
{
	u32 color, *palette;

	if (regno >= info->cmap.len)
		return -EINVAL;

	color = ((transp & 0xFF00) << 16) | ((red & 0xFF00) << 8) |
		 (green & 0xFF00) | ((blue & 0xFF00) >> 8);
	if (regno >= 16)
		return -EINVAL;

	palette = info->pseudo_palette;
	if (info->var.bits_per_pixel == 16) {
		switch (info->var.green.length) {
		case 6:
			color = (red & 0xf800) |
				((green & 0xfc00) >> 5) |
				((blue & 0xf800) >> 11);
			break;
		case 5:
			color = ((red & 0xf800) >> 1) |
				((green & 0xf800) >> 6) |
				((blue & 0xf800) >> 11) |
				(transp ? 0x8000 : 0);
			break;
		}
	}
	palette[regno] = color;
	return 0;
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
          unsigned int regno = 100;
          unsigned int red = 100;
          unsigned int green = 100;
          unsigned int blue = 100;
          unsigned int transp = 100;
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__pseudo_palette0 = 1;
          info[_i0].pseudo_palette = (unsigned int *) malloc(_len_info__i0__pseudo_palette0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_info__i0__pseudo_palette0; _j0++) {
            info[_i0].pseudo_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].cmap.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vivid_fb_setcolreg(regno,red,green,blue,transp,info);
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
