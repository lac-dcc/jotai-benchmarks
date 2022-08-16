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

/* Variables and functions */

__attribute__((used)) static bool wm5110_is_rev_d_adsp_memory(unsigned int reg)
{
	if ((reg >= 0x100000 && reg < 0x106000) ||
	    (reg >= 0x180000 && reg < 0x182000) ||
	    (reg >= 0x190000 && reg < 0x198000) ||
	    (reg >= 0x1a8000 && reg < 0x1aa000) ||
	    (reg >= 0x200000 && reg < 0x20f000) ||
	    (reg >= 0x280000 && reg < 0x282000) ||
	    (reg >= 0x290000 && reg < 0x29c000) ||
	    (reg >= 0x2a6000 && reg < 0x2b4000) ||
	    (reg >= 0x300000 && reg < 0x30f000) ||
	    (reg >= 0x380000 && reg < 0x382000) ||
	    (reg >= 0x390000 && reg < 0x3a2000) ||
	    (reg >= 0x3a6000 && reg < 0x3b4000) ||
	    (reg >= 0x400000 && reg < 0x406000) ||
	    (reg >= 0x480000 && reg < 0x482000) ||
	    (reg >= 0x490000 && reg < 0x498000) ||
	    (reg >= 0x4a8000 && reg < 0x4aa000))
		return true;
	else
		return false;
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
          unsigned int reg = 100;
          int benchRet = wm5110_is_rev_d_adsp_memory(reg);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
          int benchRet = wm5110_is_rev_d_adsp_memory(reg);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
          int benchRet = wm5110_is_rev_d_adsp_memory(reg);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
