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
struct sg_dma_descriptor {int /*<<< orphan*/  next_l; } ;
struct sg_dma_desc_info {struct sg_dma_descriptor* last_desc_virt; } ;

/* Variables and functions */
 int /*<<< orphan*/  INTERRUPT_ENABLE ; 

void descriptor_list_interrupt_disable(struct sg_dma_desc_info *desc)
{
	struct sg_dma_descriptor *d = desc->last_desc_virt;

	d->next_l &= ~INTERRUPT_ENABLE;
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
          int _len_desc0 = 1;
          struct sg_dma_desc_info * desc = (struct sg_dma_desc_info *) malloc(_len_desc0*sizeof(struct sg_dma_desc_info));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__last_desc_virt0 = 1;
          desc[_i0].last_desc_virt = (struct sg_dma_descriptor *) malloc(_len_desc__i0__last_desc_virt0*sizeof(struct sg_dma_descriptor));
          for(int _j0 = 0; _j0 < _len_desc__i0__last_desc_virt0; _j0++) {
            desc[_i0].last_desc_virt->next_l = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          descriptor_list_interrupt_disable(desc);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].last_desc_virt);
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
