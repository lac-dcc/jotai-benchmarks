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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct mac_device {TYPE_1__* priv; int /*<<< orphan*/  adjust_link; int /*<<< orphan*/  stop; int /*<<< orphan*/  start; int /*<<< orphan*/  set_multi; int /*<<< orphan*/  set_tstamp; int /*<<< orphan*/  set_allmulti; int /*<<< orphan*/  set_exception; int /*<<< orphan*/  set_rx_pause; int /*<<< orphan*/  set_tx_pause; int /*<<< orphan*/  remove_hash_mac_addr; int /*<<< orphan*/  add_hash_mac_addr; int /*<<< orphan*/  change_addr; int /*<<< orphan*/  set_promisc; int /*<<< orphan*/  init; } ;
struct TYPE_2__ {int /*<<< orphan*/  disable; int /*<<< orphan*/  enable; } ;

/* Variables and functions */
 int /*<<< orphan*/  adjust_link_memac ; 
 int /*<<< orphan*/  memac_accept_rx_pause_frames ; 
 int /*<<< orphan*/  memac_add_hash_mac_address ; 
 int /*<<< orphan*/  memac_del_hash_mac_address ; 
 int /*<<< orphan*/  memac_disable ; 
 int /*<<< orphan*/  memac_enable ; 
 int /*<<< orphan*/  memac_initialization ; 
 int /*<<< orphan*/  memac_modify_mac_address ; 
 int /*<<< orphan*/  memac_set_allmulti ; 
 int /*<<< orphan*/  memac_set_exception ; 
 int /*<<< orphan*/  memac_set_promiscuous ; 
 int /*<<< orphan*/  memac_set_tstamp ; 
 int /*<<< orphan*/  memac_set_tx_pause_frames ; 
 int /*<<< orphan*/  set_multi ; 
 int /*<<< orphan*/  start ; 
 int /*<<< orphan*/  stop ; 

__attribute__((used)) static void setup_memac(struct mac_device *mac_dev)
{
	mac_dev->init			= memac_initialization;
	mac_dev->set_promisc		= memac_set_promiscuous;
	mac_dev->change_addr		= memac_modify_mac_address;
	mac_dev->add_hash_mac_addr	= memac_add_hash_mac_address;
	mac_dev->remove_hash_mac_addr	= memac_del_hash_mac_address;
	mac_dev->set_tx_pause		= memac_set_tx_pause_frames;
	mac_dev->set_rx_pause		= memac_accept_rx_pause_frames;
	mac_dev->set_exception		= memac_set_exception;
	mac_dev->set_allmulti		= memac_set_allmulti;
	mac_dev->set_tstamp		= memac_set_tstamp;
	mac_dev->set_multi		= set_multi;
	mac_dev->start			= start;
	mac_dev->stop			= stop;
	mac_dev->adjust_link            = adjust_link_memac;
	mac_dev->priv->enable		= memac_enable;
	mac_dev->priv->disable		= memac_disable;
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
          int _len_mac_dev0 = 1;
          struct mac_device * mac_dev = (struct mac_device *) malloc(_len_mac_dev0*sizeof(struct mac_device));
          for(int _i0 = 0; _i0 < _len_mac_dev0; _i0++) {
              int _len_mac_dev__i0__priv0 = 1;
          mac_dev[_i0].priv = (struct TYPE_2__ *) malloc(_len_mac_dev__i0__priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mac_dev__i0__priv0; _j0++) {
            mac_dev[_i0].priv->disable = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].priv->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mac_dev[_i0].adjust_link = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].stop = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].set_multi = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].set_tstamp = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].set_allmulti = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].set_exception = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].set_rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].set_tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].remove_hash_mac_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].add_hash_mac_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].change_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].set_promisc = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_dev[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_memac(mac_dev);
          for(int _aux = 0; _aux < _len_mac_dev0; _aux++) {
          free(mac_dev[_aux].priv);
          }
          free(mac_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
