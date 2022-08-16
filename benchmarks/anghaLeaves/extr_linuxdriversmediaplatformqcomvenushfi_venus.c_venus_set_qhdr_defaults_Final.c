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
struct hfi_queue_header {int status; int q_size; int rx_wm; int tx_wm; int rx_req; scalar_t__ write_idx; scalar_t__ read_idx; scalar_t__ tx_irq_status; scalar_t__ rx_irq_status; scalar_t__ tx_req; scalar_t__ pkt_size; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  IFACEQ_DFLT_QHDR ; 
 int IFACEQ_QUEUE_SIZE ; 

__attribute__((used)) static void venus_set_qhdr_defaults(struct hfi_queue_header *qhdr)
{
	qhdr->status = 1;
	qhdr->type = IFACEQ_DFLT_QHDR;
	qhdr->q_size = IFACEQ_QUEUE_SIZE / 4;
	qhdr->pkt_size = 0;
	qhdr->rx_wm = 1;
	qhdr->tx_wm = 1;
	qhdr->rx_req = 1;
	qhdr->tx_req = 0;
	qhdr->rx_irq_status = 0;
	qhdr->tx_irq_status = 0;
	qhdr->read_idx = 0;
	qhdr->write_idx = 0;
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
          int _len_qhdr0 = 1;
          struct hfi_queue_header * qhdr = (struct hfi_queue_header *) malloc(_len_qhdr0*sizeof(struct hfi_queue_header));
          for(int _i0 = 0; _i0 < _len_qhdr0; _i0++) {
            qhdr[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].q_size = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].rx_wm = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].tx_wm = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].rx_req = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].write_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].read_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].tx_irq_status = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].rx_irq_status = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].tx_req = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].pkt_size = ((-2 * (next_i()%2)) + 1) * next_i();
        qhdr[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          venus_set_qhdr_defaults(qhdr);
          free(qhdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
