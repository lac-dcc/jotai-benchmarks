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
 int PLANE_NON_AXIAL ; 
 int PLANE_X ; 
 int PLANE_Y ; 
 int PLANE_Z ; 

int PlaneTypeForNormal( vec3_t normal ) {
	if ( normal[0] == 1.0 || normal[0] == -1.0 ) {
		return PLANE_X;
	}
	if ( normal[1] == 1.0 || normal[1] == -1.0 ) {
		return PLANE_Y;
	}
	if ( normal[2] == 1.0 || normal[2] == -1.0 ) {
		return PLANE_Z;
	}

	return PLANE_NON_AXIAL;
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
          int _len_normal0 = 65025;
          double * normal = (double *) malloc(_len_normal0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int benchRet = PlaneTypeForNormal(normal);
          printf("%d\n", benchRet); 
          free(normal);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_normal0 = 100;
          double * normal = (double *) malloc(_len_normal0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int benchRet = PlaneTypeForNormal(normal);
          printf("%d\n", benchRet); 
          free(normal);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
