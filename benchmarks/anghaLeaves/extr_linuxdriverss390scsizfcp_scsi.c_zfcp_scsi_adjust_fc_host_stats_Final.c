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
struct fsf_qtcb_bottom_port {scalar_t__ output_mb; scalar_t__ input_mb; scalar_t__ control_requests; scalar_t__ output_requests; scalar_t__ input_requests; scalar_t__ invalid_crcs; scalar_t__ invalid_tx_words; scalar_t__ psp_error_counts; scalar_t__ loss_of_signal; scalar_t__ loss_of_sync; scalar_t__ link_failure; scalar_t__ dumped_frames; scalar_t__ error_frames; scalar_t__ nos; scalar_t__ lip; scalar_t__ rx_words; scalar_t__ rx_frames; scalar_t__ tx_words; scalar_t__ tx_frames; scalar_t__ seconds_since_last_reset; } ;
struct fc_host_statistics {scalar_t__ fcp_output_megabytes; scalar_t__ fcp_input_megabytes; scalar_t__ fcp_control_requests; scalar_t__ fcp_output_requests; scalar_t__ fcp_input_requests; scalar_t__ invalid_crc_count; scalar_t__ invalid_tx_word_count; scalar_t__ prim_seq_protocol_err_count; scalar_t__ loss_of_signal_count; scalar_t__ loss_of_sync_count; scalar_t__ link_failure_count; scalar_t__ dumped_frames; scalar_t__ error_frames; scalar_t__ nos_count; scalar_t__ lip_count; scalar_t__ rx_words; scalar_t__ rx_frames; scalar_t__ tx_words; scalar_t__ tx_frames; scalar_t__ seconds_since_last_reset; } ;

/* Variables and functions */

__attribute__((used)) static void zfcp_scsi_adjust_fc_host_stats(struct fc_host_statistics *fc_stats,
					   struct fsf_qtcb_bottom_port *data,
					   struct fsf_qtcb_bottom_port *old)
{
	fc_stats->seconds_since_last_reset =
		data->seconds_since_last_reset - old->seconds_since_last_reset;
	fc_stats->tx_frames = data->tx_frames - old->tx_frames;
	fc_stats->tx_words = data->tx_words - old->tx_words;
	fc_stats->rx_frames = data->rx_frames - old->rx_frames;
	fc_stats->rx_words = data->rx_words - old->rx_words;
	fc_stats->lip_count = data->lip - old->lip;
	fc_stats->nos_count = data->nos - old->nos;
	fc_stats->error_frames = data->error_frames - old->error_frames;
	fc_stats->dumped_frames = data->dumped_frames - old->dumped_frames;
	fc_stats->link_failure_count = data->link_failure - old->link_failure;
	fc_stats->loss_of_sync_count = data->loss_of_sync - old->loss_of_sync;
	fc_stats->loss_of_signal_count =
		data->loss_of_signal - old->loss_of_signal;
	fc_stats->prim_seq_protocol_err_count =
		data->psp_error_counts - old->psp_error_counts;
	fc_stats->invalid_tx_word_count =
		data->invalid_tx_words - old->invalid_tx_words;
	fc_stats->invalid_crc_count = data->invalid_crcs - old->invalid_crcs;
	fc_stats->fcp_input_requests =
		data->input_requests - old->input_requests;
	fc_stats->fcp_output_requests =
		data->output_requests - old->output_requests;
	fc_stats->fcp_control_requests =
		data->control_requests - old->control_requests;
	fc_stats->fcp_input_megabytes = data->input_mb - old->input_mb;
	fc_stats->fcp_output_megabytes = data->output_mb - old->output_mb;
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
          int _len_fc_stats0 = 1;
          struct fc_host_statistics * fc_stats = (struct fc_host_statistics *) malloc(_len_fc_stats0*sizeof(struct fc_host_statistics));
          for(int _i0 = 0; _i0 < _len_fc_stats0; _i0++) {
            fc_stats[_i0].fcp_output_megabytes = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].fcp_input_megabytes = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].fcp_control_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].fcp_output_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].fcp_input_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].invalid_crc_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].invalid_tx_word_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].prim_seq_protocol_err_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].loss_of_signal_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].loss_of_sync_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].link_failure_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].dumped_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].error_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].nos_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].lip_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].rx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].rx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].tx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].tx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        fc_stats[_i0].seconds_since_last_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct fsf_qtcb_bottom_port * data = (struct fsf_qtcb_bottom_port *) malloc(_len_data0*sizeof(struct fsf_qtcb_bottom_port));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].output_mb = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].input_mb = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].control_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].output_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].input_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].invalid_crcs = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].invalid_tx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].psp_error_counts = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].loss_of_signal = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].loss_of_sync = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].link_failure = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].dumped_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].error_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].nos = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].lip = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].rx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].rx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].tx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].tx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].seconds_since_last_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 1;
          struct fsf_qtcb_bottom_port * old = (struct fsf_qtcb_bottom_port *) malloc(_len_old0*sizeof(struct fsf_qtcb_bottom_port));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].output_mb = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].input_mb = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].control_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].output_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].input_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].invalid_crcs = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].invalid_tx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].psp_error_counts = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].loss_of_signal = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].loss_of_sync = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].link_failure = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].dumped_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].error_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].nos = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].lip = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].rx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].rx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].tx_words = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].tx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].seconds_since_last_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zfcp_scsi_adjust_fc_host_stats(fc_stats,data,old);
          free(fc_stats);
          free(data);
          free(old);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
