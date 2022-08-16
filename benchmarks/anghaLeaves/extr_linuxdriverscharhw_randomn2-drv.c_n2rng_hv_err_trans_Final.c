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
 int EAGAIN ; 
 int EBUSY ; 
 int EFAULT ; 
 int EINVAL ; 
 int EIO ; 
 int EPERM ; 
#define  HV_EBADALIGN 134 
#define  HV_EBUSY 133 
#define  HV_EIO 132 
#define  HV_ENOACCESS 131 
#define  HV_ENORADDR 130 
#define  HV_EOK 129 
#define  HV_EWOULDBLOCK 128 

__attribute__((used)) static int n2rng_hv_err_trans(unsigned long hv_err)
{
	switch (hv_err) {
	case HV_EOK:
		return 0;
	case HV_EWOULDBLOCK:
		return -EAGAIN;
	case HV_ENOACCESS:
		return -EPERM;
	case HV_EIO:
		return -EIO;
	case HV_EBUSY:
		return -EBUSY;
	case HV_EBADALIGN:
	case HV_ENORADDR:
		return -EFAULT;
	default:
		return -EINVAL;
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
          unsigned long hv_err = 100;
          int benchRet = n2rng_hv_err_trans(hv_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long hv_err = 255;
          int benchRet = n2rng_hv_err_trans(hv_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long hv_err = 10;
          int benchRet = n2rng_hv_err_trans(hv_err);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
