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
typedef  int u32 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int camif_get_scaler_factor(u32 src, u32 tar, u32 *ratio, u32 *shift)
{
	unsigned int sh = 6;

	if (src >= 64 * tar)
		return -EINVAL;

	while (sh--) {
		unsigned int tmp = 1 << sh;
		if (src >= tar * tmp) {
			*shift = sh, *ratio = tmp;
			return 0;
		}
	}
	*shift = 0, *ratio = 1;
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
          int src = 100;
          int tar = 100;
          int _len_ratio0 = 1;
          int * ratio = (int *) malloc(_len_ratio0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ratio0; _i0++) {
            ratio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_shift0 = 1;
          int * shift = (int *) malloc(_len_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_shift0; _i0++) {
            shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = camif_get_scaler_factor(src,tar,ratio,shift);
          printf("%d\n", benchRet); 
          free(ratio);
          free(shift);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
