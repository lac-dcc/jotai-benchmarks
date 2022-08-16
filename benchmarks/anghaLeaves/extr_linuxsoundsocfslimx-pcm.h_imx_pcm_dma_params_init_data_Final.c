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
struct imx_dma_data {int dma_request; int peripheral_type; int /*<<< orphan*/  priority; } ;
typedef  enum sdma_peripheral_type { ____Placeholder_sdma_peripheral_type } sdma_peripheral_type ;

/* Variables and functions */
 int /*<<< orphan*/  DMA_PRIO_HIGH ; 

__attribute__((used)) static inline void
imx_pcm_dma_params_init_data(struct imx_dma_data *dma_data,
	int dma, enum sdma_peripheral_type peripheral_type)
{
	dma_data->dma_request = dma;
	dma_data->priority = DMA_PRIO_HIGH;
	dma_data->peripheral_type = peripheral_type;
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
          int dma = 100;
          enum sdma_peripheral_type peripheral_type = 0;
          int _len_dma_data0 = 1;
          struct imx_dma_data * dma_data = (struct imx_dma_data *) malloc(_len_dma_data0*sizeof(struct imx_dma_data));
          for(int _i0 = 0; _i0 < _len_dma_data0; _i0++) {
            dma_data[_i0].dma_request = ((-2 * (next_i()%2)) + 1) * next_i();
        dma_data[_i0].peripheral_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dma_data[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          imx_pcm_dma_params_init_data(dma_data,dma,peripheral_type);
          free(dma_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
