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
struct pci_dev {int class; scalar_t__ hdr_type; TYPE_2__* resource; TYPE_1__* bus; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_3__ {int /*<<< orphan*/ * parent; } ;

/* Variables and functions */
 int DEVICE_COUNT_RESOURCE ; 
 int PCI_CLASS_BRIDGE_OTHER ; 
 int PCI_CLASS_PROCESSOR_POWERPC ; 
 scalar_t__ PCI_HEADER_TYPE_NORMAL ; 

__attribute__((used)) static void fixup_hide_host_resource_fsl(struct pci_dev *dev)
{
	int i, class = dev->class >> 8;
	/* When configured as agent, programing interface = 1 */
	int prog_if = dev->class & 0xf;

	if ((class == PCI_CLASS_PROCESSOR_POWERPC ||
	     class == PCI_CLASS_BRIDGE_OTHER) &&
		(dev->hdr_type == PCI_HEADER_TYPE_NORMAL) &&
		(prog_if == 0) &&
		(dev->bus->parent == NULL)) {
		for (i = 0; i < DEVICE_COUNT_RESOURCE; i++) {
			dev->resource[i].start = 0;
			dev->resource[i].end = 0;
			dev->resource[i].flags = 0;
		}
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
          int _len_dev0 = 1;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].hdr_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__resource0 = 1;
          dev[_i0].resource = (struct TYPE_4__ *) malloc(_len_dev__i0__resource0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__resource0; _j0++) {
            dev[_i0].resource->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->end = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__bus0 = 1;
          dev[_i0].bus = (struct TYPE_3__ *) malloc(_len_dev__i0__bus0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__bus0; _j0++) {
              int _len_dev__i0__bus_parent0 = 1;
          dev[_i0].bus->parent = (int *) malloc(_len_dev__i0__bus_parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__bus_parent0; _j0++) {
            dev[_i0].bus->parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          fixup_hide_host_resource_fsl(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bus);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
