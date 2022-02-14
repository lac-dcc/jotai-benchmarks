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
       0            big-arr\n\
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
typedef  int uint ;

/* Variables and functions */
#define  GASKET_IOCTL_CLEAR_EVENTFD 138 
#define  GASKET_IOCTL_CLEAR_INTERRUPT_COUNTS 137 
#define  GASKET_IOCTL_CONFIG_COHERENT_ALLOCATOR 136 
#define  GASKET_IOCTL_MAP_BUFFER 135 
#define  GASKET_IOCTL_NUMBER_PAGE_TABLES 134 
#define  GASKET_IOCTL_PAGE_TABLE_SIZE 133 
#define  GASKET_IOCTL_PARTITION_PAGE_TABLE 132 
#define  GASKET_IOCTL_RESET 131 
#define  GASKET_IOCTL_SET_EVENTFD 130 
#define  GASKET_IOCTL_SIMPLE_PAGE_TABLE_SIZE 129 
#define  GASKET_IOCTL_UNMAP_BUFFER 128 

long gasket_is_supported_ioctl(uint cmd)
{
	switch (cmd) {
	case GASKET_IOCTL_RESET:
	case GASKET_IOCTL_SET_EVENTFD:
	case GASKET_IOCTL_CLEAR_EVENTFD:
	case GASKET_IOCTL_PARTITION_PAGE_TABLE:
	case GASKET_IOCTL_NUMBER_PAGE_TABLES:
	case GASKET_IOCTL_PAGE_TABLE_SIZE:
	case GASKET_IOCTL_SIMPLE_PAGE_TABLE_SIZE:
	case GASKET_IOCTL_MAP_BUFFER:
	case GASKET_IOCTL_UNMAP_BUFFER:
	case GASKET_IOCTL_CLEAR_INTERRUPT_COUNTS:
	case GASKET_IOCTL_CONFIG_COHERENT_ALLOCATOR:
		return 1;
	default:
		return 0;
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

    // big-arr
    case 0:
    {
          int cmd = 255;
          long benchRet = gasket_is_supported_ioctl(cmd);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
