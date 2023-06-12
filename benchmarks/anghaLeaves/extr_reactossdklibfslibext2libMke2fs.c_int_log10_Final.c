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

int int_log10(unsigned int arg)
{
    int l;

    for (l=0; arg ; l++)
        arg = arg / 10;

    return l;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          unsigned int arg = 100;
        
          int benchRet = int_log10(arg);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          unsigned int arg = 255;
        
          int benchRet = int_log10(arg);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          unsigned int arg = 10;
        
          int benchRet = int_log10(arg);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 119
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 79
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 79
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 79
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 79
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 78
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 70
          // ------------------------------- 

          unsigned int arg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = int_log10(arg);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
