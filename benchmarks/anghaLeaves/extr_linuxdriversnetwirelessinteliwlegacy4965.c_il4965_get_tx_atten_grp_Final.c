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
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  CALIB_CH_GROUP_1 ; 
 int /*<<< orphan*/  CALIB_CH_GROUP_2 ; 
 int /*<<< orphan*/  CALIB_CH_GROUP_3 ; 
 int /*<<< orphan*/  CALIB_CH_GROUP_4 ; 
 int /*<<< orphan*/  CALIB_CH_GROUP_5 ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR1_FCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR1_LCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR2_FCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR2_LCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR3_FCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR3_LCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR4_FCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR4_LCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR5_FCH ; 
 scalar_t__ CALIB_IL_TX_ATTEN_GR5_LCH ; 
 int /*<<< orphan*/  EINVAL ; 

__attribute__((used)) static s32
il4965_get_tx_atten_grp(u16 channel)
{
	if (channel >= CALIB_IL_TX_ATTEN_GR5_FCH &&
	    channel <= CALIB_IL_TX_ATTEN_GR5_LCH)
		return CALIB_CH_GROUP_5;

	if (channel >= CALIB_IL_TX_ATTEN_GR1_FCH &&
	    channel <= CALIB_IL_TX_ATTEN_GR1_LCH)
		return CALIB_CH_GROUP_1;

	if (channel >= CALIB_IL_TX_ATTEN_GR2_FCH &&
	    channel <= CALIB_IL_TX_ATTEN_GR2_LCH)
		return CALIB_CH_GROUP_2;

	if (channel >= CALIB_IL_TX_ATTEN_GR3_FCH &&
	    channel <= CALIB_IL_TX_ATTEN_GR3_LCH)
		return CALIB_CH_GROUP_3;

	if (channel >= CALIB_IL_TX_ATTEN_GR4_FCH &&
	    channel <= CALIB_IL_TX_ATTEN_GR4_LCH)
		return CALIB_CH_GROUP_4;

	return -EINVAL;
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
          long channel = 100;
          int benchRet = il4965_get_tx_atten_grp(channel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long channel = 255;
          int benchRet = il4965_get_tx_atten_grp(channel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long channel = 10;
          int benchRet = il4965_get_tx_atten_grp(channel);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
