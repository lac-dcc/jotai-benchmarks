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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct malidp_hw_device {TYPE_2__* hw; } ;
struct TYPE_3__ {int /*<<< orphan*/  dc_base; int /*<<< orphan*/  se_base; } ;
struct TYPE_4__ {TYPE_1__ map; } ;

/* Variables and functions */
#define  MALIDP_DC_BLOCK 129 
#define  MALIDP_SE_BLOCK 128 

__attribute__((used)) static inline u32 malidp_get_block_base(struct malidp_hw_device *hwdev,
					u8 block)
{
	switch (block) {
	case MALIDP_SE_BLOCK:
		return hwdev->hw->map.se_base;
	case MALIDP_DC_BLOCK:
		return hwdev->hw->map.dc_base;
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
          int block = 100;
          int _len_hwdev0 = 1;
          struct malidp_hw_device * hwdev = (struct malidp_hw_device *) malloc(_len_hwdev0*sizeof(struct malidp_hw_device));
          for(int _i0 = 0; _i0 < _len_hwdev0; _i0++) {
              int _len_hwdev__i0__hw0 = 1;
          hwdev[_i0].hw = (struct TYPE_4__ *) malloc(_len_hwdev__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hwdev__i0__hw0; _j0++) {
            hwdev[_i0].hw->map.dc_base = ((-2 * (next_i()%2)) + 1) * next_i();
        hwdev[_i0].hw->map.se_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = malidp_get_block_base(hwdev,block);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwdev0; _aux++) {
          free(hwdev[_aux].hw);
          }
          free(hwdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
