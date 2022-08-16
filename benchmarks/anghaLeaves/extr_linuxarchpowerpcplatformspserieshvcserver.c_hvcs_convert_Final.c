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
 int EBUSY ; 
 int EINVAL ; 
 int EIO ; 
 int EPERM ; 
#define  H_BUSY 138 
#define  H_FUNCTION 137 
#define  H_HARDWARE 136 
#define  H_LONG_BUSY_ORDER_100_MSEC 135 
#define  H_LONG_BUSY_ORDER_100_SEC 134 
#define  H_LONG_BUSY_ORDER_10_MSEC 133 
#define  H_LONG_BUSY_ORDER_10_SEC 132 
#define  H_LONG_BUSY_ORDER_1_MSEC 131 
#define  H_LONG_BUSY_ORDER_1_SEC 130 
#define  H_PARAMETER 129 
#define  H_SUCCESS 128 

__attribute__((used)) static int hvcs_convert(long to_convert)
{
	switch (to_convert) {
		case H_SUCCESS:
			return 0;
		case H_PARAMETER:
			return -EINVAL;
		case H_HARDWARE:
			return -EIO;
		case H_BUSY:
		case H_LONG_BUSY_ORDER_1_MSEC:
		case H_LONG_BUSY_ORDER_10_MSEC:
		case H_LONG_BUSY_ORDER_100_MSEC:
		case H_LONG_BUSY_ORDER_1_SEC:
		case H_LONG_BUSY_ORDER_10_SEC:
		case H_LONG_BUSY_ORDER_100_SEC:
			return -EBUSY;
		case H_FUNCTION: /* fall through */
		default:
			return -EPERM;
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
          long to_convert = 100;
          int benchRet = hvcs_convert(to_convert);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long to_convert = 255;
          int benchRet = hvcs_convert(to_convert);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long to_convert = 10;
          int benchRet = hvcs_convert(to_convert);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
