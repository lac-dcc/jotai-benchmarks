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

__attribute__((used)) static void solve(double *matrix, double *vector, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            double d = matrix[j + i * size];
            vector[j] -= d * vector[i];
        }
    }

    vector[size - 1] /= matrix[size * size - 1];

    for (int i = size - 2; i >= 0; i--) {
        double d = vector[i];
        for (int j = i + 1; j < size; j++)
            d -= matrix[i + j * size] * vector[j];
        vector[i] = d / matrix[i + i * size];
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
          // static_instructions_O0 : 105
          // dynamic_instructions_O0 : 1435893
          // ------------------------------- 
          // static_instructions_O1 : 93
          // dynamic_instructions_O1 : 494455
          // ------------------------------- 
          // static_instructions_O2 : 165
          // dynamic_instructions_O2 : 390421
          // ------------------------------- 
          // static_instructions_O3 : 165
          // dynamic_instructions_O3 : 390421
          // ------------------------------- 
          // static_instructions_Ofast : 165
          // dynamic_instructions_Ofast : 390421
          // ------------------------------- 
          // static_instructions_Os : 89
          // dynamic_instructions_Os : 493439
          // ------------------------------- 
          // static_instructions_Oz : 76
          // dynamic_instructions_Oz : 589827
          // ------------------------------- 

          int size = 255;
        
          int _len_matrix0 = 65025;
          double * matrix = (double *) malloc(_len_matrix0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            matrix[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_vector0 = 65025;
          double * vector = (double *) malloc(_len_vector0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_vector0; _i0++) {
            vector[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          solve(matrix,vector,size);
          free(matrix);
          free(vector);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 105
          // dynamic_instructions_O0 : 2398
          // ------------------------------- 
          // static_instructions_O1 : 93
          // dynamic_instructions_O1 : 1025
          // ------------------------------- 
          // static_instructions_O2 : 165
          // dynamic_instructions_O2 : 1179
          // ------------------------------- 
          // static_instructions_O3 : 165
          // dynamic_instructions_O3 : 1179
          // ------------------------------- 
          // static_instructions_Ofast : 165
          // dynamic_instructions_Ofast : 1179
          // ------------------------------- 
          // static_instructions_Os : 89
          // dynamic_instructions_Os : 989
          // ------------------------------- 
          // static_instructions_Oz : 76
          // dynamic_instructions_Oz : 1092
          // ------------------------------- 

          int size = 10;
        
          int _len_matrix0 = 100;
          double * matrix = (double *) malloc(_len_matrix0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            matrix[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_vector0 = 100;
          double * vector = (double *) malloc(_len_vector0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_vector0; _i0++) {
            vector[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          solve(matrix,vector,size);
          free(matrix);
          free(vector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
