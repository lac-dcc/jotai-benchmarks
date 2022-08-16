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
typedef  scalar_t__ u32 ;
struct fcoe_hdr {int dummy; } ;
struct fcoe_ctlr {TYPE_1__* lp; } ;
struct fcoe_crc_eof {int dummy; } ;
struct fc_frame_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ mfs; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 fcoe_ctlr_fcoe_size(struct fcoe_ctlr *fip)
{
	/*
	 * Determine the max FCoE frame size allowed, including
	 * FCoE header and trailer.
	 * Note:  lp->mfs is currently the payload size, not the frame size.
	 */
	return fip->lp->mfs + sizeof(struct fc_frame_header) +
		sizeof(struct fcoe_hdr) + sizeof(struct fcoe_crc_eof);
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
          int _len_fip0 = 1;
          struct fcoe_ctlr * fip = (struct fcoe_ctlr *) malloc(_len_fip0*sizeof(struct fcoe_ctlr));
          for(int _i0 = 0; _i0 < _len_fip0; _i0++) {
              int _len_fip__i0__lp0 = 1;
          fip[_i0].lp = (struct TYPE_2__ *) malloc(_len_fip__i0__lp0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fip__i0__lp0; _j0++) {
            fip[_i0].lp->mfs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = fcoe_ctlr_fcoe_size(fip);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_fip0; _aux++) {
          free(fip[_aux].lp);
          }
          free(fip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
