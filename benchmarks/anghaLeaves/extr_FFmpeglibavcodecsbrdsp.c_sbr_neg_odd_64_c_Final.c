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
union av_intfloat32 {unsigned int i; } ;

/* Variables and functions */

__attribute__((used)) static void sbr_neg_odd_64_c(float *x)
{
    union av_intfloat32 *xi = (union av_intfloat32*) x;
    int i;
    for (i = 1; i < 64; i += 4) {
        xi[i + 0].i ^= 1U << 31;
        xi[i + 2].i ^= 1U << 31;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 330
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 86
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 36
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 36
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 85
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 103
          // ------------------------------- 

          int _len_x0 = 65025;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          sbr_neg_odd_64_c(x);
          free(x);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 330
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 86
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 36
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 36
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 85
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 103
          // ------------------------------- 

          int _len_x0 = 100;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          sbr_neg_odd_64_c(x);
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
