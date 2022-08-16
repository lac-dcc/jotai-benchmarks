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
typedef  scalar_t__ u32 ;

/* Variables and functions */
 scalar_t__ DPA_CLK_100M ; 
 scalar_t__ DPA_CLK_150M ; 
 scalar_t__ DPA_CLK_30M ; 
 scalar_t__ DPA_CLK_50M ; 
 scalar_t__ DPA_CLK_70M ; 
 int DPA_CLK_RANGE_100_150M ; 
 int DPA_CLK_RANGE_150M ; 
 int DPA_CLK_RANGE_30M ; 
 int DPA_CLK_RANGE_30_50M ; 
 int DPA_CLK_RANGE_50_70M ; 
 int DPA_CLK_RANGE_70_100M ; 

__attribute__((used)) static int get_clk_range_index(u32 Clk)
{
	if (Clk < DPA_CLK_30M)
		return DPA_CLK_RANGE_30M;
	else if (Clk < DPA_CLK_50M)
		return DPA_CLK_RANGE_30_50M;
	else if (Clk < DPA_CLK_70M)
		return DPA_CLK_RANGE_50_70M;
	else if (Clk < DPA_CLK_100M)
		return DPA_CLK_RANGE_70_100M;
	else if (Clk < DPA_CLK_150M)
		return DPA_CLK_RANGE_100_150M;
	else
		return DPA_CLK_RANGE_150M;
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
          long Clk = 100;
          int benchRet = get_clk_range_index(Clk);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long Clk = 255;
          int benchRet = get_clk_range_index(Clk);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long Clk = 10;
          int benchRet = get_clk_range_index(Clk);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
