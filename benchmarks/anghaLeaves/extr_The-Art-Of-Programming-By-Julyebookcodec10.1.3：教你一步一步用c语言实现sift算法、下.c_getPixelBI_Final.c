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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ fl; } ;
struct TYPE_5__ {int cols; int rows; int step; TYPE_1__ data; } ;
typedef  TYPE_2__ CvMat ;

/* Variables and functions */

float getPixelBI(CvMat * im, float col, float row)   
{  
	int irow, icol;  
	float rfrac, cfrac;  
	float row1 = 0, row2 = 0;  
	int width=im->cols;  
	int height=im->rows;  
#define ImMat(ROW,COL) ((float *)(im->data.fl + im->step/sizeof(float) *(ROW)))[(COL)]  

	irow = (int) row;  
	icol = (int) col;  

	if (irow < 0 || irow >= height  
		|| icol < 0 || icol >= width)  
		return 0;  
	if (row > height - 1)  
		row = height - 1;  
	if (col > width - 1)  
		col = width - 1;  
	rfrac = 1.0 - (row - (float) irow);  
	cfrac = 1.0 - (col - (float) icol);  
	if (cfrac < 1)   
	{  
		row1 = cfrac * ImMat(irow,icol) + (1.0 - cfrac) * ImMat(irow,icol+1);  
	}   
	else   
	{  
		row1 = ImMat(irow,icol);  
	}  
	if (rfrac < 1)   
	{  
		if (cfrac < 1)   
		{  
			row2 = cfrac * ImMat(irow+1,icol) + (1.0 - cfrac) * ImMat(irow+1,icol+1);  
		} else   
		{  
			row2 = ImMat(irow+1,icol);  
		}  
	}  
	return rfrac * row1 + (1.0 - rfrac) * row2;  
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
          float col = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float row = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_im0 = 1;
          struct TYPE_5__ * im = (struct TYPE_5__ *) malloc(_len_im0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0].cols = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
        im[_i0].data.fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = getPixelBI(im,col,row);
          printf("%f\n", benchRet); 
          free(im);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
