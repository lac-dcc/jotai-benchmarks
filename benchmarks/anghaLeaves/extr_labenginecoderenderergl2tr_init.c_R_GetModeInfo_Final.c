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
typedef  struct TYPE_13__   TYPE_7__ ;
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int width; int height; float pixelAspect; } ;
typedef  TYPE_1__ vidmode_t ;
typedef  int /*<<< orphan*/  qboolean ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {float value; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int integer; } ;

/* Variables and functions */
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 
 TYPE_7__* r_buffheight ; 
 TYPE_6__* r_buffwidth ; 
 TYPE_5__* r_customPixelAspect ; 
 TYPE_4__* r_customheight ; 
 TYPE_3__* r_customwidth ; 
 TYPE_1__* r_vidModes ; 
 int s_numVidModes ; 

qboolean R_GetModeInfo( int *width, int *height, int *buff_width, int *buff_height, float *windowAspect, int mode ) {
	vidmode_t	*vm;
	float			pixelAspect;

	if ( mode < -1 ) {
		return qfalse;
	}
	if ( mode >= s_numVidModes ) {
		return qfalse;
	}

	if ( mode == -1 ) {
		*width = r_customwidth->integer;
		*height = r_customheight->integer;
		*buff_width = r_buffwidth->integer;
		*buff_height = r_buffheight->integer;
		pixelAspect = r_customPixelAspect->value;
	} else {
		vm = &r_vidModes[mode];

		*width  = vm->width;
		*height = vm->height;
		*buff_width = r_buffwidth->integer;
		*buff_height = r_buffheight->integer;
		pixelAspect = vm->pixelAspect;
	}

	*windowAspect = (float)*width / ( *height * pixelAspect );

	return qtrue;
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
          int mode = 100;
          int _len_width0 = 1;
          int * width = (int *) malloc(_len_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width0; _i0++) {
            width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_height0 = 1;
          int * height = (int *) malloc(_len_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_height0; _i0++) {
            height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff_width0 = 1;
          int * buff_width = (int *) malloc(_len_buff_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buff_width0; _i0++) {
            buff_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff_height0 = 1;
          int * buff_height = (int *) malloc(_len_buff_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buff_height0; _i0++) {
            buff_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_windowAspect0 = 1;
          float * windowAspect = (float *) malloc(_len_windowAspect0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_windowAspect0; _i0++) {
            windowAspect[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = R_GetModeInfo(width,height,buff_width,buff_height,windowAspect,mode);
          printf("%d\n", benchRet); 
          free(width);
          free(height);
          free(buff_width);
          free(buff_height);
          free(windowAspect);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
