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

__attribute__((used)) static unsigned
row_shift_from_symbol_count(unsigned symbol_count)
{
    unsigned row_shift = 1;

    symbol_count++;

    while ((unsigned)(1 << row_shift) < symbol_count)
        row_shift++;

    return row_shift;
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
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 43
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 43
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 43
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 43
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 42
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 43
          // ------------------------------- 

          unsigned int symbol_count = 100;
        
          unsigned int benchRet = row_shift_from_symbol_count(symbol_count);
          printf("%u\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 78
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 48
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 48
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 48
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          unsigned int symbol_count = 255;
        
          unsigned int benchRet = row_shift_from_symbol_count(symbol_count);
          printf("%u\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 27
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          unsigned int symbol_count = 10;
        
          unsigned int benchRet = row_shift_from_symbol_count(symbol_count);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
