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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static u8 si_get_mclk_frequency_ratio(u32 memory_clock, bool strobe_mode)
{
	u8 mc_para_index;

	if (strobe_mode) {
		if (memory_clock < 12500)
			mc_para_index = 0x00;
		else if (memory_clock > 47500)
			mc_para_index = 0x0f;
		else
			mc_para_index = (u8)((memory_clock - 10000) / 2500);
	} else {
		if (memory_clock < 65000)
			mc_para_index = 0x00;
		else if (memory_clock > 135000)
			mc_para_index = 0x0f;
		else
			mc_para_index = (u8)((memory_clock - 60000) / 5000);
	}
	return mc_para_index;
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
          int memory_clock = 100;
          int strobe_mode = 100;
          int benchRet = si_get_mclk_frequency_ratio(memory_clock,strobe_mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int memory_clock = 255;
          int strobe_mode = 255;
          int benchRet = si_get_mclk_frequency_ratio(memory_clock,strobe_mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int memory_clock = 10;
          int strobe_mode = 10;
          int benchRet = si_get_mclk_frequency_ratio(memory_clock,strobe_mode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
