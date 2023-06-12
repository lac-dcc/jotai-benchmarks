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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
 long double pS0 ; 
 long double pS1 ; 
 long double pS2 ; 
 long double pS3 ; 
 long double pS4 ; 
 long double pS5 ; 
 long double pS6 ; 
 long double qS1 ; 
 long double qS2 ; 
 long double qS3 ; 
 long double qS4 ; 
 long double qS5 ; 

long double __invtrigl_R(long double z)
{
	long double p, q;
	p = z*(pS0+z*(pS1+z*(pS2+z*(pS3+z*(pS4+z*(pS5+z*pS6))))));
	q = 1.0+z*(qS1+z*(qS2+z*(qS3+z*(qS4+z*qS5))));
	return p/q;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 59
          // dynamic_instructions_O0 : 59
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          long double z = 100;
        
          long double benchRet = __invtrigl_R(z);
          printf("%Lf\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 59
          // dynamic_instructions_O0 : 59
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          long double z = 255;
        
          long double benchRet = __invtrigl_R(z);
          printf("%Lf\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 59
          // dynamic_instructions_O0 : 59
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          long double z = 10;
        
          long double benchRet = __invtrigl_R(z);
          printf("%Lf\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 59
          // dynamic_instructions_O0 : 59
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          long double z = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long double benchRet = __invtrigl_R(z);
          printf("%Lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
