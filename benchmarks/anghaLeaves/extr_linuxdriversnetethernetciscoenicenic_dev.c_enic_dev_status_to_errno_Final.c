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

/* Variables and functions */
 int EBUSY ; 
 int EFAULT ; 
 int EINPROGRESS ; 
 int EINVAL ; 
 int ENETDOWN ; 
 int ENOMEM ; 
 int EOPNOTSUPP ; 
 int EPERM ; 
#define  ERR_EBADSTATE 140 
#define  ERR_EBUSY 139 
#define  ERR_ECMDUNKNOWN 138 
#define  ERR_EFAULT 137 
#define  ERR_EINPROGRESS 136 
#define  ERR_EINVAL 135 
#define  ERR_ELINKDOWN 134 
#define  ERR_EMAXRES 133 
#define  ERR_ENOMEM 132 
#define  ERR_ENOTSUPPORTED 131 
#define  ERR_EPERM 130 
#define  ERR_ETIMEDOUT 129 
#define  ERR_SUCCESS 128 
 int ETIMEDOUT ; 

int enic_dev_status_to_errno(int devcmd_status)
{
	switch (devcmd_status) {
	case ERR_SUCCESS:
		return 0;
	case ERR_EINVAL:
		return -EINVAL;
	case ERR_EFAULT:
		return -EFAULT;
	case ERR_EPERM:
		return -EPERM;
	case ERR_EBUSY:
		return -EBUSY;
	case ERR_ECMDUNKNOWN:
	case ERR_ENOTSUPPORTED:
		return -EOPNOTSUPP;
	case ERR_EBADSTATE:
		return -EINVAL;
	case ERR_ENOMEM:
		return -ENOMEM;
	case ERR_ETIMEDOUT:
		return -ETIMEDOUT;
	case ERR_ELINKDOWN:
		return -ENETDOWN;
	case ERR_EINPROGRESS:
		return -EINPROGRESS;
	case ERR_EMAXRES:
	default:
		return (devcmd_status < 0) ? devcmd_status : -1;
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
          int devcmd_status = 100;
          int benchRet = enic_dev_status_to_errno(devcmd_status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int devcmd_status = 255;
          int benchRet = enic_dev_status_to_errno(devcmd_status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int devcmd_status = 10;
          int benchRet = enic_dev_status_to_errno(devcmd_status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
