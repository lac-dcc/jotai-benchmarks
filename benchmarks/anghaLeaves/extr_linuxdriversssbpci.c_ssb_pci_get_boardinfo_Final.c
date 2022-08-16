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
struct ssb_bus {TYPE_1__* host_pci; } ;
struct ssb_boardinfo {int /*<<< orphan*/  type; int /*<<< orphan*/  vendor; } ;
struct TYPE_2__ {int /*<<< orphan*/  subsystem_device; int /*<<< orphan*/  subsystem_vendor; } ;

/* Variables and functions */

__attribute__((used)) static void ssb_pci_get_boardinfo(struct ssb_bus *bus,
				  struct ssb_boardinfo *bi)
{
	bi->vendor = bus->host_pci->subsystem_vendor;
	bi->type = bus->host_pci->subsystem_device;
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
          int _len_bus0 = 1;
          struct ssb_bus * bus = (struct ssb_bus *) malloc(_len_bus0*sizeof(struct ssb_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
              int _len_bus__i0__host_pci0 = 1;
          bus[_i0].host_pci = (struct TYPE_2__ *) malloc(_len_bus__i0__host_pci0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bus__i0__host_pci0; _j0++) {
            bus[_i0].host_pci->subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
        bus[_i0].host_pci->subsystem_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bi0 = 1;
          struct ssb_boardinfo * bi = (struct ssb_boardinfo *) malloc(_len_bi0*sizeof(struct ssb_boardinfo));
          for(int _i0 = 0; _i0 < _len_bi0; _i0++) {
            bi[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        bi[_i0].vendor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ssb_pci_get_boardinfo(bus,bi);
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].host_pci);
          }
          free(bus);
          free(bi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
