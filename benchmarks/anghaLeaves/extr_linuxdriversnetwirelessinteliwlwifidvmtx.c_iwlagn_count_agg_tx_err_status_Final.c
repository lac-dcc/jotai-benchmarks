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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u16 ;
struct TYPE_2__ {int /*<<< orphan*/  unknown; int /*<<< orphan*/  delay_tx; int /*<<< orphan*/  dump_tx; int /*<<< orphan*/  response; int /*<<< orphan*/  bad_crc32; int /*<<< orphan*/  scd_query; int /*<<< orphan*/  last_sent_bt_kill; int /*<<< orphan*/  last_sent_try; int /*<<< orphan*/  last_sent_ttl; int /*<<< orphan*/  abort; int /*<<< orphan*/  few_bytes; int /*<<< orphan*/  bt_prio; int /*<<< orphan*/  underrun; } ;
struct iwl_priv {TYPE_1__ reply_agg_tx_stats; } ;

/* Variables and functions */
#define  AGG_TX_STATE_ABORT_MSK 139 
#define  AGG_TX_STATE_BT_PRIO_MSK 138 
#define  AGG_TX_STATE_DELAY_TX_MSK 137 
#define  AGG_TX_STATE_DUMP_TX_MSK 136 
#define  AGG_TX_STATE_FEW_BYTES_MSK 135 
#define  AGG_TX_STATE_LAST_SENT_BT_KILL_MSK 134 
#define  AGG_TX_STATE_LAST_SENT_TRY_CNT_MSK 133 
#define  AGG_TX_STATE_LAST_SENT_TTL_MSK 132 
#define  AGG_TX_STATE_RESPONSE_MSK 131 
#define  AGG_TX_STATE_SCD_QUERY_MSK 130 
#define  AGG_TX_STATE_TEST_BAD_CRC32_MSK 129 
#define  AGG_TX_STATE_UNDERRUN_MSK 128 
 int AGG_TX_STATUS_MSK ; 

__attribute__((used)) static void iwlagn_count_agg_tx_err_status(struct iwl_priv *priv, u16 status)
{
	status &= AGG_TX_STATUS_MSK;

	switch (status) {
	case AGG_TX_STATE_UNDERRUN_MSK:
		priv->reply_agg_tx_stats.underrun++;
		break;
	case AGG_TX_STATE_BT_PRIO_MSK:
		priv->reply_agg_tx_stats.bt_prio++;
		break;
	case AGG_TX_STATE_FEW_BYTES_MSK:
		priv->reply_agg_tx_stats.few_bytes++;
		break;
	case AGG_TX_STATE_ABORT_MSK:
		priv->reply_agg_tx_stats.abort++;
		break;
	case AGG_TX_STATE_LAST_SENT_TTL_MSK:
		priv->reply_agg_tx_stats.last_sent_ttl++;
		break;
	case AGG_TX_STATE_LAST_SENT_TRY_CNT_MSK:
		priv->reply_agg_tx_stats.last_sent_try++;
		break;
	case AGG_TX_STATE_LAST_SENT_BT_KILL_MSK:
		priv->reply_agg_tx_stats.last_sent_bt_kill++;
		break;
	case AGG_TX_STATE_SCD_QUERY_MSK:
		priv->reply_agg_tx_stats.scd_query++;
		break;
	case AGG_TX_STATE_TEST_BAD_CRC32_MSK:
		priv->reply_agg_tx_stats.bad_crc32++;
		break;
	case AGG_TX_STATE_RESPONSE_MSK:
		priv->reply_agg_tx_stats.response++;
		break;
	case AGG_TX_STATE_DUMP_TX_MSK:
		priv->reply_agg_tx_stats.dump_tx++;
		break;
	case AGG_TX_STATE_DELAY_TX_MSK:
		priv->reply_agg_tx_stats.delay_tx++;
		break;
	default:
		priv->reply_agg_tx_stats.unknown++;
		break;
	}
}

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
          int status = 100;
        
          int _len_priv0 = 1;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].reply_agg_tx_stats.unknown = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.delay_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.dump_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.response = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bad_crc32 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.scd_query = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_bt_kill = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_try = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_ttl = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.abort = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.few_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bt_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.underrun = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          iwlagn_count_agg_tx_err_status(priv,status);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
        
          int _len_priv0 = 65025;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].reply_agg_tx_stats.unknown = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.delay_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.dump_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.response = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bad_crc32 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.scd_query = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_bt_kill = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_try = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_ttl = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.abort = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.few_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bt_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.underrun = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          iwlagn_count_agg_tx_err_status(priv,status);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
        
          int _len_priv0 = 100;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].reply_agg_tx_stats.unknown = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.delay_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.dump_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.response = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bad_crc32 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.scd_query = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_bt_kill = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_try = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_ttl = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.abort = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.few_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bt_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.underrun = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          iwlagn_count_agg_tx_err_status(priv,status);
          free(priv);
        
        break;
    }
    // empty
    case 3:
    {
          int status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_priv0 = 1;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].reply_agg_tx_stats.unknown = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.delay_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.dump_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.response = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bad_crc32 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.scd_query = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_bt_kill = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_try = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.last_sent_ttl = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.abort = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.few_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.bt_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].reply_agg_tx_stats.underrun = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          iwlagn_count_agg_tx_err_status(priv,status);
          free(priv);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
