// ========================================================================= //

// includes
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  scalar_t__* vec3_t ;
typedef  int /*<<< orphan*/  qboolean ;

/* Variables and functions */
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

qboolean VectorCompareExt( vec3_t n1, vec3_t n2, float epsilon ){
	int i;


	/* test */
	for ( i = 0; i < 3; i++ )
		if ( fabs( n1[ i ] - n2[ i ] ) > epsilon ) {
			return qfalse;
		}
	return qtrue;
}


// ------------------------------------------------------------------------- //




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
          float epsilon = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_n10 = 65025;
          long * n1 = (long *) malloc(_len_n10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n10; _i0++) {
            n1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n20 = 65025;
          long * n2 = (long *) malloc(_len_n20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n20; _i0++) {
            n2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = VectorCompareExt(n1,n2,epsilon);
          printf("%d\n", benchRet); 
          free(n1);
          free(n2);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          float epsilon = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_n10 = 100;
          long * n1 = (long *) malloc(_len_n10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n10; _i0++) {
            n1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n20 = 100;
          long * n2 = (long *) malloc(_len_n20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n20; _i0++) {
            n2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = VectorCompareExt(n1,n2,epsilon);
          printf("%d\n", benchRet); 
          free(n1);
          free(n2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
