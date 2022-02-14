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
typedef  int* vec3_t ;

/* Variables and functions */

void _CrossProduct( vec3_t v1, vec3_t v2, vec3_t cross ){
	cross[0] = v1[1] * v2[2] - v1[2] * v2[1];
	cross[1] = v1[2] * v2[0] - v1[0] * v2[2];
	cross[2] = v1[0] * v2[1] - v1[1] * v2[0];
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
          int _len_v10 = 65025;
          int * v1 = (int *) malloc(_len_v10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
            v1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v20 = 65025;
          int * v2 = (int *) malloc(_len_v20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
            v2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cross0 = 65025;
          int * cross = (int *) malloc(_len_cross0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cross0; _i0++) {
            cross[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _CrossProduct(v1,v2,cross);
          free(v1);
          free(v2);
          free(cross);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
