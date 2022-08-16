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
typedef  int u32 ;
struct isci_port {int physical_port_index; } ;

/* Variables and functions */

__attribute__((used)) static bool sci_port_is_phy_mask_valid(
	struct isci_port *iport,
	u32 phy_mask)
{
	if (iport->physical_port_index == 0) {
		if (((phy_mask & 0x0F) == 0x0F)
		    || ((phy_mask & 0x03) == 0x03)
		    || ((phy_mask & 0x01) == 0x01)
		    || (phy_mask == 0))
			return true;
	} else if (iport->physical_port_index == 1) {
		if (((phy_mask & 0x02) == 0x02)
		    || (phy_mask == 0))
			return true;
	} else if (iport->physical_port_index == 2) {
		if (((phy_mask & 0x0C) == 0x0C)
		    || ((phy_mask & 0x04) == 0x04)
		    || (phy_mask == 0))
			return true;
	} else if (iport->physical_port_index == 3) {
		if (((phy_mask & 0x08) == 0x08)
		    || (phy_mask == 0))
			return true;
	}

	return false;
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
          int phy_mask = 100;
          int _len_iport0 = 1;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
            iport[_i0].physical_port_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sci_port_is_phy_mask_valid(iport,phy_mask);
          printf("%d\n", benchRet); 
          free(iport);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int phy_mask = 10;
          int _len_iport0 = 100;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
            iport[_i0].physical_port_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sci_port_is_phy_mask_valid(iport,phy_mask);
          printf("%d\n", benchRet); 
          free(iport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
