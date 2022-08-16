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
typedef  int u16 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int bdisp_hw_get_inc(u32 from, u32 to, u16 *inc)
{
	u32 tmp;

	if (!to)
		return -EINVAL;

	if (to == from) {
		*inc = 1 << 10;
		return 0;
	}

	tmp = (from << 10) / to;
	if ((tmp > 0xFFFF) || (!tmp))
		/* overflow (downscale x 63) or too small (upscale x 1024) */
		return -EINVAL;

	*inc = (u16)tmp;

	return 0;
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
          int from = 100;
          int to = 100;
          int _len_inc0 = 1;
          int * inc = (int *) malloc(_len_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inc0; _i0++) {
            inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bdisp_hw_get_inc(from,to,inc);
          printf("%d\n", benchRet); 
          free(inc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int from = 10;
          int to = 10;
          int _len_inc0 = 100;
          int * inc = (int *) malloc(_len_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inc0; _i0++) {
            inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bdisp_hw_get_inc(from,to,inc);
          printf("%d\n", benchRet); 
          free(inc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
