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
typedef  int u32 ;
struct emac_adapter {int irq_mod; int automatic; int single_pause_mode; int /*<<< orphan*/  preamble; int /*<<< orphan*/  rfd_burst; int /*<<< orphan*/  tpd_burst; int /*<<< orphan*/  dmaw_dly_cnt; int /*<<< orphan*/  dmar_dly_cnt; int /*<<< orphan*/  dmaw_block; int /*<<< orphan*/  dmar_block; int /*<<< orphan*/  dma_order; int /*<<< orphan*/  rx_desc_cnt; int /*<<< orphan*/  tx_desc_cnt; int /*<<< orphan*/  rfd_size; int /*<<< orphan*/  tpd_size; int /*<<< orphan*/  rrd_size; } ;

/* Variables and functions */
 int /*<<< orphan*/  DMAR_DLY_CNT_DEF ; 
 int /*<<< orphan*/  DMAW_DLY_CNT_DEF ; 
 int /*<<< orphan*/  EMAC_DEF_RX_DESCS ; 
 int EMAC_DEF_RX_IRQ_MOD ; 
 int /*<<< orphan*/  EMAC_DEF_TX_DESCS ; 
 int EMAC_DEF_TX_IRQ_MOD ; 
 int /*<<< orphan*/  EMAC_PREAMBLE_DEF ; 
 int /*<<< orphan*/  EMAC_RFD_SIZE ; 
 int /*<<< orphan*/  EMAC_RRD_SIZE ; 
 int /*<<< orphan*/  EMAC_TPD_SIZE ; 
 int IRQ_MODERATOR2_INIT_SHFT ; 
 int IRQ_MODERATOR_INIT_SHFT ; 
 int /*<<< orphan*/  RXQ0_NUM_RFD_PREF_DEF ; 
 int /*<<< orphan*/  TXQ0_NUM_TPD_PREF_DEF ; 
 int /*<<< orphan*/  emac_dma_ord_out ; 
 int /*<<< orphan*/  emac_dma_req_128 ; 
 int /*<<< orphan*/  emac_dma_req_4096 ; 

__attribute__((used)) static void emac_init_adapter(struct emac_adapter *adpt)
{
	u32 reg;

	adpt->rrd_size = EMAC_RRD_SIZE;
	adpt->tpd_size = EMAC_TPD_SIZE;
	adpt->rfd_size = EMAC_RFD_SIZE;

	/* descriptors */
	adpt->tx_desc_cnt = EMAC_DEF_TX_DESCS;
	adpt->rx_desc_cnt = EMAC_DEF_RX_DESCS;

	/* dma */
	adpt->dma_order = emac_dma_ord_out;
	adpt->dmar_block = emac_dma_req_4096;
	adpt->dmaw_block = emac_dma_req_128;
	adpt->dmar_dly_cnt = DMAR_DLY_CNT_DEF;
	adpt->dmaw_dly_cnt = DMAW_DLY_CNT_DEF;
	adpt->tpd_burst = TXQ0_NUM_TPD_PREF_DEF;
	adpt->rfd_burst = RXQ0_NUM_RFD_PREF_DEF;

	/* irq moderator */
	reg = ((EMAC_DEF_RX_IRQ_MOD >> 1) << IRQ_MODERATOR2_INIT_SHFT) |
	      ((EMAC_DEF_TX_IRQ_MOD >> 1) << IRQ_MODERATOR_INIT_SHFT);
	adpt->irq_mod = reg;

	/* others */
	adpt->preamble = EMAC_PREAMBLE_DEF;

	/* default to automatic flow control */
	adpt->automatic = true;

	/* Disable single-pause-frame mode by default */
	adpt->single_pause_mode = false;
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
          int _len_adpt0 = 1;
          struct emac_adapter * adpt = (struct emac_adapter *) malloc(_len_adpt0*sizeof(struct emac_adapter));
          for(int _i0 = 0; _i0 < _len_adpt0; _i0++) {
            adpt[_i0].irq_mod = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].automatic = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].single_pause_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].preamble = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rfd_burst = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tpd_burst = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].dmaw_dly_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].dmar_dly_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].dmaw_block = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].dmar_block = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].dma_order = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_desc_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_desc_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rfd_size = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tpd_size = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rrd_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_init_adapter(adpt);
          free(adpt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
