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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 scalar_t__ IB_MGMT_CLASS_BIS ; 
 scalar_t__ IB_MGMT_CLASS_DEVICE_ADM ; 
 scalar_t__ IB_MGMT_CLASS_DEVICE_MGMT ; 
 scalar_t__ IB_MGMT_CLASS_SUBN_ADM ; 
 scalar_t__ IB_MGMT_CLASS_VENDOR_RANGE2_END ; 
 scalar_t__ IB_MGMT_CLASS_VENDOR_RANGE2_START ; 

int ib_is_mad_class_rmpp(u8 mgmt_class)
{
	if ((mgmt_class == IB_MGMT_CLASS_SUBN_ADM) ||
	    (mgmt_class == IB_MGMT_CLASS_DEVICE_MGMT) ||
	    (mgmt_class == IB_MGMT_CLASS_DEVICE_ADM) ||
	    (mgmt_class == IB_MGMT_CLASS_BIS) ||
	    ((mgmt_class >= IB_MGMT_CLASS_VENDOR_RANGE2_START) &&
	     (mgmt_class <= IB_MGMT_CLASS_VENDOR_RANGE2_END)))
		return 1;
	return 0;
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
          long mgmt_class = 100;
          int benchRet = ib_is_mad_class_rmpp(mgmt_class);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long mgmt_class = 255;
          int benchRet = ib_is_mad_class_rmpp(mgmt_class);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long mgmt_class = 10;
          int benchRet = ib_is_mad_class_rmpp(mgmt_class);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
