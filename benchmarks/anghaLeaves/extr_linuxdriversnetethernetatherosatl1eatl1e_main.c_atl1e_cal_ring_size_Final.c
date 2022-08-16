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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct atl1e_tpd_desc {int dummy; } ;
struct TYPE_4__ {int real_page_size; } ;
struct TYPE_3__ {int count; } ;
struct atl1e_adapter {int num_rx_queues; TYPE_2__ rx_ring; TYPE_1__ tx_ring; } ;

/* Variables and functions */
 int AT_PAGE_NUM_PER_QUEUE ; 

__attribute__((used)) static void atl1e_cal_ring_size(struct atl1e_adapter *adapter, u32 *ring_size)
{
	*ring_size = ((u32)(adapter->tx_ring.count *
		     sizeof(struct atl1e_tpd_desc) + 7
			/* tx ring, qword align */
		     + adapter->rx_ring.real_page_size * AT_PAGE_NUM_PER_QUEUE *
			adapter->num_rx_queues + 31
			/* rx ring,  32 bytes align */
		     + (1 + AT_PAGE_NUM_PER_QUEUE * adapter->num_rx_queues) *
			sizeof(u32) + 3));
			/* tx, rx cmd, dword align   */
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
          int _len_adapter0 = 1;
          struct atl1e_adapter * adapter = (struct atl1e_adapter *) malloc(_len_adapter0*sizeof(struct atl1e_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].num_rx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_ring.real_page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].tx_ring.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring_size0 = 1;
          long * ring_size = (long *) malloc(_len_ring_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ring_size0; _i0++) {
            ring_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atl1e_cal_ring_size(adapter,ring_size);
          free(adapter);
          free(ring_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
