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
struct TYPE_3__ {int* group; int* group_offset; int* group_size; int* parent; } ;
typedef  TYPE_1__ tree ;

/* Variables and functions */

void delta_region_class(float *output, float *delta, int index, int class, int classes, tree *hier, float scale, int stride, float *avg_cat, int tag)
{
    int i, n;
    if(hier){
        float pred = 1;
        while(class >= 0){
            pred *= output[index + stride*class];
            int g = hier->group[class];
            int offset = hier->group_offset[g];
            for(i = 0; i < hier->group_size[g]; ++i){
                delta[index + stride*(offset + i)] = scale * (0 - output[index + stride*(offset + i)]);
            }
            delta[index + stride*class] = scale * (1 - output[index + stride*class]);

            class = hier->parent[class];
        }
        *avg_cat += pred;
    } else {
        if (delta[index] && tag){
            delta[index + stride*class] = scale * (1 - output[index + stride*class]);
            return;
        }
        for(n = 0; n < classes; ++n){
            delta[index + stride*n] = scale * (((n == class)?1 : 0) - output[index + stride*n]);
            if(n == class) *avg_cat += output[index + stride*n];
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
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int class = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int classes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          float scale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int stride = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_output0 = 1;
          float * output = (float *) malloc(_len_output0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_delta0 = 1;
          float * delta = (float *) malloc(_len_delta0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_delta0; _i0++) {
            delta[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_hier0 = 1;
          struct TYPE_3__ * hier = (struct TYPE_3__ *) malloc(_len_hier0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hier0; _i0++) {
              int _len_hier__i0__group0 = 1;
          hier[_i0].group = (int *) malloc(_len_hier__i0__group0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__group0; _j0++) {
            hier[_i0].group[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hier__i0__group_offset0 = 1;
          hier[_i0].group_offset = (int *) malloc(_len_hier__i0__group_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__group_offset0; _j0++) {
            hier[_i0].group_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hier__i0__group_size0 = 1;
          hier[_i0].group_size = (int *) malloc(_len_hier__i0__group_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__group_size0; _j0++) {
            hier[_i0].group_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hier__i0__parent0 = 1;
          hier[_i0].parent = (int *) malloc(_len_hier__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__parent0; _j0++) {
            hier[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_avg_cat0 = 1;
          float * avg_cat = (float *) malloc(_len_avg_cat0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_avg_cat0; _i0++) {
            avg_cat[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          delta_region_class(output,delta,index,class,classes,hier,scale,stride,avg_cat,tag);
          free(output);
          free(delta);
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].group);
          }
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].group_offset);
          }
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].group_size);
          }
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].parent);
          }
          free(hier);
          free(avg_cat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
