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
typedef  int DWORD ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */

__attribute__((used)) static char *edit_with_commas(DWORD x, BOOL pad)
{
    static char s[14];
    unsigned i = 13;
    do
    {
        if (i % 4 == 2) s[--i] = ',';
        s[--i] = (char)(x % 10 + '0');
    } while ((x/=10) != 0);
    if (pad)
    {
        while (i > 0) s[--i] = ' ';
    }
    return s + i;
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
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 163
          // ------------------------------- 
          // static_instructions_O1 : 42
          // dynamic_instructions_O1 : 82
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 82
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 82
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 82
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 81
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 106
          // ------------------------------- 

          int x = 100;
        
          long pad = 100;
        
          char * benchRet = edit_with_commas(x,pad);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 163
          // ------------------------------- 
          // static_instructions_O1 : 42
          // dynamic_instructions_O1 : 82
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 82
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 82
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 82
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 81
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 106
          // ------------------------------- 

          int x = 255;
        
          long pad = 255;
        
          char * benchRet = edit_with_commas(x,pad);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 149
          // ------------------------------- 
          // static_instructions_O1 : 42
          // dynamic_instructions_O1 : 62
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 61
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 97
          // ------------------------------- 

          int x = 10;
        
          long pad = 10;
        
          char * benchRet = edit_with_commas(x,pad);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 163
          // ------------------------------- 
          // static_instructions_O1 : 42
          // dynamic_instructions_O1 : 82
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 82
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 82
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 82
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 81
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 106
          // ------------------------------- 

          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long pad = ((-2 * (next_i()%2)) + 1) * next_i();
        
          char * benchRet = edit_with_commas(x,pad);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
