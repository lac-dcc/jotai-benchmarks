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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int member_0; int member_1; int member_2; int red; int green; int blue; } ;
struct TYPE_5__ {scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
typedef  TYPE_1__* PCBUSYLIGHT_COLOR ;
typedef  int DWORD ;
typedef  int BYTE ;
typedef  TYPE_2__ BUSYLIGHT_COLOR ;

/* Variables and functions */

BUSYLIGHT_COLOR adaptColor(PCBUSYLIGHT_COLOR color, BYTE percent)
{
	BUSYLIGHT_COLOR rColor = {
		(BYTE) (((DWORD) color->red * percent) / 100),
		(BYTE) (((DWORD) color->green * percent) / 100),
		(BYTE) (((DWORD) color->blue * percent) / 100)
	};
	if(!rColor.red && percent && color->red)
		rColor.red = 1;
	if(!rColor.green && percent && color->green)
		rColor.green = 1;
	if(!rColor.blue && percent && color->blue)
		rColor.blue = 1;
	return rColor;
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
          int percent = 255;
          int _len_color0 = 1;
          struct TYPE_5__ * color = (struct TYPE_5__ *) malloc(_len_color0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color->blue = ((-2 * (next_i()%2)) + 1) * next_i();
        color->green = ((-2 * (next_i()%2)) + 1) * next_i();
        color->red = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ benchRet = adaptColor(color,percent);
          printf("{{struct}} %p\n", &benchRet); 
          free(color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
