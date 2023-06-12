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
struct TYPE_3__ {int* parent; int groups; int* group_size; } ;
typedef  TYPE_1__ tree ;

/* Variables and functions */
 float SECRET_NUM ; 

void fill_hierarchy(float *truth, int k, tree *hierarchy)
{
    int j;
    for(j = 0; j < k; ++j){
        if(truth[j]){
            int parent = hierarchy->parent[j];
            while(parent >= 0){
                truth[parent] = 1;
                parent = hierarchy->parent[parent];
            }
        }
    }
    int i;
    int count = 0;
    for(j = 0; j < hierarchy->groups; ++j){
        //printf("%d\n", count);
        int mask = 1;
        for(i = 0; i < hierarchy->group_size[j]; ++i){
            if(truth[count + i]){
                mask = 0;
                break;
            }
        }
        if (mask) {
            for(i = 0; i < hierarchy->group_size[j]; ++i){
                truth[count + i] = SECRET_NUM;
            }
        }
        count += hierarchy->group_size[j];
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int k = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_truth0 = 1;
          float * truth = (float *) malloc(_len_truth0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_truth0; _i0++) {
            truth[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_hierarchy0 = 1;
          struct TYPE_3__ * hierarchy = (struct TYPE_3__ *) malloc(_len_hierarchy0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hierarchy0; _i0++) {
              int _len_hierarchy__i0__parent0 = 1;
          hierarchy[_i0].parent = (int *) malloc(_len_hierarchy__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hierarchy__i0__parent0; _j0++) {
            hierarchy[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hierarchy[_i0].groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hierarchy__i0__group_size0 = 1;
          hierarchy[_i0].group_size = (int *) malloc(_len_hierarchy__i0__group_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hierarchy__i0__group_size0; _j0++) {
            hierarchy[_i0].group_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          fill_hierarchy(truth,k,hierarchy);
          free(truth);
          for(int _aux = 0; _aux < _len_hierarchy0; _aux++) {
          free(hierarchy[_aux].parent);
          }
          for(int _aux = 0; _aux < _len_hierarchy0; _aux++) {
          free(hierarchy[_aux].group_size);
          }
          free(hierarchy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
