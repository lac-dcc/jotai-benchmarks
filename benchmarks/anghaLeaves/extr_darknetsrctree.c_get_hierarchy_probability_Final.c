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
struct TYPE_3__ {int* parent; } ;
typedef  TYPE_1__ tree ;

/* Variables and functions */

float get_hierarchy_probability(float *x, tree *hier, int c, int stride)
{
    float p = 1;
    while(c >= 0){
        p = p * x[c*stride];
        c = hier->parent[c];
    }
    return p;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int stride = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_x0 = 1;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_hier0 = 1;
          struct TYPE_3__ * hier = (struct TYPE_3__ *) malloc(_len_hier0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hier0; _i0++) {
              int _len_hier__i0__parent0 = 1;
          hier[_i0].parent = (int *) malloc(_len_hier__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hier__i0__parent0; _j0++) {
            hier[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          float benchRet = get_hierarchy_probability(x,hier,c,stride);
          printf("%f\n", benchRet); 
          free(x);
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
