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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int qboolean ;

/* Variables and functions */
 scalar_t__ EQUAL_EPSILON ; 

qboolean VectorCompare (vec3_t v1, vec3_t v2)
{
	int		i;
	
	for (i=0 ; i<3 ; i++)
		if (fabs(v1[i]-v2[i]) > EQUAL_EPSILON)
			return false;
			
	return true;
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

    // int-bounds
    case 0:
    {
          int _len_v10 = 1;
          long * v1 = (long *) malloc(_len_v10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v20 = 1;
          long * v2 = (long *) malloc(_len_v20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = VectorCompare(v1,v2);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_v10 = 65025;
          long * v1 = (long *) malloc(_len_v10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v20 = 65025;
          long * v2 = (long *) malloc(_len_v20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = VectorCompare(v1,v2);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_v10 = 100;
          long * v1 = (long *) malloc(_len_v10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v20 = 100;
          long * v2 = (long *) malloc(_len_v20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = VectorCompare(v1,v2);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
