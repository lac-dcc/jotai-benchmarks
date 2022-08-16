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

int __cvmx_helper_npi_probe(int interface)
{
#if CVMX_PKO_QUEUES_PER_PORT_PCI > 0
	if (OCTEON_IS_MODEL(OCTEON_CN38XX) || OCTEON_IS_MODEL(OCTEON_CN58XX))
		return 4;
	else if (OCTEON_IS_MODEL(OCTEON_CN56XX)
		 && !OCTEON_IS_MODEL(OCTEON_CN56XX_PASS1_X))
		/* The packet engines didn't exist before pass 2 */
		return 4;
	else if (OCTEON_IS_MODEL(OCTEON_CN52XX)
		 && !OCTEON_IS_MODEL(OCTEON_CN52XX_PASS1_X))
		/* The packet engines didn't exist before pass 2 */
		return 4;
#if 0
	/*
	 * Technically CN30XX, CN31XX, and CN50XX contain packet
	 * engines, but nobody ever uses them. Since this is the case,
	 * we disable them here.
	 */
	else if (OCTEON_IS_MODEL(OCTEON_CN31XX)
		 || OCTEON_IS_MODEL(OCTEON_CN50XX))
		return 2;
	else if (OCTEON_IS_MODEL(OCTEON_CN30XX))
		return 1;
#endif
#endif
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
          int interface = 100;
          int benchRet = __cvmx_helper_npi_probe(interface);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int interface = 255;
          int benchRet = __cvmx_helper_npi_probe(interface);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int interface = 10;
          int benchRet = __cvmx_helper_npi_probe(interface);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
