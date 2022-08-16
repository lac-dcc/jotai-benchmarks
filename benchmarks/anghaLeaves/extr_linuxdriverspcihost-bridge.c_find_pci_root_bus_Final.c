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
struct pci_bus {struct pci_bus* parent; } ;

/* Variables and functions */

__attribute__((used)) static struct pci_bus *find_pci_root_bus(struct pci_bus *bus)
{
	while (bus->parent)
		bus = bus->parent;

	return bus;
}


// ------------------------------------------------------------------------- //

struct pci_bus *_allocate_bus(int length, struct pci_bus *aux_bus[]) {
  struct pci_bus *walker = (struct pci_bus *)malloc(sizeof(struct pci_bus));

  aux_bus[0] = walker;
  walker->parent = NULL;

  struct pci_bus *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct pci_bus *)malloc(sizeof(struct pci_bus));
    walker = walker->parent;
    aux_bus[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_bus(struct pci_bus *aux_bus[], int aux_bus_size) {
  for(int i = 0; i < aux_bus_size; i++) 
    if(aux_bus[i])
      free(aux_bus[i]);
}




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
          struct pci_bus * aux_bus[1];
          struct pci_bus * bus = _allocate_bus(1, aux_bus);
          struct pci_bus * benchRet = find_pci_root_bus(bus);
          _delete_bus(aux_bus, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
