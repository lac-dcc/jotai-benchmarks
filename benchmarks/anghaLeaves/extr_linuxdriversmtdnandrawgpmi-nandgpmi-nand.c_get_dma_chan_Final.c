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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct gpmi_nand_data {struct dma_chan** dma_chans; } ;
struct dma_chan {int dummy; } ;

/* Variables and functions */

struct dma_chan *get_dma_chan(struct gpmi_nand_data *this)
{
	/* We use the DMA channel 0 to access all the nand chips. */
	return this->dma_chans[0];
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
          int _len_this0 = 1;
          struct gpmi_nand_data * this = (struct gpmi_nand_data *) malloc(_len_this0*sizeof(struct gpmi_nand_data));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
              int _len_this__i0__dma_chans0 = 1;
          this[_i0].dma_chans = (struct dma_chan **) malloc(_len_this__i0__dma_chans0*sizeof(struct dma_chan *));
          for(int _j0 = 0; _j0 < _len_this__i0__dma_chans0; _j0++) {
            int _len_this__i0__dma_chans1 = 1;
            this[_i0].dma_chans[_j0] = (struct dma_chan *) malloc(_len_this__i0__dma_chans1*sizeof(struct dma_chan));
            for(int _j1 = 0; _j1 < _len_this__i0__dma_chans1; _j1++) {
              this[_i0].dma_chans[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dma_chan * benchRet = get_dma_chan(this);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_this0; _aux++) {
          free(*(this[_aux].dma_chans));
        free(this[_aux].dma_chans);
          }
          free(this);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_this0 = 65025;
          struct gpmi_nand_data * this = (struct gpmi_nand_data *) malloc(_len_this0*sizeof(struct gpmi_nand_data));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
              int _len_this__i0__dma_chans0 = 1;
          this[_i0].dma_chans = (struct dma_chan **) malloc(_len_this__i0__dma_chans0*sizeof(struct dma_chan *));
          for(int _j0 = 0; _j0 < _len_this__i0__dma_chans0; _j0++) {
            int _len_this__i0__dma_chans1 = 1;
            this[_i0].dma_chans[_j0] = (struct dma_chan *) malloc(_len_this__i0__dma_chans1*sizeof(struct dma_chan));
            for(int _j1 = 0; _j1 < _len_this__i0__dma_chans1; _j1++) {
              this[_i0].dma_chans[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dma_chan * benchRet = get_dma_chan(this);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_this0; _aux++) {
          free(*(this[_aux].dma_chans));
        free(this[_aux].dma_chans);
          }
          free(this);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_this0 = 100;
          struct gpmi_nand_data * this = (struct gpmi_nand_data *) malloc(_len_this0*sizeof(struct gpmi_nand_data));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
              int _len_this__i0__dma_chans0 = 1;
          this[_i0].dma_chans = (struct dma_chan **) malloc(_len_this__i0__dma_chans0*sizeof(struct dma_chan *));
          for(int _j0 = 0; _j0 < _len_this__i0__dma_chans0; _j0++) {
            int _len_this__i0__dma_chans1 = 1;
            this[_i0].dma_chans[_j0] = (struct dma_chan *) malloc(_len_this__i0__dma_chans1*sizeof(struct dma_chan));
            for(int _j1 = 0; _j1 < _len_this__i0__dma_chans1; _j1++) {
              this[_i0].dma_chans[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dma_chan * benchRet = get_dma_chan(this);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_this0; _aux++) {
          free(*(this[_aux].dma_chans));
        free(this[_aux].dma_chans);
          }
          free(this);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
