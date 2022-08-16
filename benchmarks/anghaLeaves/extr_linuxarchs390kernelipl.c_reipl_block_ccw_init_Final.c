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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  pbt; int /*<<< orphan*/  blk0_len; int /*<<< orphan*/  version; int /*<<< orphan*/  len; } ;
struct ipl_parameter_block {TYPE_1__ hdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  DIAG308_IPL_TYPE_CCW ; 
 int /*<<< orphan*/  IPL_PARM_BLK0_CCW_LEN ; 
 int /*<<< orphan*/  IPL_PARM_BLK_CCW_LEN ; 
 int /*<<< orphan*/  IPL_PARM_BLOCK_VERSION ; 

__attribute__((used)) static void reipl_block_ccw_init(struct ipl_parameter_block *ipb)
{
	ipb->hdr.len = IPL_PARM_BLK_CCW_LEN;
	ipb->hdr.version = IPL_PARM_BLOCK_VERSION;
	ipb->hdr.blk0_len = IPL_PARM_BLK0_CCW_LEN;
	ipb->hdr.pbt = DIAG308_IPL_TYPE_CCW;
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
          int _len_ipb0 = 1;
          struct ipl_parameter_block * ipb = (struct ipl_parameter_block *) malloc(_len_ipb0*sizeof(struct ipl_parameter_block));
          for(int _i0 = 0; _i0 < _len_ipb0; _i0++) {
            ipb[_i0].hdr.pbt = ((-2 * (next_i()%2)) + 1) * next_i();
        ipb[_i0].hdr.blk0_len = ((-2 * (next_i()%2)) + 1) * next_i();
        ipb[_i0].hdr.version = ((-2 * (next_i()%2)) + 1) * next_i();
        ipb[_i0].hdr.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reipl_block_ccw_init(ipb);
          free(ipb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
