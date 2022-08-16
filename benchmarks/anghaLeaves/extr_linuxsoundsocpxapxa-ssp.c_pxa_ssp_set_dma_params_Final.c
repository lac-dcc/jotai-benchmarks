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
struct ssp_device {scalar_t__ phys_base; } ;
struct snd_dmaengine_dai_dma_data {int maxburst; scalar_t__ addr; int /*<<< orphan*/  addr_width; } ;

/* Variables and functions */
 int /*<<< orphan*/  DMA_SLAVE_BUSWIDTH_2_BYTES ; 
 int /*<<< orphan*/  DMA_SLAVE_BUSWIDTH_4_BYTES ; 
 scalar_t__ SSDR ; 

__attribute__((used)) static void pxa_ssp_set_dma_params(struct ssp_device *ssp, int width4,
			int out, struct snd_dmaengine_dai_dma_data *dma)
{
	dma->addr_width = width4 ? DMA_SLAVE_BUSWIDTH_4_BYTES :
				   DMA_SLAVE_BUSWIDTH_2_BYTES;
	dma->maxburst = 16;
	dma->addr = ssp->phys_base + SSDR;
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
          int width4 = 100;
          int out = 100;
          int _len_ssp0 = 1;
          struct ssp_device * ssp = (struct ssp_device *) malloc(_len_ssp0*sizeof(struct ssp_device));
          for(int _i0 = 0; _i0 < _len_ssp0; _i0++) {
            ssp[_i0].phys_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dma0 = 1;
          struct snd_dmaengine_dai_dma_data * dma = (struct snd_dmaengine_dai_dma_data *) malloc(_len_dma0*sizeof(struct snd_dmaengine_dai_dma_data));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].maxburst = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pxa_ssp_set_dma_params(ssp,width4,out,dma);
          free(ssp);
          free(dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
