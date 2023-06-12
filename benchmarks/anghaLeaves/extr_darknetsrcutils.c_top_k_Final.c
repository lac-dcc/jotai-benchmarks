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

/* Type definitions */

/* Variables and functions */

void top_k(float *a, int n, int k, int *index)
{
    int i,j;
    for(j = 0; j < k; ++j) index[j] = -1;
    for(i = 0; i < n; ++i){
        int curr = i;
        for(j = 0; j < k; ++j){
            if((index[j] < 0) || a[curr] > a[index[j]]){
                int swap = curr;
                curr = index[j];
                index[j] = swap;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 62
          // dynamic_instructions_O0 : 1404301
          // ------------------------------- 
          // static_instructions_O1 : 52
          // dynamic_instructions_O1 : 619426
          // ------------------------------- 
          // static_instructions_O2 : 71
          // dynamic_instructions_O2 : 521891
          // ------------------------------- 
          // static_instructions_O3 : 76
          // dynamic_instructions_O3 : 505254
          // ------------------------------- 
          // static_instructions_Ofast : 76
          // dynamic_instructions_Ofast : 505254
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 684195
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 750734
          // ------------------------------- 

          int n = 255;
        
          int k = 255;
        
          int _len_a0 = 65025;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_index0 = 65025;
          int * index = (int *) malloc(_len_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          top_k(a,n,k,index);
          free(a);
          free(index);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 62
          // dynamic_instructions_O0 : 2411
          // ------------------------------- 
          // static_instructions_O1 : 52
          // dynamic_instructions_O1 : 1046
          // ------------------------------- 
          // static_instructions_O2 : 67
          // dynamic_instructions_O2 : 918
          // ------------------------------- 
          // static_instructions_O3 : 70
          // dynamic_instructions_O3 : 878
          // ------------------------------- 
          // static_instructions_Ofast : 70
          // dynamic_instructions_Ofast : 878
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 1135
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 1279
          // ------------------------------- 

          int n = 10;
        
          int k = 10;
        
          int _len_a0 = 100;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_index0 = 100;
          int * index = (int *) malloc(_len_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          top_k(a,n,k,index);
          free(a);
          free(index);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int k = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_index0 = 1;
          int * index = (int *) malloc(_len_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          top_k(a,n,k,index);
          free(a);
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
