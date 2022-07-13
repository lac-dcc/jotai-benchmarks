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
typedef  enum xen_swiotlb_err { ____Placeholder_xen_swiotlb_err } xen_swiotlb_err ;

/* Variables and functions */
#define  XEN_SWIOTLB_EFIXUP 129 
#define  XEN_SWIOTLB_ENOMEM 128 

__attribute__((used)) static const char *xen_swiotlb_error(enum xen_swiotlb_err err)
{
	switch (err) {
	case XEN_SWIOTLB_ENOMEM:
		return "Cannot allocate Xen-SWIOTLB buffer\n";
	case XEN_SWIOTLB_EFIXUP:
		return "Failed to get contiguous memory for DMA from Xen!\n"\
		    "You either: don't have the permissions, do not have"\
		    " enough free memory under 4GB, or the hypervisor memory"\
		    " is too fragmented!";
	default:
		break;
	}
	return "";
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
          enum xen_swiotlb_err err = 0;
          const char * benchRet = xen_swiotlb_error(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum xen_swiotlb_err err = 0;
          const char * benchRet = xen_swiotlb_error(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum xen_swiotlb_err err = 0;
          const char * benchRet = xen_swiotlb_error(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
