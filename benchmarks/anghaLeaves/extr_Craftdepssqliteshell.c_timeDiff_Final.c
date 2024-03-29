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
struct timeval {double tv_usec; scalar_t__ tv_sec; } ;

/* Variables and functions */

__attribute__((used)) static double timeDiff(struct timeval *pStart, struct timeval *pEnd){
  return (pEnd->tv_usec - pStart->tv_usec)*0.000001 + 
         (double)(pEnd->tv_sec - pStart->tv_sec);
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_pStart0 = 65025;
          struct timeval * pStart = (struct timeval *) malloc(_len_pStart0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_pStart0; _i0++) {
              pStart[_i0].tv_usec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pStart[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pEnd0 = 65025;
          struct timeval * pEnd = (struct timeval *) malloc(_len_pEnd0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_pEnd0; _i0++) {
              pEnd[_i0].tv_usec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pEnd[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          double benchRet = timeDiff(pStart,pEnd);
          printf("%lf\n", benchRet); 
          free(pStart);
          free(pEnd);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_pStart0 = 100;
          struct timeval * pStart = (struct timeval *) malloc(_len_pStart0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_pStart0; _i0++) {
              pStart[_i0].tv_usec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pStart[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pEnd0 = 100;
          struct timeval * pEnd = (struct timeval *) malloc(_len_pEnd0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_pEnd0; _i0++) {
              pEnd[_i0].tv_usec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pEnd[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          double benchRet = timeDiff(pStart,pEnd);
          printf("%lf\n", benchRet); 
          free(pStart);
          free(pEnd);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_pStart0 = 1;
          struct timeval * pStart = (struct timeval *) malloc(_len_pStart0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_pStart0; _i0++) {
              pStart[_i0].tv_usec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pStart[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pEnd0 = 1;
          struct timeval * pEnd = (struct timeval *) malloc(_len_pEnd0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_pEnd0; _i0++) {
              pEnd[_i0].tv_usec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pEnd[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          double benchRet = timeDiff(pStart,pEnd);
          printf("%lf\n", benchRet); 
          free(pStart);
          free(pEnd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
