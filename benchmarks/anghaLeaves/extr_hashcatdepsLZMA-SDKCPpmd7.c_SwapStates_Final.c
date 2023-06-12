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
typedef  int /*<<< orphan*/  CPpmd_State ;

/* Variables and functions */

__attribute__((used)) static void SwapStates(CPpmd_State *t1, CPpmd_State *t2)
{
  CPpmd_State tmp = *t1;
  *t1 = *t2;
  *t2 = tmp;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_t10 = 65025;
          int * t1 = (int *) malloc(_len_t10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_t20 = 65025;
          int * t2 = (int *) malloc(_len_t20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          SwapStates(t1,t2);
          free(t1);
          free(t2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_t10 = 100;
          int * t1 = (int *) malloc(_len_t10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_t20 = 100;
          int * t2 = (int *) malloc(_len_t20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          SwapStates(t1,t2);
          free(t1);
          free(t2);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_t10 = 1;
          int * t1 = (int *) malloc(_len_t10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_t20 = 1;
          int * t2 = (int *) malloc(_len_t20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          SwapStates(t1,t2);
          free(t1);
          free(t2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
