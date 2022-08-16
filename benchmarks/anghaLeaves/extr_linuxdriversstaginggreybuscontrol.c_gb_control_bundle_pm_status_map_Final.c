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

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 
 int ENOMSG ; 
 int EREMOTEIO ; 
#define  GB_CONTROL_BUNDLE_PM_BUSY 131 
#define  GB_CONTROL_BUNDLE_PM_FAIL 130 
#define  GB_CONTROL_BUNDLE_PM_INVAL 129 
#define  GB_CONTROL_BUNDLE_PM_NA 128 

__attribute__((used)) static int gb_control_bundle_pm_status_map(u8 status)
{
	switch (status) {
	case GB_CONTROL_BUNDLE_PM_INVAL:
		return -EINVAL;
	case GB_CONTROL_BUNDLE_PM_BUSY:
		return -EBUSY;
	case GB_CONTROL_BUNDLE_PM_NA:
		return -ENOMSG;
	case GB_CONTROL_BUNDLE_PM_FAIL:
	default:
		return -EREMOTEIO;
	}
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
          int status = 100;
          int benchRet = gb_control_bundle_pm_status_map(status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          int benchRet = gb_control_bundle_pm_status_map(status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          int benchRet = gb_control_bundle_pm_status_map(status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
