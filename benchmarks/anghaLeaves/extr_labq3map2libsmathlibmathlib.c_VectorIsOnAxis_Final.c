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
typedef  int /*<<< orphan*/  qboolean ;

/* Variables and functions */
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

qboolean VectorIsOnAxis( vec3_t v ){
	int i, zeroComponentCount;

	zeroComponentCount = 0;
	for ( i = 0; i < 3; i++ )
	{
		if ( v[i] == 0.0 ) {
			zeroComponentCount++;
		}
	}

	if ( zeroComponentCount > 1 ) {
		// The zero vector will be on axis.
		return qtrue;
	}

	return qfalse;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 53
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 36
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 41
          // ------------------------------- 

          int _len_v0 = 65025;
          double * v = (double *) malloc(_len_v0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int benchRet = VectorIsOnAxis(v);
          printf("%d\n", benchRet); 
          free(v);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 53
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 36
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 41
          // ------------------------------- 

          int _len_v0 = 100;
          double * v = (double *) malloc(_len_v0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int benchRet = VectorIsOnAxis(v);
          printf("%d\n", benchRet); 
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
