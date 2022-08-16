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
typedef  enum dev_type { ____Placeholder_dev_type } dev_type ;

/* Variables and functions */
 int DEV_UNKNOWN ; 
 int DEV_X2 ; 
 int DEV_X4 ; 
#define  SDRAM_MCOPT1_WDTH_16 129 
#define  SDRAM_MCOPT1_WDTH_32 128 
 int SDRAM_MCOPT1_WDTH_MASK ; 

__attribute__((used)) static enum dev_type ppc4xx_edac_get_dtype(u32 mcopt1)
{
	switch (mcopt1 & SDRAM_MCOPT1_WDTH_MASK) {
	case SDRAM_MCOPT1_WDTH_16:
		return DEV_X2;
	case SDRAM_MCOPT1_WDTH_32:
		return DEV_X4;
	default:
		return DEV_UNKNOWN;
	}
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
          int mcopt1 = 100;
          enum dev_type benchRet = ppc4xx_edac_get_dtype(mcopt1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mcopt1 = 255;
          enum dev_type benchRet = ppc4xx_edac_get_dtype(mcopt1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mcopt1 = 10;
          enum dev_type benchRet = ppc4xx_edac_get_dtype(mcopt1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
