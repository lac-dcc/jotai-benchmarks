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
 float const CELT_EMPH_COEFF ; 

__attribute__((used)) static float deemphasis_c(float *y, float *x, float coeff, int len)
{
    float state = coeff;

    for (int i = 0; i < len; i++) {
        const float tmp = x[i] + state;
        state = tmp * CELT_EMPH_COEFF;
        y[i] = tmp;
    }

    return state;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 4860
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1540
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 986
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 986
          // ------------------------------- 
          // static_instructions_Ofast : 103
          // dynamic_instructions_Ofast : 240
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1539
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 1795
          // ------------------------------- 

          float coeff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int len = 255;
        
          int _len_y0 = 65025;
          float * y = (float *) malloc(_len_y0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_x0 = 65025;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          float benchRet = deemphasis_c(y,x,coeff,len);
          printf("%f\n", benchRet); 
          free(y);
          free(x);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 205
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 70
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 65
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 65
          // ------------------------------- 
          // static_instructions_Ofast : 69
          // dynamic_instructions_Ofast : 69
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 69
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 80
          // ------------------------------- 

          float coeff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int len = 10;
        
          int _len_y0 = 100;
          float * y = (float *) malloc(_len_y0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_x0 = 100;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          float benchRet = deemphasis_c(y,x,coeff,len);
          printf("%f\n", benchRet); 
          free(y);
          free(x);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          float coeff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_y0 = 1;
          float * y = (float *) malloc(_len_y0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_x0 = 1;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          float benchRet = deemphasis_c(y,x,coeff,len);
          printf("%f\n", benchRet); 
          free(y);
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
