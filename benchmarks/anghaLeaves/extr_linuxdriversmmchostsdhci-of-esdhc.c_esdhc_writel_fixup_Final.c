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
typedef  int u32 ;
struct sdhci_host {int dummy; } ;

/* Variables and functions */
 int SDHCI_INT_BLK_GAP ; 
 int SDHCI_INT_ENABLE ; 

__attribute__((used)) static u32 esdhc_writel_fixup(struct sdhci_host *host,
				     int spec_reg, u32 value, u32 old_value)
{
	u32 ret;

	/*
	 * Enabling IRQSTATEN[BGESEN] is just to set IRQSTAT[BGE]
	 * when SYSCTL[RSTD] is set for some special operations.
	 * No any impact on other operation.
	 */
	if (spec_reg == SDHCI_INT_ENABLE)
		ret = value | SDHCI_INT_BLK_GAP;
	else
		ret = value;

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
            host[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esdhc_writel_fixup(host,spec_reg,value,old_value);
          printf("%d\n", benchRet); 
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int spec_reg = 255;
          int value = 255;
          int old_value = 255;
          int _len_host0 = 65025;
          struct sdhci_host * host = (struct sdhci_host *) malloc(_len_host0*sizeof(struct sdhci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esdhc_writel_fixup(host,spec_reg,value,old_value);
          printf("%d\n", benchRet); 
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int spec_reg = 10;
          int value = 10;
          int old_value = 10;
          int _len_host0 = 100;
          struct sdhci_host * host = (struct sdhci_host *) malloc(_len_host0*sizeof(struct sdhci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esdhc_writel_fixup(host,spec_reg,value,old_value);
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
