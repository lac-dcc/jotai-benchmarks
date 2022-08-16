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
typedef  scalar_t__ u16 ;

/* Variables and functions */

__attribute__((used)) static unsigned long calc_core_clk_24xx(unsigned long pclk, u16 width,
		u16 height, u16 out_width, u16 out_height, bool mem_to_mem)
{
	if (height > out_height && width > out_width)
		return pclk * 4;
	else
		return pclk * 2;
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
          unsigned long pclk = 100;
          long width = 100;
          long height = 100;
          long out_width = 100;
          long out_height = 100;
          int mem_to_mem = 100;
          unsigned long benchRet = calc_core_clk_24xx(pclk,width,height,out_width,out_height,mem_to_mem);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long pclk = 255;
          long width = 255;
          long height = 255;
          long out_width = 255;
          long out_height = 255;
          int mem_to_mem = 255;
          unsigned long benchRet = calc_core_clk_24xx(pclk,width,height,out_width,out_height,mem_to_mem);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long pclk = 10;
          long width = 10;
          long height = 10;
          long out_width = 10;
          long out_height = 10;
          int mem_to_mem = 10;
          unsigned long benchRet = calc_core_clk_24xx(pclk,width,height,out_width,out_height,mem_to_mem);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
