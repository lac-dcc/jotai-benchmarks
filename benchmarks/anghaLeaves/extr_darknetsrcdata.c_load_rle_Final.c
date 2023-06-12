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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_3__ {int* data; int h; int w; int c; } ;
typedef  TYPE_1__ image ;

/* Variables and functions */

void load_rle(image im, int *rle, int n)
{
    int count = 0;
    int curr = 0;
    int i,j;
    for(i = 0; i < n; ++i){
        for(j = 0; j < rle[i]; ++j){
            im.data[count++] = curr;
        }
        curr = 1 - curr;
    }
    for(; count < im.h*im.w*im.c; ++count){
        im.data[count] = curr;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 4102
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 2058
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 2062
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 2062
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 2062
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 2060
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 3341
          // ------------------------------- 

          int n = 255;
        
          struct TYPE_3__ im;
          int _len_im_data0 = 1;
          im.data = (int *) malloc(_len_im_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_im_data0; _j0++) {
            im.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          im.h = ((-2 * (next_i()%2)) + 1) * next_i();
          im.w = ((-2 * (next_i()%2)) + 1) * next_i();
          im.c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rle0 = 65025;
          int * rle = (int *) malloc(_len_rle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rle0; _i0++) {
            rle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          load_rle(im,rle,n);
          free(im.data);
          free(rle);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 182
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 98
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 102
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 102
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 102
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 100
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 156
          // ------------------------------- 

          int n = 10;
        
          struct TYPE_3__ im;
          int _len_im_data0 = 1;
          im.data = (int *) malloc(_len_im_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_im_data0; _j0++) {
            im.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          im.h = ((-2 * (next_i()%2)) + 1) * next_i();
          im.w = ((-2 * (next_i()%2)) + 1) * next_i();
          im.c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rle0 = 100;
          int * rle = (int *) malloc(_len_rle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rle0; _i0++) {
            rle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          load_rle(im,rle,n);
          free(im.data);
          free(rle);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_3__ im;
          int _len_im_data0 = 1;
          im.data = (int *) malloc(_len_im_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_im_data0; _j0++) {
            im.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          im.h = ((-2 * (next_i()%2)) + 1) * next_i();
          im.w = ((-2 * (next_i()%2)) + 1) * next_i();
          im.c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rle0 = 1;
          int * rle = (int *) malloc(_len_rle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rle0; _i0++) {
            rle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          load_rle(im,rle,n);
          free(im.data);
          free(rle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
