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
typedef  float* picoVec3_t ;

/* Variables and functions */

void _pico_expand_bounds( picoVec3_t p, picoVec3_t mins, picoVec3_t maxs ){
	int i;
	for ( i = 0; i < 3; i++ )
	{
		float value = p[i];
		if ( value < mins[i] ) {
			mins[i] = value;
		}
		if ( value > maxs[i] ) {
			maxs[i] = value;
		}
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
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 76
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          int _len_p0 = 65025;
          float * p = (float *) malloc(_len_p0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_mins0 = 65025;
          float * mins = (float *) malloc(_len_mins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_maxs0 = 65025;
          float * maxs = (float *) malloc(_len_maxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          _pico_expand_bounds(p,mins,maxs);
          free(p);
          free(mins);
          free(maxs);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 76
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          int _len_p0 = 100;
          float * p = (float *) malloc(_len_p0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_mins0 = 100;
          float * mins = (float *) malloc(_len_mins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_maxs0 = 100;
          float * maxs = (float *) malloc(_len_maxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          _pico_expand_bounds(p,mins,maxs);
          free(p);
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
