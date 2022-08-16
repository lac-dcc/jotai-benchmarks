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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int sfp_type; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  IXGBE_ERR_SFP_NOT_PRESENT ; 
 int /*<<< orphan*/  IXGBE_ERR_SFP_NOT_SUPPORTED ; 
#define  ixgbe_sfp_type_1g_cu_core0 141 
#define  ixgbe_sfp_type_1g_cu_core1 140 
#define  ixgbe_sfp_type_1g_lx_core0 139 
#define  ixgbe_sfp_type_1g_lx_core1 138 
#define  ixgbe_sfp_type_1g_sx_core0 137 
#define  ixgbe_sfp_type_1g_sx_core1 136 
#define  ixgbe_sfp_type_da_act_lmt_core0 135 
#define  ixgbe_sfp_type_da_act_lmt_core1 134 
#define  ixgbe_sfp_type_da_cu_core0 133 
#define  ixgbe_sfp_type_da_cu_core1 132 
#define  ixgbe_sfp_type_not_present 131 
#define  ixgbe_sfp_type_srlr_core0 130 
#define  ixgbe_sfp_type_srlr_core1 129 
#define  ixgbe_sfp_type_unknown 128 

__attribute__((used)) static s32 ixgbe_supported_sfp_modules_X550em(struct ixgbe_hw *hw, bool *linear)
{
	switch (hw->phy.sfp_type) {
	case ixgbe_sfp_type_not_present:
		return IXGBE_ERR_SFP_NOT_PRESENT;
	case ixgbe_sfp_type_da_cu_core0:
	case ixgbe_sfp_type_da_cu_core1:
		*linear = true;
		break;
	case ixgbe_sfp_type_srlr_core0:
	case ixgbe_sfp_type_srlr_core1:
	case ixgbe_sfp_type_da_act_lmt_core0:
	case ixgbe_sfp_type_da_act_lmt_core1:
	case ixgbe_sfp_type_1g_sx_core0:
	case ixgbe_sfp_type_1g_sx_core1:
	case ixgbe_sfp_type_1g_lx_core0:
	case ixgbe_sfp_type_1g_lx_core1:
		*linear = false;
		break;
	case ixgbe_sfp_type_unknown:
	case ixgbe_sfp_type_1g_cu_core0:
	case ixgbe_sfp_type_1g_cu_core1:
	default:
		return IXGBE_ERR_SFP_NOT_SUPPORTED;
	}

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
          int _len_hw0 = 1;
          struct ixgbe_hw * hw = (struct ixgbe_hw *) malloc(_len_hw0*sizeof(struct ixgbe_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].phy.sfp_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_linear0 = 1;
          int * linear = (int *) malloc(_len_linear0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linear0; _i0++) {
            linear[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_supported_sfp_modules_X550em(hw,linear);
          printf("%d\n", benchRet); 
          free(hw);
          free(linear);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
