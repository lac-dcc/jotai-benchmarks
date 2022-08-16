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
typedef  int u8 ;
struct rx_ring {int /*<<< orphan*/  rx_errors; } ;
struct nic_stats {int /*<<< orphan*/  rx_crc_err; int /*<<< orphan*/  rx_frame_len_err; int /*<<< orphan*/  rx_preamble_err; int /*<<< orphan*/  rx_undersize_err; int /*<<< orphan*/  rx_oversize_err; int /*<<< orphan*/  rx_code_err; int /*<<< orphan*/  rx_err_count; } ;
struct ql_adapter {struct nic_stats nic_stats; } ;

/* Variables and functions */
#define  IB_MAC_IOCB_RSP_ERR_CODE_ERR 133 
#define  IB_MAC_IOCB_RSP_ERR_CRC 132 
#define  IB_MAC_IOCB_RSP_ERR_FRAME_LEN 131 
 int IB_MAC_IOCB_RSP_ERR_MASK ; 
#define  IB_MAC_IOCB_RSP_ERR_OVERSIZE 130 
#define  IB_MAC_IOCB_RSP_ERR_PREAMBLE 129 
#define  IB_MAC_IOCB_RSP_ERR_UNDERSIZE 128 

__attribute__((used)) static void ql_categorize_rx_err(struct ql_adapter *qdev, u8 rx_err,
				 struct rx_ring *rx_ring)
{
	struct nic_stats *stats = &qdev->nic_stats;

	stats->rx_err_count++;
	rx_ring->rx_errors++;

	switch (rx_err & IB_MAC_IOCB_RSP_ERR_MASK) {
	case IB_MAC_IOCB_RSP_ERR_CODE_ERR:
		stats->rx_code_err++;
		break;
	case IB_MAC_IOCB_RSP_ERR_OVERSIZE:
		stats->rx_oversize_err++;
		break;
	case IB_MAC_IOCB_RSP_ERR_UNDERSIZE:
		stats->rx_undersize_err++;
		break;
	case IB_MAC_IOCB_RSP_ERR_PREAMBLE:
		stats->rx_preamble_err++;
		break;
	case IB_MAC_IOCB_RSP_ERR_FRAME_LEN:
		stats->rx_frame_len_err++;
		break;
	case IB_MAC_IOCB_RSP_ERR_CRC:
		stats->rx_crc_err++;
	default:
		break;
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
          int rx_err = 100;
          int _len_qdev0 = 1;
          struct ql_adapter * qdev = (struct ql_adapter *) malloc(_len_qdev0*sizeof(struct ql_adapter));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
            qdev[_i0].nic_stats.rx_crc_err = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].nic_stats.rx_frame_len_err = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].nic_stats.rx_preamble_err = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].nic_stats.rx_undersize_err = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].nic_stats.rx_oversize_err = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].nic_stats.rx_code_err = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].nic_stats.rx_err_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_ring0 = 1;
          struct rx_ring * rx_ring = (struct rx_ring *) malloc(_len_rx_ring0*sizeof(struct rx_ring));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            rx_ring[_i0].rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ql_categorize_rx_err(qdev,rx_err,rx_ring);
          free(qdev);
          free(rx_ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
