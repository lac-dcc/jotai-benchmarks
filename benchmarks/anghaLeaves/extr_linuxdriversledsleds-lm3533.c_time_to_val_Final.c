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
typedef  unsigned int u8 ;

/* Variables and functions */

__attribute__((used)) static u8 time_to_val(unsigned *t, unsigned t_min, unsigned t_step,
							u8 v_min, u8 v_max)
{
	unsigned val;

	val = (*t + t_step / 2 - t_min) / t_step + v_min;

	*t = t_step * (val - v_min) + t_min;

	return (u8)val;
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
          unsigned int t_min = 100;
          unsigned int t_step = 100;
          unsigned int v_min = 100;
          unsigned int v_max = 100;
          int _len_t0 = 1;
          unsigned int * t = (unsigned int *) malloc(_len_t0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = time_to_val(t,t_min,t_step,v_min,v_max);
          printf("%u\n", benchRet); 
          free(t);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int t_min = 10;
          unsigned int t_step = 10;
          unsigned int v_min = 10;
          unsigned int v_max = 10;
          int _len_t0 = 100;
          unsigned int * t = (unsigned int *) malloc(_len_t0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = time_to_val(t,t_min,t_step,v_min,v_max);
          printf("%u\n", benchRet); 
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
