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

__attribute__((used)) static int
BitSize(int n) {

    register int i;

    for (i = 1; i <= 8; i++)
        if ((1 << i) >= n)
            break;
    return (i);
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 87
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 56
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 56
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 55
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 56
          // ------------------------------- 

          int n = 100;
        
          int benchRet = BitSize(n);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 99
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 63
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 63
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 63
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 63
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 62
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          int n = 255;
        
          int benchRet = BitSize(n);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 51
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 35
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          int n = 10;
        
          int benchRet = BitSize(n);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = BitSize(n);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
