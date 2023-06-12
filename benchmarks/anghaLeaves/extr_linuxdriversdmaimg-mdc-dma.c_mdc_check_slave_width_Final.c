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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int dst_addr_width; int src_addr_width; } ;
struct mdc_chan {TYPE_2__* mdma; TYPE_1__ config; } ;
typedef  enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef  enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
struct TYPE_4__ {int bus_width; } ;

/* Variables and functions */
 int DMA_MEM_TO_DEV ; 
#define  DMA_SLAVE_BUSWIDTH_1_BYTE 131 
#define  DMA_SLAVE_BUSWIDTH_2_BYTES 130 
#define  DMA_SLAVE_BUSWIDTH_4_BYTES 129 
#define  DMA_SLAVE_BUSWIDTH_8_BYTES 128 
 int EINVAL ; 

__attribute__((used)) static int mdc_check_slave_width(struct mdc_chan *mchan,
				 enum dma_transfer_direction dir)
{
	enum dma_slave_buswidth width;

	if (dir == DMA_MEM_TO_DEV)
		width = mchan->config.dst_addr_width;
	else
		width = mchan->config.src_addr_width;

	switch (width) {
	case DMA_SLAVE_BUSWIDTH_1_BYTE:
	case DMA_SLAVE_BUSWIDTH_2_BYTES:
	case DMA_SLAVE_BUSWIDTH_4_BYTES:
	case DMA_SLAVE_BUSWIDTH_8_BYTES:
		break;
	default:
		return -EINVAL;
	}

	if (width > mchan->mdma->bus_width)
		return -EINVAL;

	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          enum dma_transfer_direction dir = 0;
        
          int _len_mchan0 = 65025;
          struct mdc_chan * mchan = (struct mdc_chan *) malloc(_len_mchan0*sizeof(struct mdc_chan));
          for(int _i0 = 0; _i0 < _len_mchan0; _i0++) {
              int _len_mchan__i0__mdma0 = 1;
          mchan[_i0].mdma = (struct TYPE_4__ *) malloc(_len_mchan__i0__mdma0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mchan__i0__mdma0; _j0++) {
              mchan[_i0].mdma->bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          mchan[_i0].config.dst_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          mchan[_i0].config.src_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = mdc_check_slave_width(mchan,dir);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mchan0; _aux++) {
          free(mchan[_aux].mdma);
          }
          free(mchan);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          enum dma_transfer_direction dir = 0;
        
          int _len_mchan0 = 100;
          struct mdc_chan * mchan = (struct mdc_chan *) malloc(_len_mchan0*sizeof(struct mdc_chan));
          for(int _i0 = 0; _i0 < _len_mchan0; _i0++) {
              int _len_mchan__i0__mdma0 = 1;
          mchan[_i0].mdma = (struct TYPE_4__ *) malloc(_len_mchan__i0__mdma0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mchan__i0__mdma0; _j0++) {
              mchan[_i0].mdma->bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          mchan[_i0].config.dst_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          mchan[_i0].config.src_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = mdc_check_slave_width(mchan,dir);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mchan0; _aux++) {
          free(mchan[_aux].mdma);
          }
          free(mchan);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          enum dma_transfer_direction dir = 0;
        
          int _len_mchan0 = 1;
          struct mdc_chan * mchan = (struct mdc_chan *) malloc(_len_mchan0*sizeof(struct mdc_chan));
          for(int _i0 = 0; _i0 < _len_mchan0; _i0++) {
              int _len_mchan__i0__mdma0 = 1;
          mchan[_i0].mdma = (struct TYPE_4__ *) malloc(_len_mchan__i0__mdma0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mchan__i0__mdma0; _j0++) {
              mchan[_i0].mdma->bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          mchan[_i0].config.dst_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          mchan[_i0].config.src_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = mdc_check_slave_width(mchan,dir);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mchan0; _aux++) {
          free(mchan[_aux].mdma);
          }
          free(mchan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
