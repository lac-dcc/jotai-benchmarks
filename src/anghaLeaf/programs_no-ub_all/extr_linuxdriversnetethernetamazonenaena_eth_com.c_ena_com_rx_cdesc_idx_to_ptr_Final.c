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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct ena_eth_io_rx_cdesc_base {int dummy; } ;
struct TYPE_2__ {scalar_t__ virt_addr; } ;
struct ena_com_io_cq {int q_depth; int cdesc_entry_size_in_bytes; TYPE_1__ cdesc_addr; } ;

/* Variables and functions */

__attribute__((used)) static inline struct ena_eth_io_rx_cdesc_base *
	ena_com_rx_cdesc_idx_to_ptr(struct ena_com_io_cq *io_cq, u16 idx)
{
	idx &= (io_cq->q_depth - 1);
	return (struct ena_eth_io_rx_cdesc_base *)
		((uintptr_t)io_cq->cdesc_addr.virt_addr +
		idx * io_cq->cdesc_entry_size_in_bytes);
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
          int idx = 255;
          int _len_io_cq0 = 1;
          struct ena_com_io_cq * io_cq = (struct ena_com_io_cq *) malloc(_len_io_cq0*sizeof(struct ena_com_io_cq));
          for(int _i0 = 0; _i0 < _len_io_cq0; _i0++) {
            io_cq->q_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        io_cq->cdesc_entry_size_in_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        io_cq->cdesc_addr.virt_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ena_eth_io_rx_cdesc_base * benchRet = ena_com_rx_cdesc_idx_to_ptr(io_cq,idx);
          printf("{{struct}} %p\n", &benchRet); 
          free(io_cq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
