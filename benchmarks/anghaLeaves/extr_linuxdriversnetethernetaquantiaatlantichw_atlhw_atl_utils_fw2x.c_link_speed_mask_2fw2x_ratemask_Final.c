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
typedef  enum hw_atl_fw2x_rate { ____Placeholder_hw_atl_fw2x_rate } hw_atl_fw2x_rate ;

/* Variables and functions */
 int AQ_NIC_RATE_100M ; 
 int AQ_NIC_RATE_10G ; 
 int AQ_NIC_RATE_1G ; 
 int AQ_NIC_RATE_2GS ; 
 int AQ_NIC_RATE_5G ; 
 int AQ_NIC_RATE_5GSR ; 
 int FW2X_RATE_100M ; 
 int FW2X_RATE_10G ; 
 int FW2X_RATE_1G ; 
 int FW2X_RATE_2G5 ; 
 int FW2X_RATE_5G ; 

__attribute__((used)) static enum hw_atl_fw2x_rate link_speed_mask_2fw2x_ratemask(u32 speed)
{
	enum hw_atl_fw2x_rate rate = 0;

	if (speed & AQ_NIC_RATE_10G)
		rate |= FW2X_RATE_10G;

	if (speed & AQ_NIC_RATE_5G)
		rate |= FW2X_RATE_5G;

	if (speed & AQ_NIC_RATE_5GSR)
		rate |= FW2X_RATE_5G;

	if (speed & AQ_NIC_RATE_2GS)
		rate |= FW2X_RATE_2G5;

	if (speed & AQ_NIC_RATE_1G)
		rate |= FW2X_RATE_1G;

	if (speed & AQ_NIC_RATE_100M)
		rate |= FW2X_RATE_100M;

	return rate;
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
          int speed = 100;
          enum hw_atl_fw2x_rate benchRet = link_speed_mask_2fw2x_ratemask(speed);
        
        break;
    }
    // big-arr
    case 1:
    {
          int speed = 255;
          enum hw_atl_fw2x_rate benchRet = link_speed_mask_2fw2x_ratemask(speed);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int speed = 10;
          enum hw_atl_fw2x_rate benchRet = link_speed_mask_2fw2x_ratemask(speed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
