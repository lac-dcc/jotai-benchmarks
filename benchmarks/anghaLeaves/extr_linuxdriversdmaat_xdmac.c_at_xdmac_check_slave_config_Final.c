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
struct dma_slave_config {scalar_t__ src_maxburst; scalar_t__ dst_maxburst; scalar_t__ src_addr_width; scalar_t__ dst_addr_width; } ;

/* Variables and functions */
 scalar_t__ AT_XDMAC_MAX_CSIZE ; 
 scalar_t__ AT_XDMAC_MAX_DWIDTH ; 
 int EINVAL ; 

__attribute__((used)) static int at_xdmac_check_slave_config(struct dma_slave_config *sconfig)
{
	if ((sconfig->src_maxburst > AT_XDMAC_MAX_CSIZE)
	    || (sconfig->dst_maxburst > AT_XDMAC_MAX_CSIZE))
		return -EINVAL;

	if ((sconfig->src_addr_width > AT_XDMAC_MAX_DWIDTH)
	    || (sconfig->dst_addr_width > AT_XDMAC_MAX_DWIDTH))
		return -EINVAL;

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
          int _len_sconfig0 = 1;
          struct dma_slave_config * sconfig = (struct dma_slave_config *) malloc(_len_sconfig0*sizeof(struct dma_slave_config));
          for(int _i0 = 0; _i0 < _len_sconfig0; _i0++) {
            sconfig[_i0].src_maxburst = ((-2 * (next_i()%2)) + 1) * next_i();
        sconfig[_i0].dst_maxburst = ((-2 * (next_i()%2)) + 1) * next_i();
        sconfig[_i0].src_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        sconfig[_i0].dst_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = at_xdmac_check_slave_config(sconfig);
          printf("%d\n", benchRet); 
          free(sconfig);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
