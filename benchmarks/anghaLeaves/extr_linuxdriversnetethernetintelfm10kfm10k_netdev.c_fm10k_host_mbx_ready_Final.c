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
struct TYPE_2__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {scalar_t__ host_ready; struct fm10k_hw hw; } ;

/* Variables and functions */
 scalar_t__ fm10k_mac_vf ; 

__attribute__((used)) static bool fm10k_host_mbx_ready(struct fm10k_intfc *interface)
{
	struct fm10k_hw *hw = &interface->hw;

	return (hw->mac.type == fm10k_mac_vf || interface->host_ready);
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
            interface[_i0].host_ready = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].hw.mac.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_host_mbx_ready(interface);
          printf("%d\n", benchRet); 
          free(interface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
