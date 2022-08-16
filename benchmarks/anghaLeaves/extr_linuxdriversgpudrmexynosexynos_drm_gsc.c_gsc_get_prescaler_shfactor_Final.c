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

__attribute__((used)) static void gsc_get_prescaler_shfactor(u32 hratio, u32 vratio, u32 *shfactor)
{
	if (hratio == 4 && vratio == 4)
		*shfactor = 4;
	else if ((hratio == 4 && vratio == 2) ||
		 (hratio == 2 && vratio == 4))
		*shfactor = 3;
	else if ((hratio == 4 && vratio == 1) ||
		 (hratio == 1 && vratio == 4) ||
		 (hratio == 2 && vratio == 2))
		*shfactor = 2;
	else if (hratio == 1 && vratio == 1)
		*shfactor = 0;
	else
		*shfactor = 1;
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
          int hratio = 100;
          int vratio = 100;
          int _len_shfactor0 = 1;
          int * shfactor = (int *) malloc(_len_shfactor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_shfactor0; _i0++) {
            shfactor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gsc_get_prescaler_shfactor(hratio,vratio,shfactor);
          free(shfactor);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int hratio = 10;
          int vratio = 10;
          int _len_shfactor0 = 100;
          int * shfactor = (int *) malloc(_len_shfactor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_shfactor0; _i0++) {
            shfactor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gsc_get_prescaler_shfactor(hratio,vratio,shfactor);
          free(shfactor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
