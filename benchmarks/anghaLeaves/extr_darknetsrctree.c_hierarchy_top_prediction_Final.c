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
struct TYPE_3__ {int* group_size; int* group_offset; int* child; int* parent; } ;
typedef  TYPE_1__ tree ;

/* Variables and functions */

int hierarchy_top_prediction(float *predictions, tree *hier, float thresh, int stride)
{
    float p = 1;
    int group = 0;
    int i;
    while(1){
        float max = 0;
        int max_i = 0;

        for(i = 0; i < hier->group_size[group]; ++i){
            int index = i + hier->group_offset[group];
            float val = predictions[(i + hier->group_offset[group])*stride];
            if(val > max){
                max_i = index;
                max = val;
            }
        }
        if(p*max > thresh){
            p = p*max;
            group = hier->child[max_i];
            if(hier->child[max_i] < 0) return max_i;
        } else if (group == 0){
            return max_i;
        } else {
            return hier->parent[hier->group_offset[group]];
        }
    }
    return 0;
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
          float thresh = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int stride = 100;
          int _len_predictions0 = 1;
          float * predictions = (float *) malloc(_len_predictions0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_predictions0; _i0++) {
            predictions[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_hier0 = 1;
          struct TYPE_3__ * hier = (struct TYPE_3__ *) malloc(_len_hier0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hier0; _i0++) {
              int _len_hier__i0__group_size0 = 1;
          hier[_i0].group_size = (int *) malloc(_len_hier__i0__group_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__group_size0; _j0++) {
            hier[_i0].group_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hier__i0__group_offset0 = 1;
          hier[_i0].group_offset = (int *) malloc(_len_hier__i0__group_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__group_offset0; _j0++) {
            hier[_i0].group_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hier__i0__child0 = 1;
          hier[_i0].child = (int *) malloc(_len_hier__i0__child0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__child0; _j0++) {
            hier[_i0].child[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hier__i0__parent0 = 1;
          hier[_i0].parent = (int *) malloc(_len_hier__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__parent0; _j0++) {
            hier[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hierarchy_top_prediction(predictions,hier,thresh,stride);
          printf("%d\n", benchRet); 
          free(predictions);
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].group_size);
          }
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].group_offset);
          }
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].child);
          }
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].parent);
          }
          free(hier);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
