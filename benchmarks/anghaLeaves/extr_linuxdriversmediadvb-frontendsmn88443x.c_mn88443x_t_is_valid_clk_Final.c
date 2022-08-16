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
 scalar_t__ CLK_DIRECT ; 
 scalar_t__ CLK_MAX ; 
 scalar_t__ DIRECT_IF_44MHZ ; 
 scalar_t__ DIRECT_IF_57MHZ ; 
 scalar_t__ LOW_IF_4MHZ ; 

__attribute__((used)) static bool mn88443x_t_is_valid_clk(u32 adckt, u32 if_freq)
{
	if (if_freq == DIRECT_IF_57MHZ) {
		if (adckt >= CLK_DIRECT && adckt <= 21000000)
			return true;
		if (adckt >= 25300000 && adckt <= CLK_MAX)
			return true;
	} else if (if_freq == DIRECT_IF_44MHZ) {
		if (adckt >= 25000000 && adckt <= CLK_MAX)
			return true;
	} else if (if_freq >= LOW_IF_4MHZ && if_freq < DIRECT_IF_44MHZ) {
		if (adckt >= CLK_DIRECT && adckt <= CLK_MAX)
			return true;
	}

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
          long adckt = 100;
          long if_freq = 100;
          int benchRet = mn88443x_t_is_valid_clk(adckt,if_freq);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long adckt = 255;
          long if_freq = 255;
          int benchRet = mn88443x_t_is_valid_clk(adckt,if_freq);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long adckt = 10;
          long if_freq = 10;
          int benchRet = mn88443x_t_is_valid_clk(adckt,if_freq);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
