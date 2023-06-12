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
struct TYPE_3__ {float* output; int outputs; int h; int w; int n; int classes; } ;
typedef  TYPE_1__ layer ;

/* Variables and functions */

void avg_flipped_yolo(layer l)
{
    int i,j,n,z;
    float *flip = l.output + l.outputs;
    for (j = 0; j < l.h; ++j) {
        for (i = 0; i < l.w/2; ++i) {
            for (n = 0; n < l.n; ++n) {
                for(z = 0; z < l.classes + 4 + 1; ++z){
                    int i1 = z*l.w*l.h*l.n + n*l.w*l.h + j*l.w + i;
                    int i2 = z*l.w*l.h*l.n + n*l.w*l.h + j*l.w + (l.w - i - 1);
                    float swap = flip[i1];
                    flip[i1] = flip[i2];
                    flip[i2] = swap;
                    if(z == 0){
                        flip[i1] = -flip[i1];
                        flip[i2] = -flip[i2];
                    }
                }
            }
        }
    }
    for(i = 0; i < l.outputs; ++i){
        l.output[i] = (l.output[i] + flip[i])/2.;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 58
          // dynamic_instructions_Oz : 58
          // ------------------------------- 

          struct TYPE_3__ l;
          int _len_l_output0 = 1;
          l.output = (float *) malloc(_len_l_output0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_l_output0; _j0++) {
            l.output[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          l.outputs = ((-2 * (next_i()%2)) + 1) * next_i();
          l.h = ((-2 * (next_i()%2)) + 1) * next_i();
          l.w = ((-2 * (next_i()%2)) + 1) * next_i();
          l.n = ((-2 * (next_i()%2)) + 1) * next_i();
          l.classes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          avg_flipped_yolo(l);
          free(l.output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
