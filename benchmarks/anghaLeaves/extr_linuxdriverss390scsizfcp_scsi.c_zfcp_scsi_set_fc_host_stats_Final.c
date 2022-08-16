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
struct fsf_qtcb_bottom_port {int /*<<< orphan*/  output_mb; int /*<<< orphan*/  input_mb; int /*<<< orphan*/  control_requests; int /*<<< orphan*/  output_requests; int /*<<< orphan*/  input_requests; int /*<<< orphan*/  invalid_crcs; int /*<<< orphan*/  invalid_tx_words; int /*<<< orphan*/  psp_error_counts; int /*<<< orphan*/  loss_of_signal; int /*<<< orphan*/  loss_of_sync; int /*<<< orphan*/  link_failure; int /*<<< orphan*/  dumped_frames; int /*<<< orphan*/  error_frames; int /*<<< orphan*/  nos; int /*<<< orphan*/  lip; int /*<<< orphan*/  rx_words; int /*<<< orphan*/  rx_frames; int /*<<< orphan*/  tx_words; int /*<<< orphan*/  tx_frames; int /*<<< orphan*/  seconds_since_last_reset; } ;
struct fc_host_statistics {int /*<<< orphan*/  fcp_output_megabytes; int /*<<< orphan*/  fcp_input_megabytes; int /*<<< orphan*/  fcp_control_requests; int /*<<< orphan*/  fcp_output_requests; int /*<<< orphan*/  fcp_input_requests; int /*<<< orphan*/  invalid_crc_count; int /*<<< orphan*/  invalid_tx_word_count; int /*<<< orphan*/  prim_seq_protocol_err_count; int /*<<< orphan*/  loss_of_signal_count; int /*<<< orphan*/  loss_of_sync_count; int /*<<< orphan*/  link_failure_count; int /*<<< orphan*/  dumped_frames; int /*<<< orphan*/  error_frames; int /*<<< orphan*/  nos_count; int /*<<< orphan*/  lip_count; int /*<<< orphan*/  rx_words; int /*<<< orphan*/  rx_frames; int /*<<< orphan*/  tx_words; int /*<<< orphan*/  tx_frames; int /*<<< orphan*/  seconds_since_last_reset; } ;

/* Variables and functions */

__attribute__((used)) static void zfcp_scsi_set_fc_host_stats(struct fc_host_statistics *fc_stats,
					struct fsf_qtcb_bottom_port *data)
{
	fc_stats->seconds_since_last_reset = data->seconds_since_last_reset;
	fc_stats->tx_frames = data->tx_frames;
	fc_stats->tx_words = data->tx_words;
	fc_stats->rx_frames = data->rx_frames;
	fc_stats->rx_words = data->rx_words;
	fc_stats->lip_count = data->lip;
	fc_stats->nos_count = data->nos;
	fc_stats->error_frames = data->error_frames;
	fc_stats->dumped_frames = data->dumped_frames;
	fc_stats->link_failure_count = data->link_failure;
	fc_stats->loss_of_sync_count = data->loss_of_sync;
	fc_stats->loss_of_signal_count = data->loss_of_signal;
	fc_stats->prim_seq_protocol_err_count = data->psp_error_counts;
	fc_stats->invalid_tx_word_count = data->invalid_tx_words;
	fc_stats->invalid_crc_count = data->invalid_crcs;
	fc_stats->fcp_input_requests = data->input_requests;
	fc_stats->fcp_output_requests = data->output_requests;
	fc_stats->fcp_control_requests = data->control_requests;
	fc_stats->fcp_input_megabytes = data->input_mb;
	fc_stats->fcp_output_megabytes = data->output_mb;
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
          zfcp_scsi_set_fc_host_stats(fc_stats,data);
          free(fc_stats);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
