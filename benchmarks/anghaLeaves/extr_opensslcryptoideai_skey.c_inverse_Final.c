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
typedef  int /*<<< orphan*/  IDEA_INT ;

/* Variables and functions */

__attribute__((used)) static IDEA_INT inverse(unsigned int xin)
{
    long n1, n2, q, r, b1, b2, t;

    if (xin == 0)
        b2 = 0;
    else {
        n1 = 0x10001;
        n2 = xin;
        b2 = 1;
        b1 = 0;

        do {
            r = (n1 % n2);
            q = (n1 - r) / n2;
            if (r == 0) {
                if (b2 < 0)
                    b2 = 0x10001 + b2;
            } else {
                n1 = n2;
                n2 = r;
                t = b2;
                b2 = b1 - q * b2;
                b1 = t;
            }
        } while (r != 0);
    }
    return (IDEA_INT)b2;
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
          // dynamic_instructions_O0 : 193
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 107
          // ------------------------------- 
          // static_instructions_O2 : 45
          // dynamic_instructions_O2 : 170
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 170
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 170
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 116
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 92
          // ------------------------------- 

          unsigned int xin = 100;
        
          int benchRet = inverse(xin);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 85
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 45
          // dynamic_instructions_O2 : 70
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 70
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 70
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 52
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 44
          // ------------------------------- 

          unsigned int xin = 255;
        
          int benchRet = inverse(xin);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 115
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 65
          // ------------------------------- 
          // static_instructions_O2 : 45
          // dynamic_instructions_O2 : 95
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 95
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 95
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 68
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 56
          // ------------------------------- 

          unsigned int xin = 10;
        
          int benchRet = inverse(xin);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 223
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 121
          // ------------------------------- 
          // static_instructions_O2 : 45
          // dynamic_instructions_O2 : 195
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 195
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 195
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 132
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 104
          // ------------------------------- 

          unsigned int xin = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = inverse(xin);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
