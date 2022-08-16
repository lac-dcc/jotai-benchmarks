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
typedef  int u8 ;
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */
 int /*<<< orphan*/  FTDMAC020_LLI_DST_SEL ; 
 int /*<<< orphan*/  FTDMAC020_LLI_SRC_SEL ; 
 int /*<<< orphan*/  PL080_CONTROL_DST_AHB2 ; 
 int /*<<< orphan*/  PL080_CONTROL_SRC_AHB2 ; 
 int PL08X_AHB1 ; 
 int PL08X_AHB2 ; 

__attribute__((used)) static u32 pl08x_select_bus(bool ftdmac020, u8 src, u8 dst)
{
	u32 cctl = 0;
	u32 dst_ahb2;
	u32 src_ahb2;

	/* The FTDMAC020 use different bits to indicate src/dst bus */
	if (ftdmac020) {
		dst_ahb2 = FTDMAC020_LLI_DST_SEL;
		src_ahb2 = FTDMAC020_LLI_SRC_SEL;
	} else {
		dst_ahb2 = PL080_CONTROL_DST_AHB2;
		src_ahb2 = PL080_CONTROL_SRC_AHB2;
	}

	if (!(dst & PL08X_AHB1) || ((dst & PL08X_AHB2) && (src & PL08X_AHB1)))
		cctl |= dst_ahb2;
	if (!(src & PL08X_AHB1) || ((src & PL08X_AHB2) && !(dst & PL08X_AHB2)))
		cctl |= src_ahb2;

	return cctl;
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
          int ftdmac020 = 100;
          int src = 100;
          int dst = 100;
          int benchRet = pl08x_select_bus(ftdmac020,src,dst);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ftdmac020 = 255;
          int src = 255;
          int dst = 255;
          int benchRet = pl08x_select_bus(ftdmac020,src,dst);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ftdmac020 = 10;
          int src = 10;
          int dst = 10;
          int benchRet = pl08x_select_bus(ftdmac020,src,dst);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
