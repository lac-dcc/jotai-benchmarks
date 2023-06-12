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
       3            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int sx; int sy; int cx1; int cy1; int cx2; int cy2; } ;

/* Variables and functions */

void gdImageSetClip (gdImagePtr im, int x1, int y1, int x2, int y2)
{
	if (x1 < 0) {
		x1 = 0;
	}
	if (x1 >= im->sx) {
		x1 = im->sx - 1;
	}
	if (x2 < 0) {
		x2 = 0;
	}
	if (x2 >= im->sx) {
		x2 = im->sx - 1;
	}
	if (y1 < 0) {
		y1 = 0;
	}
	if (y1 >= im->sy) {
		y1 = im->sy - 1;
	}
	if (y2 < 0) {
		y2 = 0;
	}
	if (y2 >= im->sy) {
		y2 = im->sy - 1;
	}
	im->cx1 = x1;
	im->cy1 = y1;
	im->cx2 = x2;
	im->cy2 = y2;
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
          // static_instructions_O0 : 61
          // dynamic_instructions_O0 : 61
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int x1 = 100;
        
          int y1 = 100;
        
          int x2 = 100;
        
          int y2 = 100;
        
          int _len_im0 = 1;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
              im[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx2 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gdImageSetClip(im,x1,y1,x2,y2);
          free(im);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 61
          // dynamic_instructions_O0 : 61
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int x1 = 255;
        
          int y1 = 255;
        
          int x2 = 255;
        
          int y2 = 255;
        
          int _len_im0 = 65025;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
              im[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx2 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gdImageSetClip(im,x1,y1,x2,y2);
          free(im);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 61
          // dynamic_instructions_O0 : 61
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int x1 = 10;
        
          int y1 = 10;
        
          int x2 = 10;
        
          int y2 = 10;
        
          int _len_im0 = 100;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
              im[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx2 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gdImageSetClip(im,x1,y1,x2,y2);
          free(im);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 65
          // dynamic_instructions_O0 : 65
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int y2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_im0 = 1;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
              im[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy1 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cx2 = ((-2 * (next_i()%2)) + 1) * next_i();
          im[_i0].cy2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gdImageSetClip(im,x1,y1,x2,y2);
          free(im);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
