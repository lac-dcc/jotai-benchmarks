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
typedef  enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef  int dma_addr_t ;

/* Variables and functions */
 int DMA_SLAVE_BUSWIDTH_1_BYTE ; 
 int DMA_SLAVE_BUSWIDTH_8_BYTES ; 

__attribute__((used)) static enum dma_slave_buswidth stm32_mdma_get_max_width(dma_addr_t addr,
							u32 buf_len, u32 tlen)
{
	enum dma_slave_buswidth max_width = DMA_SLAVE_BUSWIDTH_8_BYTES;

	for (max_width = DMA_SLAVE_BUSWIDTH_8_BYTES;
	     max_width > DMA_SLAVE_BUSWIDTH_1_BYTE;
	     max_width >>= 1) {
		/*
		 * Address and buffer length both have to be aligned on
		 * bus width
		 */
		if ((((buf_len | addr) & (max_width - 1)) == 0) &&
		    tlen >= max_width)
			break;
	}

	return max_width;
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
          int buf_len = 100;
          int tlen = 100;
          enum dma_slave_buswidth benchRet = stm32_mdma_get_max_width(addr,buf_len,tlen);
        
        break;
    }
    // big-arr
    case 1:
    {
          int addr = 255;
          int buf_len = 255;
          int tlen = 255;
          enum dma_slave_buswidth benchRet = stm32_mdma_get_max_width(addr,buf_len,tlen);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addr = 10;
          int buf_len = 10;
          int tlen = 10;
          enum dma_slave_buswidth benchRet = stm32_mdma_get_max_width(addr,buf_len,tlen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
