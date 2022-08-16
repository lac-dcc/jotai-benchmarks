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
struct cs_hsi_iface {int rx_bufs; int tx_bufs; int flags; int rx_ptr_boundary; TYPE_1__* mmap_cfg; } ;
struct TYPE_2__ {int rx_bufs; int tx_bufs; int rx_ptr_boundary; } ;

/* Variables and functions */
 int CS_FEAT_ROLLING_RX_COUNTER ; 
 int RX_PTR_BOUNDARY_SHIFT ; 

__attribute__((used)) static void set_buffer_sizes(struct cs_hsi_iface *hi, int rx_bufs, int tx_bufs)
{
	hi->rx_bufs = rx_bufs;
	hi->tx_bufs = tx_bufs;
	hi->mmap_cfg->rx_bufs = rx_bufs;
	hi->mmap_cfg->tx_bufs = tx_bufs;

	if (hi->flags & CS_FEAT_ROLLING_RX_COUNTER) {
		/*
		 * For more robust overrun detection, let the rx
		 * pointer run in range 0..'boundary-1'. Boundary
		 * is a multiple of rx_bufs, and limited in max size
		 * by RX_PTR_MAX_SHIFT to allow for fast ptr-diff
		 * calculation.
		 */
		hi->rx_ptr_boundary = (rx_bufs << RX_PTR_BOUNDARY_SHIFT);
		hi->mmap_cfg->rx_ptr_boundary = hi->rx_ptr_boundary;
	} else {
		hi->rx_ptr_boundary = hi->rx_bufs;
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
          int rx_bufs = 100;
          int tx_bufs = 100;
          int _len_hi0 = 1;
          struct cs_hsi_iface * hi = (struct cs_hsi_iface *) malloc(_len_hi0*sizeof(struct cs_hsi_iface));
          for(int _i0 = 0; _i0 < _len_hi0; _i0++) {
            hi[_i0].rx_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        hi[_i0].tx_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        hi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        hi[_i0].rx_ptr_boundary = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hi__i0__mmap_cfg0 = 1;
          hi[_i0].mmap_cfg = (struct TYPE_2__ *) malloc(_len_hi__i0__mmap_cfg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hi__i0__mmap_cfg0; _j0++) {
            hi[_i0].mmap_cfg->rx_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        hi[_i0].mmap_cfg->tx_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        hi[_i0].mmap_cfg->rx_ptr_boundary = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_buffer_sizes(hi,rx_bufs,tx_bufs);
          for(int _aux = 0; _aux < _len_hi0; _aux++) {
          free(hi[_aux].mmap_cfg);
          }
          free(hi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
