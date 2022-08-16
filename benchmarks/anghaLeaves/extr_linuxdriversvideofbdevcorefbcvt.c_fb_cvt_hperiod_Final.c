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

/* Type definitions */
typedef  int u32 ;
struct fb_cvt_data {int f_refresh; int flags; int yres; int interlace; int v_margin; } ;

/* Variables and functions */
 int FB_CVT_FLAG_REDUCED_BLANK ; 
 int FB_CVT_MIN_VPORCH ; 
 int FB_CVT_MIN_VSYNC_BP ; 
 int FB_CVT_RB_MIN_VBLANK ; 

__attribute__((used)) static u32 fb_cvt_hperiod(struct fb_cvt_data *cvt)
{
	u32 num = 1000000000/cvt->f_refresh;
	u32 den;

	if (cvt->flags & FB_CVT_FLAG_REDUCED_BLANK) {
		num -= FB_CVT_RB_MIN_VBLANK * 1000;
		den = 2 * (cvt->yres/cvt->interlace + 2 * cvt->v_margin);
	} else {
		num -= FB_CVT_MIN_VSYNC_BP * 1000;
		den = 2 * (cvt->yres/cvt->interlace + cvt->v_margin * 2
			   + FB_CVT_MIN_VPORCH + cvt->interlace/2);
	}

	return 2 * (num/den);
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
          int _len_cvt0 = 1;
          struct fb_cvt_data * cvt = (struct fb_cvt_data *) malloc(_len_cvt0*sizeof(struct fb_cvt_data));
          for(int _i0 = 0; _i0 < _len_cvt0; _i0++) {
            cvt[_i0].f_refresh = ((-2 * (next_i()%2)) + 1) * next_i();
        cvt[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cvt[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        cvt[_i0].interlace = ((-2 * (next_i()%2)) + 1) * next_i();
        cvt[_i0].v_margin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fb_cvt_hperiod(cvt);
          printf("%d\n", benchRet); 
          free(cvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
