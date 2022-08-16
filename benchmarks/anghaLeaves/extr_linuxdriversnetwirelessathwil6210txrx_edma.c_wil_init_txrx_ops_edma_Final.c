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
struct TYPE_2__ {int /*<<< orphan*/  rx_fini; int /*<<< orphan*/  is_rx_idle; int /*<<< orphan*/  rx_error_check; int /*<<< orphan*/  rx_crypto_check; int /*<<< orphan*/  get_netif_rx_params; int /*<<< orphan*/  get_reorder_params; int /*<<< orphan*/  wmi_addba_rx_resp; int /*<<< orphan*/  rx_init; int /*<<< orphan*/  tx_ring_tso; int /*<<< orphan*/  tx_desc_unmap; int /*<<< orphan*/  tx_desc_map; int /*<<< orphan*/  tx_fini; int /*<<< orphan*/  tx_init; int /*<<< orphan*/  ring_init_bcast; int /*<<< orphan*/  ring_fini_tx; int /*<<< orphan*/  ring_init_tx; int /*<<< orphan*/  configure_interrupt_moderation; } ;
struct wil6210_priv {TYPE_1__ txrx_ops; } ;

/* Variables and functions */
 int /*<<< orphan*/  __wil_tx_ring_tso_edma ; 
 int /*<<< orphan*/  wil_configure_interrupt_moderation_edma ; 
 int /*<<< orphan*/  wil_get_netif_rx_params_edma ; 
 int /*<<< orphan*/  wil_get_reorder_params_edma ; 
 int /*<<< orphan*/  wil_is_rx_idle_edma ; 
 int /*<<< orphan*/  wil_ring_free_edma ; 
 int /*<<< orphan*/  wil_ring_init_bcast_edma ; 
 int /*<<< orphan*/  wil_ring_init_tx_edma ; 
 int /*<<< orphan*/  wil_rx_crypto_check_edma ; 
 int /*<<< orphan*/  wil_rx_error_check_edma ; 
 int /*<<< orphan*/  wil_rx_fini_edma ; 
 int /*<<< orphan*/  wil_rx_init_edma ; 
 int /*<<< orphan*/  wil_tx_desc_map_edma ; 
 int /*<<< orphan*/  wil_tx_desc_unmap_edma ; 
 int /*<<< orphan*/  wil_tx_fini_edma ; 
 int /*<<< orphan*/  wil_tx_init_edma ; 
 int /*<<< orphan*/  wmi_addba_rx_resp_edma ; 

void wil_init_txrx_ops_edma(struct wil6210_priv *wil)
{
	wil->txrx_ops.configure_interrupt_moderation =
		wil_configure_interrupt_moderation_edma;
	/* TX ops */
	wil->txrx_ops.ring_init_tx = wil_ring_init_tx_edma;
	wil->txrx_ops.ring_fini_tx = wil_ring_free_edma;
	wil->txrx_ops.ring_init_bcast = wil_ring_init_bcast_edma;
	wil->txrx_ops.tx_init = wil_tx_init_edma;
	wil->txrx_ops.tx_fini = wil_tx_fini_edma;
	wil->txrx_ops.tx_desc_map = wil_tx_desc_map_edma;
	wil->txrx_ops.tx_desc_unmap = wil_tx_desc_unmap_edma;
	wil->txrx_ops.tx_ring_tso = __wil_tx_ring_tso_edma;
	/* RX ops */
	wil->txrx_ops.rx_init = wil_rx_init_edma;
	wil->txrx_ops.wmi_addba_rx_resp = wmi_addba_rx_resp_edma;
	wil->txrx_ops.get_reorder_params = wil_get_reorder_params_edma;
	wil->txrx_ops.get_netif_rx_params = wil_get_netif_rx_params_edma;
	wil->txrx_ops.rx_crypto_check = wil_rx_crypto_check_edma;
	wil->txrx_ops.rx_error_check = wil_rx_error_check_edma;
	wil->txrx_ops.is_rx_idle = wil_is_rx_idle_edma;
	wil->txrx_ops.rx_fini = wil_rx_fini_edma;
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
          int _len_wil0 = 1;
          struct wil6210_priv * wil = (struct wil6210_priv *) malloc(_len_wil0*sizeof(struct wil6210_priv));
          for(int _i0 = 0; _i0 < _len_wil0; _i0++) {
            wil[_i0].txrx_ops.rx_fini = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.is_rx_idle = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.rx_error_check = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.rx_crypto_check = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.get_netif_rx_params = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.get_reorder_params = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.wmi_addba_rx_resp = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.rx_init = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.tx_ring_tso = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.tx_desc_unmap = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.tx_desc_map = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.tx_fini = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.tx_init = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.ring_init_bcast = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.ring_fini_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.ring_init_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        wil[_i0].txrx_ops.configure_interrupt_moderation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wil_init_txrx_ops_edma(wil);
          free(wil);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
