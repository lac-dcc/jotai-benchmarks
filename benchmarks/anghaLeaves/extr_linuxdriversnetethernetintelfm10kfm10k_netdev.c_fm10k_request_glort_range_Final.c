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
typedef  int u16 ;
struct TYPE_4__ {int total_vfs; } ;
struct TYPE_3__ {int dglort_map; } ;
struct fm10k_hw {TYPE_2__ iov; TYPE_1__ mac; } ;
struct fm10k_intfc {int glort; int glort_count; struct fm10k_hw hw; } ;

/* Variables and functions */
 int FM10K_DGLORTMAP_MASK_SHIFT ; 
 int FM10K_DGLORTMAP_NONE ; 

__attribute__((used)) static void fm10k_request_glort_range(struct fm10k_intfc *interface)
{
	struct fm10k_hw *hw = &interface->hw;
	u16 mask = (~hw->mac.dglort_map) >> FM10K_DGLORTMAP_MASK_SHIFT;

	/* establish GLORT base */
	interface->glort = hw->mac.dglort_map & FM10K_DGLORTMAP_NONE;
	interface->glort_count = 0;

	/* nothing we can do until mask is allocated */
	if (hw->mac.dglort_map == FM10K_DGLORTMAP_NONE)
		return;

	/* we support 3 possible GLORT configurations.
	 * 1: VFs consume all but the last 1
	 * 2: VFs and PF split glorts with possible gap between
	 * 3: VFs allocated first 64, all others belong to PF
	 */
	if (mask <= hw->iov.total_vfs) {
		interface->glort_count = 1;
		interface->glort += mask;
	} else if (mask < 64) {
		interface->glort_count = (mask + 1) / 2;
		interface->glort += interface->glort_count;
	} else {
		interface->glort_count = mask - 63;
		interface->glort += 64;
	}
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
          int _len_interface0 = 1;
          struct fm10k_intfc * interface = (struct fm10k_intfc *) malloc(_len_interface0*sizeof(struct fm10k_intfc));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
            interface[_i0].glort = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].glort_count = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].hw.iov.total_vfs = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].hw.mac.dglort_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fm10k_request_glort_range(interface);
          free(interface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
