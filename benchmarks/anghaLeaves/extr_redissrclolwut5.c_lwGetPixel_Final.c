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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int width; int height; int* pixels; } ;
typedef  TYPE_1__ lwCanvas ;

/* Variables and functions */

int lwGetPixel(lwCanvas *canvas, int x, int y) {
    if (x < 0 || x >= canvas->width ||
        y < 0 || y >= canvas->height) return 0;
    return canvas->pixels[x+y*canvas->width];
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
          int x = 255;
          int y = 255;
          int _len_canvas0 = 65025;
          struct TYPE_3__ * canvas = (struct TYPE_3__ *) malloc(_len_canvas0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_canvas0; _i0++) {
            canvas[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        canvas[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_canvas__i0__pixels0 = 1;
          canvas[_i0].pixels = (int *) malloc(_len_canvas__i0__pixels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_canvas__i0__pixels0; _j0++) {
            canvas[_i0].pixels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lwGetPixel(canvas,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_canvas0; _aux++) {
          free(canvas[_aux].pixels);
          }
          free(canvas);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
