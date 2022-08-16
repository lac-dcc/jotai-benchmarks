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
struct cstate {int id; } ;

/* Variables and functions */
#define  NBP1 131 
#define  NON_PC0 130 
#define  PC1 129 
#define  PC6 128 
 unsigned int PCI_NBP1_ENTERED_BIT ; 
 unsigned int PCI_NBP1_STAT_OFFSET ; 
 unsigned int PCI_NON_PC0_ENABLE_BIT ; 
 unsigned int PCI_NON_PC0_OFFSET ; 
 unsigned int PCI_PC1_ENABLE_BIT ; 
 unsigned int PCI_PC1_OFFSET ; 
 unsigned int PCI_PC6_ENABLE_BIT ; 
 unsigned int PCI_PC6_OFFSET ; 

__attribute__((used)) static int amd_fam14h_get_pci_info(struct cstate *state,
				   unsigned int *pci_offset,
				   unsigned int *enable_bit,
				   unsigned int cpu)
{
	switch (state->id) {
	case NON_PC0:
		*enable_bit = PCI_NON_PC0_ENABLE_BIT;
		*pci_offset = PCI_NON_PC0_OFFSET;
		break;
	case PC1:
		*enable_bit = PCI_PC1_ENABLE_BIT;
		*pci_offset = PCI_PC1_OFFSET;
		break;
	case PC6:
		*enable_bit = PCI_PC6_ENABLE_BIT;
		*pci_offset = PCI_PC6_OFFSET;
		break;
	case NBP1:
		*enable_bit = PCI_NBP1_ENTERED_BIT;
		*pci_offset = PCI_NBP1_STAT_OFFSET;
		break;
	default:
		return -1;
	};
	return 0;
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
          unsigned int cpu = 100;
          int _len_state0 = 1;
          struct cstate * state = (struct cstate *) malloc(_len_state0*sizeof(struct cstate));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pci_offset0 = 1;
          unsigned int * pci_offset = (unsigned int *) malloc(_len_pci_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pci_offset0; _i0++) {
            pci_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enable_bit0 = 1;
          unsigned int * enable_bit = (unsigned int *) malloc(_len_enable_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_enable_bit0; _i0++) {
            enable_bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = amd_fam14h_get_pci_info(state,pci_offset,enable_bit,cpu);
          printf("%d\n", benchRet); 
          free(state);
          free(pci_offset);
          free(enable_bit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
