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
       1            big-arr-10x\n\
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
struct tegra_dma_channel {int dummy; } ;
typedef  enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;

/* Variables and functions */
 int TEGRA_APBDMA_AHBSEQ_BURST_1 ; 
 int TEGRA_APBDMA_AHBSEQ_BURST_4 ; 
 int TEGRA_APBDMA_AHBSEQ_BURST_8 ; 

__attribute__((used)) static inline int get_burst_size(struct tegra_dma_channel *tdc,
	u32 burst_size, enum dma_slave_buswidth slave_bw, int len)
{
	int burst_byte;
	int burst_ahb_width;

	/*
	 * burst_size from client is in terms of the bus_width.
	 * convert them into AHB memory width which is 4 byte.
	 */
	burst_byte = burst_size * slave_bw;
	burst_ahb_width = burst_byte / 4;

	/* If burst size is 0 then calculate the burst size based on length */
	if (!burst_ahb_width) {
		if (len & 0xF)
			return TEGRA_APBDMA_AHBSEQ_BURST_1;
		else if ((len >> 4) & 0x1)
			return TEGRA_APBDMA_AHBSEQ_BURST_4;
		else
			return TEGRA_APBDMA_AHBSEQ_BURST_8;
	}
	if (burst_ahb_width < 4)
		return TEGRA_APBDMA_AHBSEQ_BURST_1;
	else if (burst_ahb_width < 8)
		return TEGRA_APBDMA_AHBSEQ_BURST_4;
	else
		return TEGRA_APBDMA_AHBSEQ_BURST_8;
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
          int burst_size = 100;
          enum dma_slave_buswidth slave_bw = 0;
          int len = 100;
          int _len_tdc0 = 1;
          struct tegra_dma_channel * tdc = (struct tegra_dma_channel *) malloc(_len_tdc0*sizeof(struct tegra_dma_channel));
          for(int _i0 = 0; _i0 < _len_tdc0; _i0++) {
            tdc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_burst_size(tdc,burst_size,slave_bw,len);
          printf("%d\n", benchRet); 
          free(tdc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int burst_size = 10;
          enum dma_slave_buswidth slave_bw = 0;
          int len = 10;
          int _len_tdc0 = 100;
          struct tegra_dma_channel * tdc = (struct tegra_dma_channel *) malloc(_len_tdc0*sizeof(struct tegra_dma_channel));
          for(int _i0 = 0; _i0 < _len_tdc0; _i0++) {
            tdc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_burst_size(tdc,burst_size,slave_bw,len);
          printf("%d\n", benchRet); 
          free(tdc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
