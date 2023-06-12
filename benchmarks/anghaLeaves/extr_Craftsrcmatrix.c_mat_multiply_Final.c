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

void mat_multiply(float *matrix, float *a, float *b) {
    float result[16];
    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 4; r++) {
            int index = c * 4 + r;
            float total = 0;
            for (int i = 0; i < 4; i++) {
                int p = i * 4 + r;
                int q = c * 4 + i;
                total += a[p] * b[q];
            }
            result[index] = total;
        }
    }
    for (int i = 0; i < 16; i++) {
        matrix[i] = result[i];
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
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 1925
          // ------------------------------- 
          // static_instructions_O1 : 38
          // dynamic_instructions_O1 : 590
          // ------------------------------- 
          // static_instructions_O2 : 121
          // dynamic_instructions_O2 : 121
          // ------------------------------- 
          // static_instructions_O3 : 77
          // dynamic_instructions_O3 : 77
          // ------------------------------- 
          // static_instructions_Ofast : 72
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 553
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 770
          // ------------------------------- 

          int _len_matrix0 = 65025;
          float * matrix = (float *) malloc(_len_matrix0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            matrix[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_a0 = 65025;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 65025;
          float * b = (float *) malloc(_len_b0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          mat_multiply(matrix,a,b);
          free(matrix);
          free(a);
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 1925
          // ------------------------------- 
          // static_instructions_O1 : 38
          // dynamic_instructions_O1 : 590
          // ------------------------------- 
          // static_instructions_O2 : 121
          // dynamic_instructions_O2 : 121
          // ------------------------------- 
          // static_instructions_O3 : 77
          // dynamic_instructions_O3 : 77
          // ------------------------------- 
          // static_instructions_Ofast : 72
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 553
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 770
          // ------------------------------- 

          int _len_matrix0 = 100;
          float * matrix = (float *) malloc(_len_matrix0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            matrix[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_a0 = 100;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 100;
          float * b = (float *) malloc(_len_b0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          mat_multiply(matrix,a,b);
          free(matrix);
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
