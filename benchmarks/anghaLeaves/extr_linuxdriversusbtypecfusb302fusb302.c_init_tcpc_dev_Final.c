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
struct tcpc_dev {int /*<<< orphan*/  pd_transmit; int /*<<< orphan*/  start_drp_toggling; int /*<<< orphan*/  set_roles; int /*<<< orphan*/  set_pd_rx; int /*<<< orphan*/  set_vbus; int /*<<< orphan*/  set_vconn; int /*<<< orphan*/  set_polarity; int /*<<< orphan*/  get_cc; int /*<<< orphan*/  set_cc; int /*<<< orphan*/  get_current_limit; int /*<<< orphan*/  get_vbus; int /*<<< orphan*/  init; } ;

/* Variables and functions */
 int /*<<< orphan*/  tcpm_get_cc ; 
 int /*<<< orphan*/  tcpm_get_current_limit ; 
 int /*<<< orphan*/  tcpm_get_vbus ; 
 int /*<<< orphan*/  tcpm_init ; 
 int /*<<< orphan*/  tcpm_pd_transmit ; 
 int /*<<< orphan*/  tcpm_set_cc ; 
 int /*<<< orphan*/  tcpm_set_pd_rx ; 
 int /*<<< orphan*/  tcpm_set_polarity ; 
 int /*<<< orphan*/  tcpm_set_roles ; 
 int /*<<< orphan*/  tcpm_set_vbus ; 
 int /*<<< orphan*/  tcpm_set_vconn ; 
 int /*<<< orphan*/  tcpm_start_drp_toggling ; 

__attribute__((used)) static void init_tcpc_dev(struct tcpc_dev *fusb302_tcpc_dev)
{
	fusb302_tcpc_dev->init = tcpm_init;
	fusb302_tcpc_dev->get_vbus = tcpm_get_vbus;
	fusb302_tcpc_dev->get_current_limit = tcpm_get_current_limit;
	fusb302_tcpc_dev->set_cc = tcpm_set_cc;
	fusb302_tcpc_dev->get_cc = tcpm_get_cc;
	fusb302_tcpc_dev->set_polarity = tcpm_set_polarity;
	fusb302_tcpc_dev->set_vconn = tcpm_set_vconn;
	fusb302_tcpc_dev->set_vbus = tcpm_set_vbus;
	fusb302_tcpc_dev->set_pd_rx = tcpm_set_pd_rx;
	fusb302_tcpc_dev->set_roles = tcpm_set_roles;
	fusb302_tcpc_dev->start_drp_toggling = tcpm_start_drp_toggling;
	fusb302_tcpc_dev->pd_transmit = tcpm_pd_transmit;
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
          int _len_fusb302_tcpc_dev0 = 1;
          struct tcpc_dev * fusb302_tcpc_dev = (struct tcpc_dev *) malloc(_len_fusb302_tcpc_dev0*sizeof(struct tcpc_dev));
          for(int _i0 = 0; _i0 < _len_fusb302_tcpc_dev0; _i0++) {
            fusb302_tcpc_dev[_i0].pd_transmit = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].start_drp_toggling = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].set_roles = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].set_pd_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].set_vbus = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].set_vconn = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].set_polarity = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].get_cc = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].set_cc = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].get_current_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].get_vbus = ((-2 * (next_i()%2)) + 1) * next_i();
        fusb302_tcpc_dev[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_tcpc_dev(fusb302_tcpc_dev);
          free(fusb302_tcpc_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
