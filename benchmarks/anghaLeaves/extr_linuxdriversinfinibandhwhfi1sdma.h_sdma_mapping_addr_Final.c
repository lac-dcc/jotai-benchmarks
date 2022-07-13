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
struct sdma_desc {int* qw; } ;
typedef  int dma_addr_t ;

/* Variables and functions */
 int SDMA_DESC0_PHY_ADDR_SHIFT ; 
 int SDMA_DESC0_PHY_ADDR_SMASK ; 

__attribute__((used)) static inline dma_addr_t sdma_mapping_addr(struct sdma_desc *d)
{
	return (d->qw[0] & SDMA_DESC0_PHY_ADDR_SMASK)
		>> SDMA_DESC0_PHY_ADDR_SHIFT;
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
          int _len_d0 = 1;
          struct sdma_desc * d = (struct sdma_desc *) malloc(_len_d0*sizeof(struct sdma_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__qw0 = 1;
          d[_i0].qw = (int *) malloc(_len_d__i0__qw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_d__i0__qw0; _j0++) {
            d[_i0].qw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sdma_mapping_addr(d);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].qw);
          }
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_d0 = 65025;
          struct sdma_desc * d = (struct sdma_desc *) malloc(_len_d0*sizeof(struct sdma_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__qw0 = 1;
          d[_i0].qw = (int *) malloc(_len_d__i0__qw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_d__i0__qw0; _j0++) {
            d[_i0].qw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sdma_mapping_addr(d);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].qw);
          }
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_d0 = 100;
          struct sdma_desc * d = (struct sdma_desc *) malloc(_len_d0*sizeof(struct sdma_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__qw0 = 1;
          d[_i0].qw = (int *) malloc(_len_d__i0__qw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_d__i0__qw0; _j0++) {
            d[_i0].qw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sdma_mapping_addr(d);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].qw);
          }
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
