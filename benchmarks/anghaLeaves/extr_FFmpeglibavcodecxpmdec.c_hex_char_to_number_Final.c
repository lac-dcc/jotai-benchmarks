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
typedef  char uint8_t ;

/* Variables and functions */

__attribute__((used)) static unsigned hex_char_to_number(uint8_t x)
{
    if (x >= 'a' && x <= 'f')
        x -= 'a' - 10;
    else if (x >= 'A' && x <= 'F')
        x -= 'A' - 10;
    else if (x >= '0' && x <= '9')
        x -= '0';
    else
        x = 0;
    return x;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          char x = 100;
        
          unsigned int benchRet = hex_char_to_number(x);
          printf("%u\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          char x = 255;
        
          unsigned int benchRet = hex_char_to_number(x);
          printf("%u\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          char x = 10;
        
          unsigned int benchRet = hex_char_to_number(x);
          printf("%u\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          char x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int benchRet = hex_char_to_number(x);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
