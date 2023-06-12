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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct rsi_ps_info {int enabled; int /*<<< orphan*/  deep_sleep_wakeup_period; scalar_t__ num_dtims_per_sleep; scalar_t__ dtim_interval_duration; scalar_t__ num_bcns_per_lis_int; int /*<<< orphan*/  listen_interval; scalar_t__ monitor_interval; scalar_t__ rx_hysterisis; scalar_t__ tx_hysterisis; scalar_t__ rx_threshold; scalar_t__ tx_threshold; int /*<<< orphan*/  sleep_type; } ;
struct rsi_hw {struct rsi_ps_info ps_info; } ;

/* Variables and functions */
 int /*<<< orphan*/  RSI_DEF_DS_WAKEUP_PERIOD ; 
 int /*<<< orphan*/  RSI_DEF_LISTEN_INTERVAL ; 
 int /*<<< orphan*/  RSI_SLEEP_TYPE_LP ; 

void rsi_default_ps_params(struct rsi_hw *adapter)
{
	struct rsi_ps_info *ps_info = &adapter->ps_info;

	ps_info->enabled = true;
	ps_info->sleep_type = RSI_SLEEP_TYPE_LP;
	ps_info->tx_threshold = 0;
	ps_info->rx_threshold = 0;
	ps_info->tx_hysterisis = 0;
	ps_info->rx_hysterisis = 0;
	ps_info->monitor_interval = 0;
	ps_info->listen_interval = RSI_DEF_LISTEN_INTERVAL;
	ps_info->num_bcns_per_lis_int = 0;
	ps_info->dtim_interval_duration = 0;
	ps_info->num_dtims_per_sleep = 0;
	ps_info->deep_sleep_wakeup_period = RSI_DEF_DS_WAKEUP_PERIOD;
}

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
          int _len_adapter0 = 65025;
          struct rsi_hw * adapter = (struct rsi_hw *) malloc(_len_adapter0*sizeof(struct rsi_hw));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].ps_info.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.deep_sleep_wakeup_period = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.num_dtims_per_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.dtim_interval_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.num_bcns_per_lis_int = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.listen_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.monitor_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.rx_hysterisis = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.tx_hysterisis = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.rx_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.tx_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.sleep_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          rsi_default_ps_params(adapter);
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_adapter0 = 100;
          struct rsi_hw * adapter = (struct rsi_hw *) malloc(_len_adapter0*sizeof(struct rsi_hw));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].ps_info.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.deep_sleep_wakeup_period = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.num_dtims_per_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.dtim_interval_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.num_bcns_per_lis_int = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.listen_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.monitor_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.rx_hysterisis = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.tx_hysterisis = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.rx_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.tx_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.sleep_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          rsi_default_ps_params(adapter);
          free(adapter);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_adapter0 = 1;
          struct rsi_hw * adapter = (struct rsi_hw *) malloc(_len_adapter0*sizeof(struct rsi_hw));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].ps_info.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.deep_sleep_wakeup_period = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.num_dtims_per_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.dtim_interval_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.num_bcns_per_lis_int = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.listen_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.monitor_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.rx_hysterisis = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.tx_hysterisis = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.rx_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.tx_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].ps_info.sleep_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          rsi_default_ps_params(adapter);
          free(adapter);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
