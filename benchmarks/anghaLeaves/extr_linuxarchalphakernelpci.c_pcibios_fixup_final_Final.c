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
struct pci_dev {int class; scalar_t__ dma_mask; } ;

/* Variables and functions */
 scalar_t__ MAX_ISA_DMA_ADDRESS ; 
 unsigned int PCI_CLASS_BRIDGE_EISA ; 
 unsigned int PCI_CLASS_BRIDGE_ISA ; 
 struct pci_dev* isa_bridge ; 

__attribute__((used)) static void pcibios_fixup_final(struct pci_dev *dev)
{
	unsigned int class = dev->class >> 8;

	if (class == PCI_CLASS_BRIDGE_ISA || class == PCI_CLASS_BRIDGE_EISA) {
		dev->dma_mask = MAX_ISA_DMA_ADDRESS - 1;
		isa_bridge = dev;
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
        dev[_i0].dma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pcibios_fixup_final(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
