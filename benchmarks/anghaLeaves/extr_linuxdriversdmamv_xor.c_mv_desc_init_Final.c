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
typedef  int /*<<< orphan*/  u32 ;
struct mv_xor_desc_slot {struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int /*<<< orphan*/  byte_count; int /*<<< orphan*/  phy_dest_addr; int /*<<< orphan*/  desc_command; scalar_t__ phy_next_desc; int /*<<< orphan*/  status; } ;
typedef  enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef  int /*<<< orphan*/  dma_addr_t ;

/* Variables and functions */
 int DMA_PREP_INTERRUPT ; 
 int /*<<< orphan*/  XOR_DESC_DMA_OWNED ; 
 int /*<<< orphan*/  XOR_DESC_EOD_INT_EN ; 

__attribute__((used)) static void mv_desc_init(struct mv_xor_desc_slot *desc,
			 dma_addr_t addr, u32 byte_count,
			 enum dma_ctrl_flags flags)
{
	struct mv_xor_desc *hw_desc = desc->hw_desc;

	hw_desc->status = XOR_DESC_DMA_OWNED;
	hw_desc->phy_next_desc = 0;
	/* Enable end-of-descriptor interrupts only for DMA_PREP_INTERRUPT */
	hw_desc->desc_command = (flags & DMA_PREP_INTERRUPT) ?
				XOR_DESC_EOD_INT_EN : 0;
	hw_desc->phy_dest_addr = addr;
	hw_desc->byte_count = byte_count;
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
          int addr = 100;
          int byte_count = 100;
          enum dma_ctrl_flags flags = 0;
          int _len_desc0 = 1;
          struct mv_xor_desc_slot * desc = (struct mv_xor_desc_slot *) malloc(_len_desc0*sizeof(struct mv_xor_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_desc0 = 1;
          desc[_i0].hw_desc = (struct mv_xor_desc *) malloc(_len_desc__i0__hw_desc0*sizeof(struct mv_xor_desc));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc0; _j0++) {
            desc[_i0].hw_desc->byte_count = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].hw_desc->phy_dest_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].hw_desc->desc_command = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].hw_desc->phy_next_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].hw_desc->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mv_desc_init(desc,addr,byte_count,flags);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_desc);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
