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
struct switchtec_ntb {int peer_nr_direct_mw; int nr_rsvd_luts; } ;

/* Variables and functions */

__attribute__((used)) static int peer_lut_index(struct switchtec_ntb *sndev, int mw_idx)
{
	return mw_idx - sndev->peer_nr_direct_mw + sndev->nr_rsvd_luts;
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
          int mw_idx = 100;
          int _len_sndev0 = 1;
          struct switchtec_ntb * sndev = (struct switchtec_ntb *) malloc(_len_sndev0*sizeof(struct switchtec_ntb));
          for(int _i0 = 0; _i0 < _len_sndev0; _i0++) {
            sndev[_i0].peer_nr_direct_mw = ((-2 * (next_i()%2)) + 1) * next_i();
        sndev[_i0].nr_rsvd_luts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = peer_lut_index(sndev,mw_idx);
          printf("%d\n", benchRet); 
          free(sndev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
