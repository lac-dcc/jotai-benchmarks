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
       3            empty\n\
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
typedef  int uint64_t ;
typedef  scalar_t__ uint32_t ;
struct TYPE_2__ {int table_count; scalar_t__ table; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;

/* Variables and functions */
 int MSIX_TABLE_ENTRY_SIZE ; 

int
pci_emul_msix_twrite(struct pci_devinst *pi, uint64_t offset, int size,
		     uint64_t value)
{
	int msix_entry_offset;
	int tab_index;
	char *dest;

	/* support only 4 or 8 byte writes */
	if (size != 4 && size != 8)
		return (-1);

	/*
	 * Return if table index is beyond what device supports
	 */
	tab_index = (int) (offset / MSIX_TABLE_ENTRY_SIZE);
	if (tab_index >= pi->pi_msix.table_count)
		return (-1);

	msix_entry_offset = offset % MSIX_TABLE_ENTRY_SIZE;

	/* support only aligned writes */
	if ((msix_entry_offset % size) != 0)
		return (-1);

	dest = (char *)(pi->pi_msix.table + tab_index);
	dest += msix_entry_offset;

	if (size == 4)
		*((uint32_t *)((void *) dest)) = (uint32_t) value;
	else
		*((uint64_t *)((void *) dest)) = value;

	return (0);
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int offset = 100;
        
          int size = 100;
        
          int value = 100;
        
          int _len_pi0 = 1;
          struct pci_devinst * pi = (struct pci_devinst *) malloc(_len_pi0*sizeof(struct pci_devinst));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              pi[_i0].pi_msix.table_count = ((-2 * (next_i()%2)) + 1) * next_i();
          pi[_i0].pi_msix.table = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = pci_emul_msix_twrite(pi,offset,size,value);
          printf("%d\n", benchRet); 
          free(pi);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int offset = 255;
        
          int size = 255;
        
          int value = 255;
        
          int _len_pi0 = 65025;
          struct pci_devinst * pi = (struct pci_devinst *) malloc(_len_pi0*sizeof(struct pci_devinst));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              pi[_i0].pi_msix.table_count = ((-2 * (next_i()%2)) + 1) * next_i();
          pi[_i0].pi_msix.table = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = pci_emul_msix_twrite(pi,offset,size,value);
          printf("%d\n", benchRet); 
          free(pi);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int offset = 10;
        
          int size = 10;
        
          int value = 10;
        
          int _len_pi0 = 100;
          struct pci_devinst * pi = (struct pci_devinst *) malloc(_len_pi0*sizeof(struct pci_devinst));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              pi[_i0].pi_msix.table_count = ((-2 * (next_i()%2)) + 1) * next_i();
          pi[_i0].pi_msix.table = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = pci_emul_msix_twrite(pi,offset,size,value);
          printf("%d\n", benchRet); 
          free(pi);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pi0 = 1;
          struct pci_devinst * pi = (struct pci_devinst *) malloc(_len_pi0*sizeof(struct pci_devinst));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              pi[_i0].pi_msix.table_count = ((-2 * (next_i()%2)) + 1) * next_i();
          pi[_i0].pi_msix.table = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = pci_emul_msix_twrite(pi,offset,size,value);
          printf("%d\n", benchRet); 
          free(pi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
