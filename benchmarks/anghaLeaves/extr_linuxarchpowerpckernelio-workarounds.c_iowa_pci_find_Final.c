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
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct resource {unsigned long start; unsigned long end; } ;
struct pci_controller {unsigned long pci_io_size; struct resource* mem_resources; scalar_t__ io_base_virt; } ;
struct iowa_bus {struct pci_controller* phb; } ;

/* Variables and functions */
 int iowa_bus_count ; 
 struct iowa_bus* iowa_busses ; 

__attribute__((used)) static struct iowa_bus *iowa_pci_find(unsigned long vaddr, unsigned long paddr)
{
	int i, j;
	struct resource *res;
	unsigned long vstart, vend;

	for (i = 0; i < iowa_bus_count; i++) {
		struct iowa_bus *bus = &iowa_busses[i];
		struct pci_controller *phb = bus->phb;

		if (vaddr) {
			vstart = (unsigned long)phb->io_base_virt;
			vend = vstart + phb->pci_io_size - 1;
			if ((vaddr >= vstart) && (vaddr <= vend))
				return bus;
		}

		if (paddr)
			for (j = 0; j < 3; j++) {
				res = &phb->mem_resources[j];
				if (paddr >= res->start && paddr <= res->end)
					return bus;
			}
	}

	return NULL;
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
          unsigned long vaddr = 100;
          unsigned long paddr = 100;
          struct iowa_bus * benchRet = iowa_pci_find(vaddr,paddr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long vaddr = 255;
          unsigned long paddr = 255;
          struct iowa_bus * benchRet = iowa_pci_find(vaddr,paddr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long vaddr = 10;
          unsigned long paddr = 10;
          struct iowa_bus * benchRet = iowa_pci_find(vaddr,paddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
