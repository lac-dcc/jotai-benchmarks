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
typedef  scalar_t__ uint64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t clamp_max(uint64_t n, uint64_t max, int *clamped)
{
	if (n <= max)
		return n;
	*clamped = 1;
	return max;
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
          long n = 100;
          long max = 100;
          int _len_clamped0 = 1;
          int * clamped = (int *) malloc(_len_clamped0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clamped0; _i0++) {
            clamped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = clamp_max(n,max,clamped);
          printf("%ld\n", benchRet); 
          free(clamped);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long n = 10;
          long max = 10;
          int _len_clamped0 = 100;
          int * clamped = (int *) malloc(_len_clamped0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clamped0; _i0++) {
            clamped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = clamp_max(n,max,clamped);
          printf("%ld\n", benchRet); 
          free(clamped);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
