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
struct net_device_stats {scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; scalar_t__ rx_crc_errors; int /*<<< orphan*/  multicast; scalar_t__ rx_errors; int /*<<< orphan*/  rx_dropped; scalar_t__ tx_dropped; } ;
struct TYPE_4__ {scalar_t__ mac_rx_oversize_pkt_num; scalar_t__ mac_rx_undersize_pkt_num; scalar_t__ mac_rx_fcs_err_pkt_num; scalar_t__ mac_rx_multi_pkt_num; int /*<<< orphan*/  mac_tx_multi_pkt_num; } ;
struct TYPE_3__ {scalar_t__ igu_rx_no_sof_pkt; scalar_t__ igu_rx_no_eof_pkt; scalar_t__ ssu_key_drop_num; scalar_t__ ppp_key_drop_num; int /*<<< orphan*/  ssu_full_drop_num; } ;
struct hclge_hw_stats {TYPE_2__ mac_stats; TYPE_1__ all_32_bit_stats; } ;

/* Variables and functions */

__attribute__((used)) static void hclge_update_netstat(struct hclge_hw_stats *hw_stats,
				 struct net_device_stats *net_stats)
{
	net_stats->tx_dropped = 0;
	net_stats->rx_dropped = hw_stats->all_32_bit_stats.ssu_full_drop_num;
	net_stats->rx_dropped += hw_stats->all_32_bit_stats.ppp_key_drop_num;
	net_stats->rx_dropped += hw_stats->all_32_bit_stats.ssu_key_drop_num;

	net_stats->rx_errors = hw_stats->mac_stats.mac_rx_oversize_pkt_num;
	net_stats->rx_errors += hw_stats->mac_stats.mac_rx_undersize_pkt_num;
	net_stats->rx_errors += hw_stats->all_32_bit_stats.igu_rx_no_eof_pkt;
	net_stats->rx_errors += hw_stats->all_32_bit_stats.igu_rx_no_sof_pkt;
	net_stats->rx_errors += hw_stats->mac_stats.mac_rx_fcs_err_pkt_num;

	net_stats->multicast = hw_stats->mac_stats.mac_tx_multi_pkt_num;
	net_stats->multicast += hw_stats->mac_stats.mac_rx_multi_pkt_num;

	net_stats->rx_crc_errors = hw_stats->mac_stats.mac_rx_fcs_err_pkt_num;
	net_stats->rx_length_errors =
		hw_stats->mac_stats.mac_rx_undersize_pkt_num;
	net_stats->rx_length_errors +=
		hw_stats->mac_stats.mac_rx_oversize_pkt_num;
	net_stats->rx_over_errors =
		hw_stats->mac_stats.mac_rx_oversize_pkt_num;
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
          int _len_hw_stats0 = 1;
          struct hclge_hw_stats * hw_stats = (struct hclge_hw_stats *) malloc(_len_hw_stats0*sizeof(struct hclge_hw_stats));
          for(int _i0 = 0; _i0 < _len_hw_stats0; _i0++) {
            hw_stats[_i0].mac_stats.mac_rx_oversize_pkt_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].mac_stats.mac_rx_undersize_pkt_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].mac_stats.mac_rx_fcs_err_pkt_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].mac_stats.mac_rx_multi_pkt_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].mac_stats.mac_tx_multi_pkt_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].all_32_bit_stats.igu_rx_no_sof_pkt = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].all_32_bit_stats.igu_rx_no_eof_pkt = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].all_32_bit_stats.ssu_key_drop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].all_32_bit_stats.ppp_key_drop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_stats[_i0].all_32_bit_stats.ssu_full_drop_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_net_stats0 = 1;
          struct net_device_stats * net_stats = (struct net_device_stats *) malloc(_len_net_stats0*sizeof(struct net_device_stats));
          for(int _i0 = 0; _i0 < _len_net_stats0; _i0++) {
            net_stats[_i0].rx_over_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        net_stats[_i0].rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        net_stats[_i0].rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        net_stats[_i0].multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        net_stats[_i0].rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        net_stats[_i0].rx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        net_stats[_i0].tx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_update_netstat(hw_stats,net_stats);
          free(hw_stats);
          free(net_stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
