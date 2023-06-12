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

__attribute__((used)) static int est_square_root(int x){
  int y0 = x/2;
  int y1;
  int n;
  for(n=0; y0>0 && n<10; n++){
    y1 = (y0 + x/y0)/2;
    if( y1==y0 ) break;
    y0 = y1;
  }
  return y0;
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
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 131
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 79
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 79
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 79
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 79
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 77
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 66
          // ------------------------------- 

          int x = 100;
        
          int benchRet = est_square_root(x);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 333
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 195
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 195
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 194
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 194
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 193
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 155
          // ------------------------------- 

          int x = 255;
        
          int benchRet = est_square_root(x);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 43
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 43
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 43
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 43
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int x = 10;
        
          int benchRet = est_square_root(x);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = est_square_root(x);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
