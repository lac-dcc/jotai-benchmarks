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
typedef  int u64 ;
typedef  int u32 ;
struct i40iw_hmc_pble_rsrc {int fpm_base_addr; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 fpm_to_idx(struct i40iw_hmc_pble_rsrc *pble_rsrc, u64 addr)
{
	return (addr - (pble_rsrc->fpm_base_addr)) >> 3;
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
          int addr = 100;
          int _len_pble_rsrc0 = 1;
          struct i40iw_hmc_pble_rsrc * pble_rsrc = (struct i40iw_hmc_pble_rsrc *) malloc(_len_pble_rsrc0*sizeof(struct i40iw_hmc_pble_rsrc));
          for(int _i0 = 0; _i0 < _len_pble_rsrc0; _i0++) {
            pble_rsrc[_i0].fpm_base_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fpm_to_idx(pble_rsrc,addr);
          printf("%d\n", benchRet); 
          free(pble_rsrc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int addr = 10;
          int _len_pble_rsrc0 = 100;
          struct i40iw_hmc_pble_rsrc * pble_rsrc = (struct i40iw_hmc_pble_rsrc *) malloc(_len_pble_rsrc0*sizeof(struct i40iw_hmc_pble_rsrc));
          for(int _i0 = 0; _i0 < _len_pble_rsrc0; _i0++) {
            pble_rsrc[_i0].fpm_base_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fpm_to_idx(pble_rsrc,addr);
          printf("%d\n", benchRet); 
          free(pble_rsrc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
