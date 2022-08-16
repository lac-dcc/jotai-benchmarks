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
       0            int-bounds\n\
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
typedef  scalar_t__ bits64 ;

/* Variables and functions */

void add128(bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 * z0Ptr,
		   bits64 * z1Ptr)
{
	bits64 z1;

	z1 = a1 + b1;
	*z1Ptr = z1;
	*z0Ptr = a0 + b0 + (z1 < a1);
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
          long a0 = 100;
          long a1 = 100;
          long b0 = 100;
          long b1 = 100;
          int _len_z0Ptr0 = 1;
          long * z0Ptr = (long *) malloc(_len_z0Ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_z0Ptr0; _i0++) {
            z0Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z1Ptr0 = 1;
          long * z1Ptr = (long *) malloc(_len_z1Ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_z1Ptr0; _i0++) {
            z1Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add128(a0,a1,b0,b1,z0Ptr,z1Ptr);
          free(z0Ptr);
          free(z1Ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
