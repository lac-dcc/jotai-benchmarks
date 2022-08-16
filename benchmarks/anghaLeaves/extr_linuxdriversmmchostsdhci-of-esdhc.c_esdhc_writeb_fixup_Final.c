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
typedef  int u8 ;
typedef  int u32 ;
struct sdhci_host {int quirks2; } ;

/* Variables and functions */
 int ESDHC_HOST_CONTROL_RES ; 
 int SDHCI_CTRL_DMA_MASK ; 
 int SDHCI_HOST_CONTROL ; 
 int SDHCI_POWER_CONTROL ; 
 int SDHCI_QUIRK2_BROKEN_HOST_CONTROL ; 

__attribute__((used)) static u32 esdhc_writeb_fixup(struct sdhci_host *host,
				     int spec_reg, u8 value, u32 old_value)
{
	u32 ret;
	u32 dma_bits;
	u8 tmp;
	int shift = (spec_reg & 0x3) * 8;

	/*
	 * eSDHC doesn't have a standard power control register, so we do
	 * nothing here to avoid incorrect operation.
	 */
	if (spec_reg == SDHCI_POWER_CONTROL)
		return old_value;
	/*
	 * "DMA select" location is offset 0x28 in SD specification, but on
	 * P5020 or P3041, it's located at 0x29.
	 */
	if (spec_reg == SDHCI_HOST_CONTROL) {
		/*
		 * If host control register is not standard, exit
		 * this function
		 */
		if (host->quirks2 & SDHCI_QUIRK2_BROKEN_HOST_CONTROL)
			return old_value;

		/* DMA select is 22,23 bits in Protocol Control Register */
		dma_bits = (value & SDHCI_CTRL_DMA_MASK) << 5;
		ret = (old_value & (~(SDHCI_CTRL_DMA_MASK << 5))) | dma_bits;
		tmp = (value & (~SDHCI_CTRL_DMA_MASK)) |
		      (old_value & SDHCI_CTRL_DMA_MASK);
		ret = (ret & (~0xff)) | tmp;

		/* Prevent SDHCI core from writing reserved bits (e.g. HISPD) */
		ret &= ~ESDHC_HOST_CONTROL_RES;
		return ret;
	}

	ret = (old_value & (~(0xff << shift))) | (value << shift);
	return ret;
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
          int spec_reg = 100;
          int value = 100;
          int old_value = 100;
          int _len_host0 = 1;
          struct sdhci_host * host = (struct sdhci_host *) malloc(_len_host0*sizeof(struct sdhci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].quirks2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esdhc_writeb_fixup(host,spec_reg,value,old_value);
          printf("%d\n", benchRet); 
          free(host);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int spec_reg = 10;
          int value = 10;
          int old_value = 10;
          int _len_host0 = 100;
          struct sdhci_host * host = (struct sdhci_host *) malloc(_len_host0*sizeof(struct sdhci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].quirks2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esdhc_writeb_fixup(host,spec_reg,value,old_value);
          printf("%d\n", benchRet); 
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
