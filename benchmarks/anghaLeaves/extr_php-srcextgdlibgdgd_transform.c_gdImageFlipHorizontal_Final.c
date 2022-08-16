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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int sy; int** tpixels; int sx; unsigned char** pixels; scalar_t__ trueColor; } ;

/* Variables and functions */

void gdImageFlipHorizontal(gdImagePtr im)
{

	int x, y;

	if (im->trueColor) {
   		int *px1, *px2, tmp;

		for (y = 0; y < im->sy; y++) {
			px1 = im->tpixels[y];
			px2 = im->tpixels[y] + im->sx - 1;
			for (x = 0; x < (im->sx >> 1); x++) {
				tmp = *px1;
				*px1 = *px2;
				*px2 = tmp;
				px1++;
				px2--;
			}
		}
	} else {
		unsigned char *px1, *px2, tmp;

		for (y = 0; y < im->sy; y++) {
			px1 = im->pixels[y];
			px2 = im->pixels[y] + im->sx - 1;
			for (x = 0; x < (im->sx >> 1); x++) {
				tmp = *px1;
				*px1 = *px2;
				*px2 = tmp;
				px1++;
				px2--;
			}
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
          int _len_im0 = 1;
          struct TYPE_3__ * im = (struct TYPE_3__ *) malloc(_len_im0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_im__i0__tpixels0 = 1;
          im[_i0].tpixels = (int **) malloc(_len_im__i0__tpixels0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_im__i0__tpixels0; _j0++) {
            int _len_im__i0__tpixels1 = 1;
            im[_i0].tpixels[_j0] = (int *) malloc(_len_im__i0__tpixels1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_im__i0__tpixels1; _j1++) {
              im[_i0].tpixels[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        im[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_im__i0__pixels0 = 1;
          im[_i0].pixels = (unsigned char **) malloc(_len_im__i0__pixels0*sizeof(unsigned char *));
          for(int _j0 = 0; _j0 < _len_im__i0__pixels0; _j0++) {
            int _len_im__i0__pixels1 = 1;
            im[_i0].pixels[_j0] = (unsigned char *) malloc(_len_im__i0__pixels1*sizeof(unsigned char));
            for(int _j1 = 0; _j1 < _len_im__i0__pixels1; _j1++) {
              im[_i0].pixels[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        im[_i0].trueColor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdImageFlipHorizontal(im);
          for(int _aux = 0; _aux < _len_im0; _aux++) {
          free(*(im[_aux].tpixels));
        free(im[_aux].tpixels);
          }
          for(int _aux = 0; _aux < _len_im0; _aux++) {
          free(*(im[_aux].pixels));
        free(im[_aux].pixels);
          }
          free(im);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
