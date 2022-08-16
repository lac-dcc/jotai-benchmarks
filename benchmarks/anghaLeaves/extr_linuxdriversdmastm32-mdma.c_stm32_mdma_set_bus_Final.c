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
typedef  int u32 ;
struct stm32_mdma_device {int nr_ahb_addr_masks; int* ahb_addr_masks; } ;

/* Variables and functions */

__attribute__((used)) static void stm32_mdma_set_bus(struct stm32_mdma_device *dmadev, u32 *ctbr,
			       u32 ctbr_mask, u32 src_addr)
{
	u32 mask;
	int i;

	/* Check if memory device is on AHB or AXI */
	*ctbr &= ~ctbr_mask;
	mask = src_addr & 0xF0000000;
	for (i = 0; i < dmadev->nr_ahb_addr_masks; i++) {
		if (mask == dmadev->ahb_addr_masks[i]) {
			*ctbr |= ctbr_mask;
			break;
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
          int ctbr_mask = 100;
          int src_addr = 100;
          int _len_dmadev0 = 1;
          struct stm32_mdma_device * dmadev = (struct stm32_mdma_device *) malloc(_len_dmadev0*sizeof(struct stm32_mdma_device));
          for(int _i0 = 0; _i0 < _len_dmadev0; _i0++) {
            dmadev[_i0].nr_ahb_addr_masks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dmadev__i0__ahb_addr_masks0 = 1;
          dmadev[_i0].ahb_addr_masks = (int *) malloc(_len_dmadev__i0__ahb_addr_masks0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dmadev__i0__ahb_addr_masks0; _j0++) {
            dmadev[_i0].ahb_addr_masks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctbr0 = 1;
          int * ctbr = (int *) malloc(_len_ctbr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctbr0; _i0++) {
            ctbr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stm32_mdma_set_bus(dmadev,ctbr,ctbr_mask,src_addr);
          for(int _aux = 0; _aux < _len_dmadev0; _aux++) {
          free(dmadev[_aux].ahb_addr_masks);
          }
          free(dmadev);
          free(ctbr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
