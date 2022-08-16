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
struct rockchip_pcie {scalar_t__ root_bus_nr; } ;
struct pci_bus {scalar_t__ number; scalar_t__ primary; } ;

/* Variables and functions */

__attribute__((used)) static int rockchip_pcie_valid_device(struct rockchip_pcie *rockchip,
				      struct pci_bus *bus, int dev)
{
	/* access only one slot on each root port */
	if (bus->number == rockchip->root_bus_nr && dev > 0)
		return 0;

	/*
	 * do not read more than one device on the bus directly attached
	 * to RC's downstream side.
	 */
	if (bus->primary == rockchip->root_bus_nr && dev > 0)
		return 0;

	return 1;
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
          int dev = 100;
          int _len_rockchip0 = 1;
          struct rockchip_pcie * rockchip = (struct rockchip_pcie *) malloc(_len_rockchip0*sizeof(struct rockchip_pcie));
          for(int _i0 = 0; _i0 < _len_rockchip0; _i0++) {
            rockchip[_i0].root_bus_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bus0 = 1;
          struct pci_bus * bus = (struct pci_bus *) malloc(_len_bus0*sizeof(struct pci_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
        bus[_i0].primary = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rockchip_pcie_valid_device(rockchip,bus,dev);
          printf("%d\n", benchRet); 
          free(rockchip);
          free(bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
