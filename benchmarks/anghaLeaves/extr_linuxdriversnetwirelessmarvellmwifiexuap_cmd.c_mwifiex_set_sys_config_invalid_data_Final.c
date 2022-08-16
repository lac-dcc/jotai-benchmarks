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
struct mwifiex_uap_bss_param {int bcast_ssid_ctl; int radio_ctl; int dtim_period; int beacon_period; int auth_mode; int rts_threshold; int frag_threshold; int retry_limit; int qos_info; } ;

/* Variables and functions */

void mwifiex_set_sys_config_invalid_data(struct mwifiex_uap_bss_param *config)
{
	config->bcast_ssid_ctl = 0x7F;
	config->radio_ctl = 0x7F;
	config->dtim_period = 0x7F;
	config->beacon_period = 0x7FFF;
	config->auth_mode = 0x7F;
	config->rts_threshold = 0x7FFF;
	config->frag_threshold = 0x7FFF;
	config->retry_limit = 0x7F;
	config->qos_info = 0xFF;
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
          int _len_config0 = 1;
          struct mwifiex_uap_bss_param * config = (struct mwifiex_uap_bss_param *) malloc(_len_config0*sizeof(struct mwifiex_uap_bss_param));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].bcast_ssid_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].radio_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].dtim_period = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].beacon_period = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].auth_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].rts_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].frag_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].retry_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].qos_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mwifiex_set_sys_config_invalid_data(config);
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
