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
typedef  scalar_t__ u8 ;
typedef  scalar_t__ u16 ;
struct brcmnand_controller {int reg_spacing; scalar_t__* cs_offsets; scalar_t__* cs0_offsets; scalar_t__* reg_offsets; } ;
typedef  enum brcmnand_cs_reg { ____Placeholder_brcmnand_cs_reg } brcmnand_cs_reg ;

/* Variables and functions */
 size_t BRCMNAND_CS0_BASE ; 
 size_t BRCMNAND_CS1_BASE ; 

__attribute__((used)) static inline u16 brcmnand_cs_offset(struct brcmnand_controller *ctrl, int cs,
				     enum brcmnand_cs_reg reg)
{
	u16 offs_cs0 = ctrl->reg_offsets[BRCMNAND_CS0_BASE];
	u16 offs_cs1 = ctrl->reg_offsets[BRCMNAND_CS1_BASE];
	u8 cs_offs;

	if (cs == 0 && ctrl->cs0_offsets)
		cs_offs = ctrl->cs0_offsets[reg];
	else
		cs_offs = ctrl->cs_offsets[reg];

	if (cs && offs_cs1)
		return offs_cs1 + (cs - 1) * ctrl->reg_spacing + cs_offs;

	return offs_cs0 + cs * ctrl->reg_spacing + cs_offs;
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
          int cs = 100;
          enum brcmnand_cs_reg reg = 0;
          int _len_ctrl0 = 1;
          struct brcmnand_controller * ctrl = (struct brcmnand_controller *) malloc(_len_ctrl0*sizeof(struct brcmnand_controller));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].reg_spacing = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctrl__i0__cs_offsets0 = 1;
          ctrl[_i0].cs_offsets = (long *) malloc(_len_ctrl__i0__cs_offsets0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__cs_offsets0; _j0++) {
            ctrl[_i0].cs_offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctrl__i0__cs0_offsets0 = 1;
          ctrl[_i0].cs0_offsets = (long *) malloc(_len_ctrl__i0__cs0_offsets0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__cs0_offsets0; _j0++) {
            ctrl[_i0].cs0_offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctrl__i0__reg_offsets0 = 1;
          ctrl[_i0].reg_offsets = (long *) malloc(_len_ctrl__i0__reg_offsets0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__reg_offsets0; _j0++) {
            ctrl[_i0].reg_offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = brcmnand_cs_offset(ctrl,cs,reg);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].cs_offsets);
          }
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].cs0_offsets);
          }
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].reg_offsets);
          }
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
