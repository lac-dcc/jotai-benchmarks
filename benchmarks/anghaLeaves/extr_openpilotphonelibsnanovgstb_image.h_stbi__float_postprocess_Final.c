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

/* Variables and functions */
 scalar_t__ stbi__vertically_flip_on_load ; 

__attribute__((used)) static void stbi__float_postprocess(float *result, int *x, int *y, int *comp, int req_comp)
{
   if (stbi__vertically_flip_on_load && result != NULL) {
      int w = *x, h = *y;
      int depth = req_comp ? req_comp : *comp;
      int row,col,z;
      float temp;

      // @OPTIMIZE: use a bigger temp buffer and memcpy multiple pixels at once
      for (row = 0; row < (h>>1); row++) {
         for (col = 0; col < w; col++) {
            for (z = 0; z < depth; z++) {
               temp = result[(row * w + col) * depth + z];
               result[(row * w + col) * depth + z] = result[((h - row - 1) * w + col) * depth + z];
               result[((h - row - 1) * w + col) * depth + z] = temp;
            }
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
          int req_comp = 100;
          int _len_result0 = 1;
          float * result = (float *) malloc(_len_result0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_x0 = 1;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp0 = 1;
          int * comp = (int *) malloc(_len_comp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__float_postprocess(result,x,y,comp,req_comp);
          free(result);
          free(x);
          free(y);
          free(comp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
