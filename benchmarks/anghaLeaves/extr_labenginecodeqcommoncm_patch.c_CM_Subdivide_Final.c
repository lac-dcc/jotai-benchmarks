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
typedef  double* vec3_t ;

/* Variables and functions */

__attribute__((used)) static void CM_Subdivide( vec3_t a, vec3_t b, vec3_t c, vec3_t out1, vec3_t out2, vec3_t out3 ) {
	int		i;

	for ( i = 0 ; i < 3 ; i++ ) {
		out1[i] = 0.5 * (a[i] + b[i]);
		out3[i] = 0.5 * (b[i] + c[i]);
		out2[i] = 0.5 * (out1[i] + out3[i]);
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
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 130
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 38
          // dynamic_instructions_O2 : 38
          // ------------------------------- 
          // static_instructions_O3 : 38
          // dynamic_instructions_O3 : 38
          // ------------------------------- 
          // static_instructions_Ofast : 38
          // dynamic_instructions_Ofast : 38
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 53
          // ------------------------------- 

          int _len_a0 = 65025;
          double * a = (double *) malloc(_len_a0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 65025;
          double * b = (double *) malloc(_len_b0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_c0 = 65025;
          double * c = (double *) malloc(_len_c0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_out10 = 65025;
          double * out1 = (double *) malloc(_len_out10*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out10; _i0++) {
            out1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_out20 = 65025;
          double * out2 = (double *) malloc(_len_out20*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out20; _i0++) {
            out2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_out30 = 65025;
          double * out3 = (double *) malloc(_len_out30*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out30; _i0++) {
            out3[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          CM_Subdivide(a,b,c,out1,out2,out3);
          free(a);
          free(b);
          free(c);
          free(out1);
          free(out2);
          free(out3);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 130
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 38
          // dynamic_instructions_O2 : 38
          // ------------------------------- 
          // static_instructions_O3 : 38
          // dynamic_instructions_O3 : 38
          // ------------------------------- 
          // static_instructions_Ofast : 38
          // dynamic_instructions_Ofast : 38
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 53
          // ------------------------------- 

          int _len_a0 = 100;
          double * a = (double *) malloc(_len_a0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 100;
          double * b = (double *) malloc(_len_b0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_c0 = 100;
          double * c = (double *) malloc(_len_c0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_out10 = 100;
          double * out1 = (double *) malloc(_len_out10*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out10; _i0++) {
            out1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_out20 = 100;
          double * out2 = (double *) malloc(_len_out20*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out20; _i0++) {
            out2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_out30 = 100;
          double * out3 = (double *) malloc(_len_out30*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out30; _i0++) {
            out3[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          CM_Subdivide(a,b,c,out1,out2,out3);
          free(a);
          free(b);
          free(c);
          free(out1);
          free(out2);
          free(out3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
