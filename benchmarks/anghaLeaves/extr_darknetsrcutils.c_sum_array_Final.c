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

float sum_array(float *a, int n)
{
    int i;
    float sum = 0;
    for(i = 0; i < n; ++i) sum += a[i];
    return sum;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 3073
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 1030
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 391
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 391
          // ------------------------------- 
          // static_instructions_Ofast : 73
          // dynamic_instructions_Ofast : 225
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1030
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1285
          // ------------------------------- 

          int n = 255;
        
          int _len_a0 = 65025;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          float benchRet = sum_array(a,n);
          printf("%f\n", benchRet); 
          free(a);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 133
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 50
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 41
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 41
          // ------------------------------- 
          // static_instructions_Ofast : 52
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 50
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          int n = 10;
        
          int _len_a0 = 100;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          float benchRet = sum_array(a,n);
          printf("%f\n", benchRet); 
          free(a);
        
        break;
    }


    // empty
    case 2:
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          float benchRet = sum_array(a,n);
          printf("%f\n", benchRet); 
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
