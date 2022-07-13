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
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct ixgbe_hw {int dummy; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  IXGBE_NOT_IMPLEMENTED ; 

__attribute__((used)) static s32 ixgbe_write_phy_reg_x550em(struct ixgbe_hw *hw, u32 reg_addr,
				      u32 device_type, u16 phy_data)
{
	return IXGBE_NOT_IMPLEMENTED;
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
          int reg_addr = 100;
          int device_type = 100;
          int phy_data = 100;
          int _len_hw0 = 1;
          struct ixgbe_hw * hw = (struct ixgbe_hw *) malloc(_len_hw0*sizeof(struct ixgbe_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_write_phy_reg_x550em(hw,reg_addr,device_type,phy_data);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg_addr = 255;
          int device_type = 255;
          int phy_data = 255;
          int _len_hw0 = 65025;
          struct ixgbe_hw * hw = (struct ixgbe_hw *) malloc(_len_hw0*sizeof(struct ixgbe_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_write_phy_reg_x550em(hw,reg_addr,device_type,phy_data);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg_addr = 10;
          int device_type = 10;
          int phy_data = 10;
          int _len_hw0 = 100;
          struct ixgbe_hw * hw = (struct ixgbe_hw *) malloc(_len_hw0*sizeof(struct ixgbe_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_write_phy_reg_x550em(hw,reg_addr,device_type,phy_data);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
