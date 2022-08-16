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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct bna_txq {int dummy; } ;
struct bna_tx {int dummy; } ;
struct bna_rxq {int dummy; } ;
struct bna_rxp {int dummy; } ;
struct bna_rx {int dummy; } ;
struct TYPE_5__ {int num; int len; void* mem_type; } ;
struct TYPE_6__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; void* res_type; } ;
struct bna_mcam_handle {int dummy; } ;
struct bna_mac {int dummy; } ;
struct bna_attr {int num_txq; int num_rxp; int num_ucmac; int num_mcmac; } ;
struct TYPE_4__ {struct bna_attr attr; } ;
struct bna {TYPE_1__ ioceth; } ;

/* Variables and functions */
 void* BNA_MEM_T_KVA ; 
 size_t BNA_MOD_RES_MEM_T_MCHANDLE_ARRAY ; 
 size_t BNA_MOD_RES_MEM_T_MCMAC_ARRAY ; 
 size_t BNA_MOD_RES_MEM_T_RXP_ARRAY ; 
 size_t BNA_MOD_RES_MEM_T_RXQ_ARRAY ; 
 size_t BNA_MOD_RES_MEM_T_RX_ARRAY ; 
 size_t BNA_MOD_RES_MEM_T_TXQ_ARRAY ; 
 size_t BNA_MOD_RES_MEM_T_TX_ARRAY ; 
 size_t BNA_MOD_RES_MEM_T_UCMAC_ARRAY ; 
 void* BNA_RES_T_MEM ; 

void
bna_mod_res_req(struct bna *bna, struct bna_res_info *res_info)
{
	struct bna_attr *attr = &bna->ioceth.attr;

	/* Virtual memory for Tx objects - stored by Tx module */
	res_info[BNA_MOD_RES_MEM_T_TX_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_TX_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_TX_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_TX_ARRAY].res_u.mem_info.len =
		attr->num_txq * sizeof(struct bna_tx);

	/* Virtual memory for TxQ - stored by Tx module */
	res_info[BNA_MOD_RES_MEM_T_TXQ_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_TXQ_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_TXQ_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_TXQ_ARRAY].res_u.mem_info.len =
		attr->num_txq * sizeof(struct bna_txq);

	/* Virtual memory for Rx objects - stored by Rx module */
	res_info[BNA_MOD_RES_MEM_T_RX_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_RX_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_RX_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_RX_ARRAY].res_u.mem_info.len =
		attr->num_rxp * sizeof(struct bna_rx);

	/* Virtual memory for RxPath - stored by Rx module */
	res_info[BNA_MOD_RES_MEM_T_RXP_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_RXP_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_RXP_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_RXP_ARRAY].res_u.mem_info.len =
		attr->num_rxp * sizeof(struct bna_rxp);

	/* Virtual memory for RxQ - stored by Rx module */
	res_info[BNA_MOD_RES_MEM_T_RXQ_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_RXQ_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_RXQ_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_RXQ_ARRAY].res_u.mem_info.len =
		(attr->num_rxp * 2) * sizeof(struct bna_rxq);

	/* Virtual memory for Unicast MAC address - stored by ucam module */
	res_info[BNA_MOD_RES_MEM_T_UCMAC_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_UCMAC_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_UCMAC_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_UCMAC_ARRAY].res_u.mem_info.len =
		(attr->num_ucmac * 2) * sizeof(struct bna_mac);

	/* Virtual memory for Multicast MAC address - stored by mcam module */
	res_info[BNA_MOD_RES_MEM_T_MCMAC_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_MCMAC_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_MCMAC_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_MCMAC_ARRAY].res_u.mem_info.len =
		(attr->num_mcmac * 2) * sizeof(struct bna_mac);

	/* Virtual memory for Multicast handle - stored by mcam module */
	res_info[BNA_MOD_RES_MEM_T_MCHANDLE_ARRAY].res_type = BNA_RES_T_MEM;
	res_info[BNA_MOD_RES_MEM_T_MCHANDLE_ARRAY].res_u.mem_info.mem_type =
		BNA_MEM_T_KVA;
	res_info[BNA_MOD_RES_MEM_T_MCHANDLE_ARRAY].res_u.mem_info.num = 1;
	res_info[BNA_MOD_RES_MEM_T_MCHANDLE_ARRAY].res_u.mem_info.len =
		attr->num_mcmac * sizeof(struct bna_mcam_handle);
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
          int _len_bna0 = 1;
          struct bna * bna = (struct bna *) malloc(_len_bna0*sizeof(struct bna));
          for(int _i0 = 0; _i0 < _len_bna0; _i0++) {
            bna[_i0].ioceth.attr.num_txq = ((-2 * (next_i()%2)) + 1) * next_i();
        bna[_i0].ioceth.attr.num_rxp = ((-2 * (next_i()%2)) + 1) * next_i();
        bna[_i0].ioceth.attr.num_ucmac = ((-2 * (next_i()%2)) + 1) * next_i();
        bna[_i0].ioceth.attr.num_mcmac = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_info0 = 1;
          struct bna_res_info * res_info = (struct bna_res_info *) malloc(_len_res_info0*sizeof(struct bna_res_info));
          for(int _i0 = 0; _i0 < _len_res_info0; _i0++) {
            res_info[_i0].res_u.mem_info.num = ((-2 * (next_i()%2)) + 1) * next_i();
        res_info[_i0].res_u.mem_info.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bna_mod_res_req(bna,res_info);
          free(bna);
          free(res_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
