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
 int EINVAL ; 
 int EIO ; 
 int ENOMEM ; 
 int EPERM ; 
#define  SN_HWPERF_OP_BUSY 134 
#define  SN_HWPERF_OP_INVAL 133 
#define  SN_HWPERF_OP_IO_ERROR 132 
#define  SN_HWPERF_OP_NOMEM 131 
#define  SN_HWPERF_OP_NO_PERM 130 
#define  SN_HWPERF_OP_OK 129 
#define  SN_HWPERF_OP_RECONFIGURE 128 

__attribute__((used)) static int sn_hwperf_map_err(int hwperf_err)
{
	int e;

	switch(hwperf_err) {
	case SN_HWPERF_OP_OK:
		e = 0;
		break;

	case SN_HWPERF_OP_NOMEM:
		e = -ENOMEM;
		break;

	case SN_HWPERF_OP_NO_PERM:
		e = -EPERM;
		break;

	case SN_HWPERF_OP_IO_ERROR:
		e = -EIO;
		break;

	case SN_HWPERF_OP_BUSY:
		e = -EBUSY;
		break;

	case SN_HWPERF_OP_RECONFIGURE:
		e = -EAGAIN;
		break;

	case SN_HWPERF_OP_INVAL:
	default:
		e = -EINVAL;
		break;
	}

	return e;
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
          int hwperf_err = 100;
          int benchRet = sn_hwperf_map_err(hwperf_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hwperf_err = 255;
          int benchRet = sn_hwperf_map_err(hwperf_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hwperf_err = 10;
          int benchRet = sn_hwperf_map_err(hwperf_err);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
