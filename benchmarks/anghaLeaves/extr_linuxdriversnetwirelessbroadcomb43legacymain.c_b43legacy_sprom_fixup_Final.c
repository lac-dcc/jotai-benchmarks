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
struct TYPE_4__ {int board_rev; int /*<<< orphan*/  boardflags_lo; } ;
struct TYPE_3__ {scalar_t__ vendor; int type; } ;
struct ssb_bus {TYPE_2__ sprom; TYPE_1__ boardinfo; } ;

/* Variables and functions */
 int /*<<< orphan*/  B43legacy_BFL_PACTRL ; 
 scalar_t__ PCI_VENDOR_ID_APPLE ; 

__attribute__((used)) static void b43legacy_sprom_fixup(struct ssb_bus *bus)
{
	/* boardflags workarounds */
	if (bus->boardinfo.vendor == PCI_VENDOR_ID_APPLE &&
	    bus->boardinfo.type == 0x4E &&
	    bus->sprom.board_rev > 0x40)
		bus->sprom.boardflags_lo |= B43legacy_BFL_PACTRL;
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
            bus[_i0].sprom.board_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        bus[_i0].sprom.boardflags_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        bus[_i0].boardinfo.vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        bus[_i0].boardinfo.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          b43legacy_sprom_fixup(bus);
          free(bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
