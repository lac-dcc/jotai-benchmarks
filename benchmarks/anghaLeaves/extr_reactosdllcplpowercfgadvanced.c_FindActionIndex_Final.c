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
typedef  scalar_t__ POWER_ACTION ;
typedef  size_t INT ;
typedef  scalar_t__ DWORD ;

/* Variables and functions */

__attribute__((used)) static INT
FindActionIndex(POWER_ACTION * lpAction, DWORD dwActionSize, POWER_ACTION poAction)
{
    INT Index;

    for (Index = 0; Index < (INT)dwActionSize; Index++)
    {
        if (lpAction[Index] == poAction)
            return Index;
    }

    return -1;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 3328
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 1285
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 1285
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 1285
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1284
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1538
          // ------------------------------- 

          long dwActionSize = 255;
        
          long poAction = 255;
        
          int _len_lpAction0 = 65025;
          long * lpAction = (long *) malloc(_len_lpAction0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_lpAction0; _i0++) {
            lpAction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = FindActionIndex(lpAction,dwActionSize,poAction);
          printf("%lu\n", benchRet); 
          free(lpAction);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 60
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 60
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 60
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 59
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 68
          // ------------------------------- 

          long dwActionSize = 10;
        
          long poAction = 10;
        
          int _len_lpAction0 = 100;
          long * lpAction = (long *) malloc(_len_lpAction0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_lpAction0; _i0++) {
            lpAction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = FindActionIndex(lpAction,dwActionSize,poAction);
          printf("%lu\n", benchRet); 
          free(lpAction);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long dwActionSize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long poAction = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_lpAction0 = 1;
          long * lpAction = (long *) malloc(_len_lpAction0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_lpAction0; _i0++) {
            lpAction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = FindActionIndex(lpAction,dwActionSize,poAction);
          printf("%lu\n", benchRet); 
          free(lpAction);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
