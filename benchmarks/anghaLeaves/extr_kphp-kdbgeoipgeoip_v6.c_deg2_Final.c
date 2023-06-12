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

double deg2 (int n) {
  double e = 1;
  int i;
  for (i = 0; i < n; i++) {
    e *= 2;
  }
  return e;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 1012
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 307
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 150
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 150
          // ------------------------------- 
          // static_instructions_Ofast : 43
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 307
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 510
          // ------------------------------- 

          int n = 100;
        
          double benchRet = deg2(n);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 2562
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 772
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 349
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 349
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 103
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 772
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1285
          // ------------------------------- 

          int n = 255;
        
          double benchRet = deg2(n);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 112
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 49
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 37
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          int n = 10;
        
          double benchRet = deg2(n);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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
        
          double benchRet = deg2(n);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
