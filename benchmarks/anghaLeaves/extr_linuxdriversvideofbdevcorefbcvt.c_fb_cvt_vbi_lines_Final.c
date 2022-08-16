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
struct fb_cvt_data {int flags; int hperiod; int vsync; } ;

/* Variables and functions */
 int FB_CVT_FLAG_REDUCED_BLANK ; 
 int FB_CVT_MIN_BPORCH ; 
 int FB_CVT_MIN_VPORCH ; 
 int FB_CVT_MIN_VSYNC_BP ; 
 int FB_CVT_RB_MIN_VBLANK ; 
 int FB_CVT_RB_V_FPORCH ; 

__attribute__((used)) static u32 fb_cvt_vbi_lines(struct fb_cvt_data *cvt)
{
	u32 vbi_lines, min_vbi_lines, act_vbi_lines;

	if (cvt->flags & FB_CVT_FLAG_REDUCED_BLANK) {
		vbi_lines = (1000 * FB_CVT_RB_MIN_VBLANK)/cvt->hperiod + 1;
		min_vbi_lines =  FB_CVT_RB_V_FPORCH + cvt->vsync +
			FB_CVT_MIN_BPORCH;

	} else {
		vbi_lines = (FB_CVT_MIN_VSYNC_BP * 1000)/cvt->hperiod + 1 +
			 FB_CVT_MIN_VPORCH;
		min_vbi_lines = cvt->vsync + FB_CVT_MIN_BPORCH +
			FB_CVT_MIN_VPORCH;
	}

	if (vbi_lines < min_vbi_lines)
		act_vbi_lines = min_vbi_lines;
	else
		act_vbi_lines = vbi_lines;

	return act_vbi_lines;
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
            cvt[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cvt[_i0].hperiod = ((-2 * (next_i()%2)) + 1) * next_i();
        cvt[_i0].vsync = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fb_cvt_vbi_lines(cvt);
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
