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
struct TYPE_3__ {int* parent; int /*<<< orphan*/ * leaf; } ;
typedef  TYPE_1__ tree ;

/* Variables and functions */

void hierarchy_predictions(float *predictions, int n, tree *hier, int only_leaves, int stride)
{
    int j;
    for(j = 0; j < n; ++j){
        int parent = hier->parent[j];
        if(parent >= 0){
            predictions[j*stride] *= predictions[parent*stride]; 
        }
    }
    if(only_leaves){
        for(j = 0; j < n; ++j){
            if(!hier->leaf[j]) predictions[j*stride] = 0;
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
          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int only_leaves = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int stride = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_predictions0 = 1;
          float * predictions = (float *) malloc(_len_predictions0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_predictions0; _i0++) {
            predictions[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_hier0 = 1;
          struct TYPE_3__ * hier = (struct TYPE_3__ *) malloc(_len_hier0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hier0; _i0++) {
              int _len_hier__i0__parent0 = 1;
          hier[_i0].parent = (int *) malloc(_len_hier__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__parent0; _j0++) {
            hier[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hier__i0__leaf0 = 1;
          hier[_i0].leaf = (int *) malloc(_len_hier__i0__leaf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__leaf0; _j0++) {
            hier[_i0].leaf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          hierarchy_predictions(predictions,n,hier,only_leaves,stride);
          free(predictions);
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].parent);
          }
          for(int _aux = 0; _aux < _len_hier0; _aux++) {
          free(hier[_aux].leaf);
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
