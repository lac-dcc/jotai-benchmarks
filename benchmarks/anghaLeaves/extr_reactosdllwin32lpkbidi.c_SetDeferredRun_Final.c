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
typedef  int BYTE ;

/* Variables and functions */

__attribute__((used)) static void SetDeferredRun(BYTE *pval, int cval, int iStart, int nval)
{
    int i = iStart - 1;
    for (; i >= iStart - cval; i--)
    {
        pval[i] = nval;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 3331
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 1029
          // ------------------------------- 
          // static_instructions_O2 : 72
          // dynamic_instructions_O2 : 174
          // ------------------------------- 
          // static_instructions_O3 : 72
          // dynamic_instructions_O3 : 174
          // ------------------------------- 
          // static_instructions_Ofast : 72
          // dynamic_instructions_Ofast : 174
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 1029
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1284
          // ------------------------------- 

          int cval = 255;
        
          int iStart = 255;
        
          int nval = 255;
        
          int _len_pval0 = 65025;
          int * pval = (int *) malloc(_len_pval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pval0; _i0++) {
            pval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          SetDeferredRun(pval,cval,iStart,nval);
          free(pval);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 146
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 55
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 55
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 55
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 49
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 59
          // ------------------------------- 

          int cval = 10;
        
          int iStart = 10;
        
          int nval = 10;
        
          int _len_pval0 = 100;
          int * pval = (int *) malloc(_len_pval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pval0; _i0++) {
            pval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          SetDeferredRun(pval,cval,iStart,nval);
          free(pval);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int cval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int iStart = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int nval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pval0 = 1;
          int * pval = (int *) malloc(_len_pval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pval0; _i0++) {
            pval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          SetDeferredRun(pval,cval,iStart,nval);
          free(pval);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
