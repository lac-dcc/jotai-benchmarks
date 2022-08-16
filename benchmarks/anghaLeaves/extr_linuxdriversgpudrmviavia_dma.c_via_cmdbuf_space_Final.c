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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ dma_offset; scalar_t__* hw_addr_ptr; scalar_t__ dma_low; scalar_t__ dma_high; scalar_t__ agpAddr; } ;
typedef  TYPE_1__ drm_via_private_t ;

/* Variables and functions */

__attribute__((used)) static uint32_t via_cmdbuf_space(drm_via_private_t *dev_priv)
{
	uint32_t agp_base = dev_priv->dma_offset + (uint32_t) dev_priv->agpAddr;
	uint32_t hw_addr = *(dev_priv->hw_addr_ptr) - agp_base;

	return ((hw_addr <= dev_priv->dma_low) ?
		(dev_priv->dma_high + hw_addr - dev_priv->dma_low) :
		(hw_addr - dev_priv->dma_low));
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
          int _len_dev_priv0 = 1;
          struct TYPE_3__ * dev_priv = (struct TYPE_3__ *) malloc(_len_dev_priv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].dma_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev_priv__i0__hw_addr_ptr0 = 1;
          dev_priv[_i0].hw_addr_ptr = (long *) malloc(_len_dev_priv__i0__hw_addr_ptr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__hw_addr_ptr0; _j0++) {
            dev_priv[_i0].hw_addr_ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev_priv[_i0].dma_low = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].dma_high = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].agpAddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = via_cmdbuf_space(dev_priv);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev_priv0; _aux++) {
          free(dev_priv[_aux].hw_addr_ptr);
          }
          free(dev_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
