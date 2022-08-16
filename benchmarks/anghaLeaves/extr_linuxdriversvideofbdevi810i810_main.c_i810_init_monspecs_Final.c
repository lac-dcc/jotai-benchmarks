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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int vfmax; int vfmin; scalar_t__ hfmin; scalar_t__ hfmax; } ;
struct fb_info {TYPE_1__ monspecs; } ;

/* Variables and functions */
 scalar_t__ HFMAX ; 
 scalar_t__ HFMIN ; 
 scalar_t__ IS_DVT ; 
 int VFMAX ; 
 int VFMIN ; 
 scalar_t__ hsync1 ; 
 scalar_t__ hsync2 ; 
 int vsync1 ; 
 int vsync2 ; 

__attribute__((used)) static void i810_init_monspecs(struct fb_info *info)
{
	if (!hsync1)
		hsync1 = HFMIN;
	if (!hsync2) 
		hsync2 = HFMAX;
	if (!info->monspecs.hfmax)
		info->monspecs.hfmax = hsync2;
	if (!info->monspecs.hfmin)
		info->monspecs.hfmin = hsync1;
	if (hsync2 < hsync1)
		info->monspecs.hfmin = hsync2;

	if (!vsync1)
		vsync1 = VFMIN;
	if (!vsync2) 
		vsync2 = VFMAX;
	if (IS_DVT && vsync1 < 60)
		vsync1 = 60;
	if (!info->monspecs.vfmax)
		info->monspecs.vfmax = vsync2;
	if (!info->monspecs.vfmin)
		info->monspecs.vfmin = vsync1;
	if (vsync2 < vsync1) 
		info->monspecs.vfmin = vsync2;
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
            info[_i0].monspecs.vfmax = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].monspecs.vfmin = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].monspecs.hfmin = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].monspecs.hfmax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i810_init_monspecs(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
