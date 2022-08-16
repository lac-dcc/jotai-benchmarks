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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static inline u32
calc_P(u32 src, u32 target, int *div)
{
	u32 clk0 = src, clk1 = src;
	for (*div = 0; *div <= 7; (*div)++) {
		if (clk0 <= target) {
			clk1 = clk0 << (*div ? 1 : 0);
			break;
		}
		clk0 >>= 1;
	}

	if (target - clk0 <= clk1 - target)
		return clk0;
	(*div)--;
	return clk1;
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
          int src = 100;
          int target = 100;
          int _len_div0 = 1;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calc_P(src,target,div);
          printf("%d\n", benchRet); 
          free(div);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int src = 10;
          int target = 10;
          int _len_div0 = 100;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calc_P(src,target,div);
          printf("%d\n", benchRet); 
          free(div);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
