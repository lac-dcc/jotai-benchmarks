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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 scalar_t__ ODM_RATEMCS16 ; 
 scalar_t__ ODM_RATEMCS24 ; 
 scalar_t__ ODM_RATEMCS8 ; 
 scalar_t__ ODM_RATEVHTSS1MCS0 ; 
 scalar_t__ ODM_RATEVHTSS2MCS0 ; 
 scalar_t__ ODM_RATEVHTSS3MCS0 ; 
 scalar_t__ ODM_RATEVHTSS4MCS0 ; 

u8 phydm_rate_order_compute(void *dm_void, u8 rate_idx)
{
	u8 rate_order = 0;

	if (rate_idx >= ODM_RATEVHTSS4MCS0) {
		rate_idx -= ODM_RATEVHTSS4MCS0;
		/**/
	} else if (rate_idx >= ODM_RATEVHTSS3MCS0) {
		rate_idx -= ODM_RATEVHTSS3MCS0;
		/**/
	} else if (rate_idx >= ODM_RATEVHTSS2MCS0) {
		rate_idx -= ODM_RATEVHTSS2MCS0;
		/**/
	} else if (rate_idx >= ODM_RATEVHTSS1MCS0) {
		rate_idx -= ODM_RATEVHTSS1MCS0;
		/**/
	} else if (rate_idx >= ODM_RATEMCS24) {
		rate_idx -= ODM_RATEMCS24;
		/**/
	} else if (rate_idx >= ODM_RATEMCS16) {
		rate_idx -= ODM_RATEMCS16;
		/**/
	} else if (rate_idx >= ODM_RATEMCS8) {
		rate_idx -= ODM_RATEMCS8;
		/**/
	}
	rate_order = rate_idx;

	return rate_order;
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
          long rate_idx = 100;
          void * dm_void;
          long benchRet = phydm_rate_order_compute(dm_void,rate_idx);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long rate_idx = 255;
          void * dm_void;
          long benchRet = phydm_rate_order_compute(dm_void,rate_idx);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long rate_idx = 10;
          void * dm_void;
          long benchRet = phydm_rate_order_compute(dm_void,rate_idx);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
