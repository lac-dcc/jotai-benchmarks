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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  scalar_t__ WCHAR ;
typedef  scalar_t__ INT ;

/* Variables and functions */

__attribute__((used)) static void
ReplaceChars(WCHAR *pch, INT Len, WCHAR From, WCHAR To)
{
    while (Len > 0)
    {
        if (*pch == From)
        {
            *pch = To;
        }
        //printf("0x%04X, ", *pch);
        ++pch;
        --Len;
    }
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 3325
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 1538
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 792
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 792
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 792
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 1537
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 1791
          // ------------------------------- 

          long Len = 255;
        
          long From = 255;
        
          long To = 255;
        
          int _len_pch0 = 65025;
          long * pch = (long *) malloc(_len_pch0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pch0; _i0++) {
            pch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ReplaceChars(pch,Len,From,To);
          free(pch);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 140
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 68
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 54
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 54
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 54
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 67
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 76
          // ------------------------------- 

          long Len = 10;
        
          long From = 10;
        
          long To = 10;
        
          int _len_pch0 = 100;
          long * pch = (long *) malloc(_len_pch0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pch0; _i0++) {
            pch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ReplaceChars(pch,Len,From,To);
          free(pch);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          long Len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long From = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long To = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pch0 = 1;
          long * pch = (long *) malloc(_len_pch0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pch0; _i0++) {
            pch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ReplaceChars(pch,Len,From,To);
          free(pch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
