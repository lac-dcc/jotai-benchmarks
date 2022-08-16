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
struct slot {int type; } ;
typedef  enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;

/* Variables and functions */
 int PCI_SPEED_100MHz_PCIX ; 
 int PCI_SPEED_133MHz_PCIX ; 
 int PCI_SPEED_33MHz ; 
 int PCI_SPEED_66MHz ; 
 int PCI_SPEED_66MHz_PCIX ; 
 int PCI_SPEED_UNKNOWN ; 

__attribute__((used)) static enum pci_bus_speed get_max_bus_speed(struct slot *slot)
{
	enum pci_bus_speed speed;
	switch (slot->type) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		speed = PCI_SPEED_33MHz;	/* speed for case 1-6 */
		break;
	case 7:
	case 8:
		speed = PCI_SPEED_66MHz;
		break;
	case 11:
	case 14:
		speed = PCI_SPEED_66MHz_PCIX;
		break;
	case 12:
	case 15:
		speed = PCI_SPEED_100MHz_PCIX;
		break;
	case 13:
	case 16:
		speed = PCI_SPEED_133MHz_PCIX;
		break;
	default:
		speed = PCI_SPEED_UNKNOWN;
		break;
	}

	return speed;
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
          int _len_slot0 = 1;
          struct slot * slot = (struct slot *) malloc(_len_slot0*sizeof(struct slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
            slot[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum pci_bus_speed benchRet = get_max_bus_speed(slot);
          free(slot);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_slot0 = 100;
          struct slot * slot = (struct slot *) malloc(_len_slot0*sizeof(struct slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
            slot[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum pci_bus_speed benchRet = get_max_bus_speed(slot);
          free(slot);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
