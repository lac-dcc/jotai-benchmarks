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
       0            empty\n\
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
struct TYPE_3__ {int** data; int* linesize; } ;
typedef  TYPE_1__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static void fill_yuv_image(AVFrame *pict, int frame_index,
                           int width, int height)
{
    int x, y, i;

    i = frame_index;

    /* Y */
    for (y = 0; y < height; y++)
        for (x = 0; x < width; x++)
            pict->data[0][y * pict->linesize[0] + x] = x + y + i * 3;

    /* Cb and Cr */
    for (y = 0; y < height / 2; y++) {
        for (x = 0; x < width / 2; x++) {
            pict->data[1][y * pict->linesize[1] + x] = 128 + y + i * 2;
            pict->data[2][y * pict->linesize[2] + x] = 64 + x + i * 5;
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


    // empty
    case 0:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 40
          // ------------------------------- 

          int frame_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pict0 = 1;
          struct TYPE_3__ * pict = (struct TYPE_3__ *) malloc(_len_pict0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pict0; _i0++) {
              int _len_pict__i0__data0 = 1;
          pict[_i0].data = (int **) malloc(_len_pict__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pict__i0__data0; _j0++) {
            int _len_pict__i0__data1 = 1;
            pict[_i0].data[_j0] = (int *) malloc(_len_pict__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pict__i0__data1; _j1++) {
              pict[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pict__i0__linesize0 = 1;
          pict[_i0].linesize = (int *) malloc(_len_pict__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pict__i0__linesize0; _j0++) {
            pict[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          fill_yuv_image(pict,frame_index,width,height);
          for(int _aux = 0; _aux < _len_pict0; _aux++) {
          free(*(pict[_aux].data));
        free(pict[_aux].data);
          }
          for(int _aux = 0; _aux < _len_pict0; _aux++) {
          free(pict[_aux].linesize);
          }
          free(pict);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
