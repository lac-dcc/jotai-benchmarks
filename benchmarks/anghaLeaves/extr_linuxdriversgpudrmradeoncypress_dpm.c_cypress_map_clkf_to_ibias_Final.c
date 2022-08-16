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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ mpll; } ;
struct radeon_device {TYPE_2__ clock; } ;

/* Variables and functions */

u32 cypress_map_clkf_to_ibias(struct radeon_device *rdev, u32 clkf)
{
	u32 ref_clk = rdev->clock.mpll.reference_freq;
	u32 vco = clkf * ref_clk;

	/* 100 Mhz ref clk */
	if (ref_clk == 10000) {
		if (vco > 500000)
			return 0xC6;
		if (vco > 400000)
			return 0x9D;
		if (vco > 330000)
			return 0x6C;
		if (vco > 250000)
			return 0x2B;
		if (vco >  160000)
			return 0x5B;
		if (vco > 120000)
			return 0x0A;
		return 0x4B;
	}

	/* 27 Mhz ref clk */
	if (vco > 250000)
		return 0x8B;
	if (vco > 200000)
		return 0xCC;
	if (vco > 150000)
		return 0x9B;
	return 0x6B;
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
          int clkf = 100;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].clock.mpll.reference_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cypress_map_clkf_to_ibias(rdev,clkf);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int clkf = 10;
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].clock.mpll.reference_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cypress_map_clkf_to_ibias(rdev,clkf);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
