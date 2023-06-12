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

/* Type definitions */

/* Variables and functions */

__attribute__((used)) static inline double hermite_interpolation(double x, double x0, double x1,
                                    double p0, double p1,
                                    double m0, double m1)
{
    double width = x1 - x0;
    double t = (x - x0) / width;
    double t2, t3;
    double ct0, ct1, ct2, ct3;

    m0 *= width;
    m1 *= width;

    t2 = t*t;
    t3 = t2*t;
    ct0 = p0;
    ct1 = m0;

    ct2 = -3 * p0 - 2 * m0 + 3 * p1 - m1;
    ct3 = 2 * p0 + m0  - 2 * p1 + m1;

    return ct3 * t3 + ct2 * t2 + ct1 * t + ct0;
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
          // static_instructions_O0 : 61
          // dynamic_instructions_O0 : 61
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 33
          // ------------------------------- 
          // static_instructions_O3 : 33
          // dynamic_instructions_O3 : 33
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 33
          // dynamic_instructions_Os : 33
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double x0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double x1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double p0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double p1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double m0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double m1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          double benchRet = hermite_interpolation(x,x0,x1,p0,p1,m0,m1);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
