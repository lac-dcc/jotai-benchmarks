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
struct TYPE_3__ {int c; int h; int w; int /*<<< orphan*/ * data; } ;
typedef  TYPE_1__ image ;

/* Variables and functions */

void censor_image(image im, int dx, int dy, int w, int h)
{
    int i,j,k;
    int s = 32;
    if(dx < 0) dx = 0;
    if(dy < 0) dy = 0;

    for(k = 0; k < im.c; ++k){
        for(j = dy; j < dy + h && j < im.h; ++j){
            for(i = dx; i < dx + w && i < im.w; ++i){
                im.data[i + im.w*(j + im.h*k)] = im.data[i/s*s + im.w*(j/s*s + im.h*k)];
                //im.data[i + j*im.w + k*im.w*im.h] = 0;
            }
        }
    }
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 42
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int dx = 100;
        
          int dy = 100;
        
          int w = 100;
        
          int h = 100;
        
          struct TYPE_3__ im;
          im.c = ((-2 * (next_i()%2)) + 1) * next_i();
          im.h = ((-2 * (next_i()%2)) + 1) * next_i();
          im.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_im_data0 = 1;
          im.data = (int *) malloc(_len_im_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_im_data0; _j0++) {
            im.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          censor_image(im,dx,dy,w,h);
          free(im.data);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 42
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int dx = 255;
        
          int dy = 255;
        
          int w = 255;
        
          int h = 255;
        
          struct TYPE_3__ im;
          im.c = ((-2 * (next_i()%2)) + 1) * next_i();
          im.h = ((-2 * (next_i()%2)) + 1) * next_i();
          im.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_im_data0 = 1;
          im.data = (int *) malloc(_len_im_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_im_data0; _j0++) {
            im.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          censor_image(im,dx,dy,w,h);
          free(im.data);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 42
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int dx = 10;
        
          int dy = 10;
        
          int w = 10;
        
          int h = 10;
        
          struct TYPE_3__ im;
          im.c = ((-2 * (next_i()%2)) + 1) * next_i();
          im.h = ((-2 * (next_i()%2)) + 1) * next_i();
          im.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_im_data0 = 1;
          im.data = (int *) malloc(_len_im_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_im_data0; _j0++) {
            im.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          censor_image(im,dx,dy,w,h);
          free(im.data);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 42
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int dx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_3__ im;
          im.c = ((-2 * (next_i()%2)) + 1) * next_i();
          im.h = ((-2 * (next_i()%2)) + 1) * next_i();
          im.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_im_data0 = 1;
          im.data = (int *) malloc(_len_im_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_im_data0; _j0++) {
            im.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          censor_image(im,dx,dy,w,h);
          free(im.data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
