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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct omap_mcbsp {int phys_dma_base; TYPE_1__* pdata; } ;
struct TYPE_2__ {int reg_size; int reg_step; } ;

/* Variables and functions */
 int OMAP_MCBSP_REG_DRR ; 
 int OMAP_MCBSP_REG_DRR1 ; 
 int OMAP_MCBSP_REG_DXR ; 
 int OMAP_MCBSP_REG_DXR1 ; 

__attribute__((used)) static int omap_mcbsp_dma_reg_params(struct omap_mcbsp *mcbsp,
				     unsigned int stream)
{
	int data_reg;

	if (mcbsp->pdata->reg_size == 2) {
		if (stream)
			data_reg = OMAP_MCBSP_REG_DRR1;
		else
			data_reg = OMAP_MCBSP_REG_DXR1;
	} else {
		if (stream)
			data_reg = OMAP_MCBSP_REG_DRR;
		else
			data_reg = OMAP_MCBSP_REG_DXR;
	}

	return mcbsp->phys_dma_base + data_reg * mcbsp->pdata->reg_step;
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
          unsigned int stream = 100;
          int _len_mcbsp0 = 1;
          struct omap_mcbsp * mcbsp = (struct omap_mcbsp *) malloc(_len_mcbsp0*sizeof(struct omap_mcbsp));
          for(int _i0 = 0; _i0 < _len_mcbsp0; _i0++) {
            mcbsp[_i0].phys_dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mcbsp__i0__pdata0 = 1;
          mcbsp[_i0].pdata = (struct TYPE_2__ *) malloc(_len_mcbsp__i0__pdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mcbsp__i0__pdata0; _j0++) {
            mcbsp[_i0].pdata->reg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        mcbsp[_i0].pdata->reg_step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = omap_mcbsp_dma_reg_params(mcbsp,stream);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mcbsp0; _aux++) {
          free(mcbsp[_aux].pdata);
          }
          free(mcbsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
