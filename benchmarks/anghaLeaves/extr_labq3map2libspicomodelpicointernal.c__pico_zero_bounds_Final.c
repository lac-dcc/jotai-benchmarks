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
typedef  int* picoVec3_t ;

/* Variables and functions */

void _pico_zero_bounds( picoVec3_t mins, picoVec3_t maxs ){
	int i;
	for ( i = 0; i < 3; i++ )
	{
		mins[i] = +999999;
		maxs[i] = -999999;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 45
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int _len_mins0 = 65025;
          int * mins = (int *) malloc(_len_mins0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_maxs0 = 65025;
          int * maxs = (int *) malloc(_len_maxs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _pico_zero_bounds(mins,maxs);
          free(mins);
          free(maxs);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 45
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int _len_mins0 = 100;
          int * mins = (int *) malloc(_len_mins0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_maxs0 = 100;
          int * maxs = (int *) malloc(_len_maxs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _pico_zero_bounds(mins,maxs);
          free(mins);
          free(maxs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
