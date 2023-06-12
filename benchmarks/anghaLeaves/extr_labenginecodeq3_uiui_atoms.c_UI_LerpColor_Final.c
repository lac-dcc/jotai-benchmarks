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
typedef  float* vec4_t ;

/* Variables and functions */

void UI_LerpColor(vec4_t a, vec4_t b, vec4_t c, float t)
{
	int i;

	// lerp and clamp each component
	for (i=0; i<4; i++)
	{
		c[i] = a[i] + t*(b[i]-a[i]);
		if (c[i] < 0)
			c[i] = 0;
		else if (c[i] > 1.0)
			c[i] = 1.0;
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
          // static_instructions_O0 : 48
          // dynamic_instructions_O0 : 167
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 71
          // ------------------------------- 
          // static_instructions_O2 : 56
          // dynamic_instructions_O2 : 56
          // ------------------------------- 
          // static_instructions_O3 : 56
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 56
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 70
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 76
          // ------------------------------- 

          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_a0 = 65025;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 65025;
          float * b = (float *) malloc(_len_b0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_c0 = 65025;
          float * c = (float *) malloc(_len_c0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          UI_LerpColor(a,b,c,t);
          free(a);
          free(b);
          free(c);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 48
          // dynamic_instructions_O0 : 167
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 71
          // ------------------------------- 
          // static_instructions_O2 : 56
          // dynamic_instructions_O2 : 56
          // ------------------------------- 
          // static_instructions_O3 : 56
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 56
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 70
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 76
          // ------------------------------- 

          float t = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_a0 = 100;
          float * a = (float *) malloc(_len_a0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 100;
          float * b = (float *) malloc(_len_b0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_c0 = 100;
          float * c = (float *) malloc(_len_c0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          UI_LerpColor(a,b,c,t);
          free(a);
          free(b);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
