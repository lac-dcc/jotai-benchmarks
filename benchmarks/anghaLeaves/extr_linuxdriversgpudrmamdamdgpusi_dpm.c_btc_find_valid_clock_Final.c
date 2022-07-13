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
       0            int-bounds\n\
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
typedef  scalar_t__ u32 ;
struct amdgpu_clock_array {unsigned int count; scalar_t__* values; } ;

/* Variables and functions */

__attribute__((used)) static u32 btc_find_valid_clock(struct amdgpu_clock_array *clocks,
		                u32 max_clock, u32 requested_clock)
{
	unsigned int i;

	if ((clocks == NULL) || (clocks->count == 0))
		return (requested_clock < max_clock) ? requested_clock : max_clock;

	for (i = 0; i < clocks->count; i++) {
		if (clocks->values[i] >= requested_clock)
			return (clocks->values[i] < max_clock) ? clocks->values[i] : max_clock;
	}

	return (clocks->values[clocks->count - 1] < max_clock) ?
		clocks->values[clocks->count - 1] : max_clock;
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
          long max_clock = 100;
          long requested_clock = 100;
          int _len_clocks0 = 1;
          struct amdgpu_clock_array * clocks = (struct amdgpu_clock_array *) malloc(_len_clocks0*sizeof(struct amdgpu_clock_array));
          for(int _i0 = 0; _i0 < _len_clocks0; _i0++) {
            clocks[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clocks__i0__values0 = 1;
          clocks[_i0].values = (long *) malloc(_len_clocks__i0__values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_clocks__i0__values0; _j0++) {
            clocks[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = btc_find_valid_clock(clocks,max_clock,requested_clock);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_clocks0; _aux++) {
          free(clocks[_aux].values);
          }
          free(clocks);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long max_clock = 10;
          long requested_clock = 10;
          int _len_clocks0 = 100;
          struct amdgpu_clock_array * clocks = (struct amdgpu_clock_array *) malloc(_len_clocks0*sizeof(struct amdgpu_clock_array));
          for(int _i0 = 0; _i0 < _len_clocks0; _i0++) {
            clocks[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clocks__i0__values0 = 1;
          clocks[_i0].values = (long *) malloc(_len_clocks__i0__values0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_clocks__i0__values0; _j0++) {
            clocks[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = btc_find_valid_clock(clocks,max_clock,requested_clock);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_clocks0; _aux++) {
          free(clocks[_aux].values);
          }
          free(clocks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
