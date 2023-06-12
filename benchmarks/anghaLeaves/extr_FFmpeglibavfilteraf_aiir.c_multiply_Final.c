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

__attribute__((used)) static void multiply(double wre, double wim, int npz, double *coeffs)
{
    double nwre = -wre, nwim = -wim;
    double cre, cim;
    int i;

    for (i = npz; i >= 1; i--) {
        cre = coeffs[2 * i + 0];
        cim = coeffs[2 * i + 1];

        coeffs[2 * i + 0] = (nwre * cre - nwim * cim) + coeffs[2 * (i - 1) + 0];
        coeffs[2 * i + 1] = (nwre * cim + nwim * cre) + coeffs[2 * (i - 1) + 1];
    }

    cre = coeffs[0];
    cim = coeffs[1];
    coeffs[0] = nwre * cre - nwim * cim;
    coeffs[1] = nwre * cim + nwim * cre;
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
          // static_instructions_O0 : 98
          // dynamic_instructions_O0 : 14324
          // ------------------------------- 
          // static_instructions_O1 : 46
          // dynamic_instructions_O1 : 6142
          // ------------------------------- 
          // static_instructions_O2 : 170
          // dynamic_instructions_O2 : 3980
          // ------------------------------- 
          // static_instructions_O3 : 170
          // dynamic_instructions_O3 : 3980
          // ------------------------------- 
          // static_instructions_Ofast : 170
          // dynamic_instructions_Ofast : 3980
          // ------------------------------- 
          // static_instructions_Os : 43
          // dynamic_instructions_Os : 6139
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 6393
          // ------------------------------- 

          double wre = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double wim = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int npz = 255;
        
          int _len_coeffs0 = 65025;
          double * coeffs = (double *) malloc(_len_coeffs0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_coeffs0; _i0++) {
            coeffs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          multiply(wre,wim,npz,coeffs);
          free(coeffs);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 98
          // dynamic_instructions_O0 : 604
          // ------------------------------- 
          // static_instructions_O1 : 46
          // dynamic_instructions_O1 : 262
          // ------------------------------- 
          // static_instructions_O2 : 170
          // dynamic_instructions_O2 : 305
          // ------------------------------- 
          // static_instructions_O3 : 170
          // dynamic_instructions_O3 : 305
          // ------------------------------- 
          // static_instructions_Ofast : 170
          // dynamic_instructions_Ofast : 305
          // ------------------------------- 
          // static_instructions_Os : 43
          // dynamic_instructions_Os : 259
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 268
          // ------------------------------- 

          double wre = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double wim = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int npz = 10;
        
          int _len_coeffs0 = 100;
          double * coeffs = (double *) malloc(_len_coeffs0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_coeffs0; _i0++) {
            coeffs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          multiply(wre,wim,npz,coeffs);
          free(coeffs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
