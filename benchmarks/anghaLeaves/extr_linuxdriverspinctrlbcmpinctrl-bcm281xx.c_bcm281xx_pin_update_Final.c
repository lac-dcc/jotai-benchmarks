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
       0            big-arr-10x\n\
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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static inline void bcm281xx_pin_update(u32 *reg_val, u32 *reg_mask,
				       u32 param_val, u32 param_shift,
				       u32 param_mask)
{
	*reg_val &= ~param_mask;
	*reg_val |= (param_val << param_shift) & param_mask;
	*reg_mask |= param_mask;
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

    // big-arr-10x
    case 0:
    {
          int param_val = 10;
          int param_shift = 10;
          int param_mask = 10;
          int _len_reg_val0 = 100;
          int * reg_val = (int *) malloc(_len_reg_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg_val0; _i0++) {
            reg_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg_mask0 = 100;
          int * reg_mask = (int *) malloc(_len_reg_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg_mask0; _i0++) {
            reg_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bcm281xx_pin_update(reg_val,reg_mask,param_val,param_shift,param_mask);
          free(reg_val);
          free(reg_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
