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
struct TYPE_2__ {int max_cqe; int /*<<< orphan*/  local_ca_ack_delay; int /*<<< orphan*/  max_pkeys; int /*<<< orphan*/  max_fast_reg_page_list_len; int /*<<< orphan*/  max_srq_sge; int /*<<< orphan*/  max_srq_wr; int /*<<< orphan*/  max_srq; int /*<<< orphan*/  max_map_per_fmr; int /*<<< orphan*/  max_fmr; int /*<<< orphan*/  max_ah; int /*<<< orphan*/  max_total_mcast_qp_attach; int /*<<< orphan*/  max_mcast_qp_attach; int /*<<< orphan*/  max_mcast_grp; int /*<<< orphan*/  max_raw_ethy_qp; int /*<<< orphan*/  max_raw_ipv6_qp; int /*<<< orphan*/  max_mw; int /*<<< orphan*/  max_rdd; int /*<<< orphan*/  max_ee; int /*<<< orphan*/  atomic_cap; int /*<<< orphan*/  max_ee_init_rd_atom; int /*<<< orphan*/  max_qp_init_rd_atom; int /*<<< orphan*/  max_res_rd_atom; int /*<<< orphan*/  max_ee_rd_atom; int /*<<< orphan*/  max_qp_rd_atom; int /*<<< orphan*/  max_pd; int /*<<< orphan*/  max_mr; int /*<<< orphan*/  max_cq; int /*<<< orphan*/  max_sge_rd; void* max_recv_sge; void* max_send_sge; int /*<<< orphan*/  device_cap_flags; int /*<<< orphan*/  max_qp_wr; int /*<<< orphan*/  max_qp; int /*<<< orphan*/  hw_ver; int /*<<< orphan*/  vendor_part_id; int /*<<< orphan*/  vendor_id; int /*<<< orphan*/  page_size_cap; int /*<<< orphan*/  max_mr_size; int /*<<< orphan*/  fw_ver; } ;
struct rxe_dev {int /*<<< orphan*/  max_ucontext; TYPE_1__ attr; int /*<<< orphan*/  max_inline_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  RXE_ATOMIC_CAP ; 
 int /*<<< orphan*/  RXE_DEVICE_CAP_FLAGS ; 
 int /*<<< orphan*/  RXE_FW_VER ; 
 int /*<<< orphan*/  RXE_HW_VER ; 
 int /*<<< orphan*/  RXE_LOCAL_CA_ACK_DELAY ; 
 int /*<<< orphan*/  RXE_MAX_AH ; 
 int /*<<< orphan*/  RXE_MAX_CQ ; 
 int /*<<< orphan*/  RXE_MAX_EE ; 
 int /*<<< orphan*/  RXE_MAX_EE_INIT_RD_ATOM ; 
 int /*<<< orphan*/  RXE_MAX_EE_RD_ATOM ; 
 int /*<<< orphan*/  RXE_MAX_FMR ; 
 int /*<<< orphan*/  RXE_MAX_FMR_PAGE_LIST_LEN ; 
 int /*<<< orphan*/  RXE_MAX_INLINE_DATA ; 
 int RXE_MAX_LOG_CQE ; 
 int /*<<< orphan*/  RXE_MAX_MAP_PER_FMR ; 
 int /*<<< orphan*/  RXE_MAX_MCAST_GRP ; 
 int /*<<< orphan*/  RXE_MAX_MCAST_QP_ATTACH ; 
 int /*<<< orphan*/  RXE_MAX_MR ; 
 int /*<<< orphan*/  RXE_MAX_MR_SIZE ; 
 int /*<<< orphan*/  RXE_MAX_MW ; 
 int /*<<< orphan*/  RXE_MAX_PD ; 
 int /*<<< orphan*/  RXE_MAX_PKEYS ; 
 int /*<<< orphan*/  RXE_MAX_QP ; 
 int /*<<< orphan*/  RXE_MAX_QP_INIT_RD_ATOM ; 
 int /*<<< orphan*/  RXE_MAX_QP_RD_ATOM ; 
 int /*<<< orphan*/  RXE_MAX_QP_WR ; 
 int /*<<< orphan*/  RXE_MAX_RAW_ETHY_QP ; 
 int /*<<< orphan*/  RXE_MAX_RAW_IPV6_QP ; 
 int /*<<< orphan*/  RXE_MAX_RDD ; 
 int /*<<< orphan*/  RXE_MAX_RES_RD_ATOM ; 
 void* RXE_MAX_SGE ; 
 int /*<<< orphan*/  RXE_MAX_SGE_RD ; 
 int /*<<< orphan*/  RXE_MAX_SRQ ; 
 int /*<<< orphan*/  RXE_MAX_SRQ_SGE ; 
 int /*<<< orphan*/  RXE_MAX_SRQ_WR ; 
 int /*<<< orphan*/  RXE_MAX_TOT_MCAST_QP_ATTACH ; 
 int /*<<< orphan*/  RXE_MAX_UCONTEXT ; 
 int /*<<< orphan*/  RXE_PAGE_SIZE_CAP ; 
 int /*<<< orphan*/  RXE_VENDOR_ID ; 
 int /*<<< orphan*/  RXE_VENDOR_PART_ID ; 

__attribute__((used)) static void rxe_init_device_param(struct rxe_dev *rxe)
{
	rxe->max_inline_data			= RXE_MAX_INLINE_DATA;

	rxe->attr.fw_ver			= RXE_FW_VER;
	rxe->attr.max_mr_size			= RXE_MAX_MR_SIZE;
	rxe->attr.page_size_cap			= RXE_PAGE_SIZE_CAP;
	rxe->attr.vendor_id			= RXE_VENDOR_ID;
	rxe->attr.vendor_part_id		= RXE_VENDOR_PART_ID;
	rxe->attr.hw_ver			= RXE_HW_VER;
	rxe->attr.max_qp			= RXE_MAX_QP;
	rxe->attr.max_qp_wr			= RXE_MAX_QP_WR;
	rxe->attr.device_cap_flags		= RXE_DEVICE_CAP_FLAGS;
	rxe->attr.max_send_sge			= RXE_MAX_SGE;
	rxe->attr.max_recv_sge			= RXE_MAX_SGE;
	rxe->attr.max_sge_rd			= RXE_MAX_SGE_RD;
	rxe->attr.max_cq			= RXE_MAX_CQ;
	rxe->attr.max_cqe			= (1 << RXE_MAX_LOG_CQE) - 1;
	rxe->attr.max_mr			= RXE_MAX_MR;
	rxe->attr.max_pd			= RXE_MAX_PD;
	rxe->attr.max_qp_rd_atom		= RXE_MAX_QP_RD_ATOM;
	rxe->attr.max_ee_rd_atom		= RXE_MAX_EE_RD_ATOM;
	rxe->attr.max_res_rd_atom		= RXE_MAX_RES_RD_ATOM;
	rxe->attr.max_qp_init_rd_atom		= RXE_MAX_QP_INIT_RD_ATOM;
	rxe->attr.max_ee_init_rd_atom		= RXE_MAX_EE_INIT_RD_ATOM;
	rxe->attr.atomic_cap			= RXE_ATOMIC_CAP;
	rxe->attr.max_ee			= RXE_MAX_EE;
	rxe->attr.max_rdd			= RXE_MAX_RDD;
	rxe->attr.max_mw			= RXE_MAX_MW;
	rxe->attr.max_raw_ipv6_qp		= RXE_MAX_RAW_IPV6_QP;
	rxe->attr.max_raw_ethy_qp		= RXE_MAX_RAW_ETHY_QP;
	rxe->attr.max_mcast_grp			= RXE_MAX_MCAST_GRP;
	rxe->attr.max_mcast_qp_attach		= RXE_MAX_MCAST_QP_ATTACH;
	rxe->attr.max_total_mcast_qp_attach	= RXE_MAX_TOT_MCAST_QP_ATTACH;
	rxe->attr.max_ah			= RXE_MAX_AH;
	rxe->attr.max_fmr			= RXE_MAX_FMR;
	rxe->attr.max_map_per_fmr		= RXE_MAX_MAP_PER_FMR;
	rxe->attr.max_srq			= RXE_MAX_SRQ;
	rxe->attr.max_srq_wr			= RXE_MAX_SRQ_WR;
	rxe->attr.max_srq_sge			= RXE_MAX_SRQ_SGE;
	rxe->attr.max_fast_reg_page_list_len	= RXE_MAX_FMR_PAGE_LIST_LEN;
	rxe->attr.max_pkeys			= RXE_MAX_PKEYS;
	rxe->attr.local_ca_ack_delay		= RXE_LOCAL_CA_ACK_DELAY;

	rxe->max_ucontext			= RXE_MAX_UCONTEXT;
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
          int _len_rxe0 = 1;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
            rxe[_i0].max_ucontext = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_cqe = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.local_ca_ack_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_pkeys = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_fast_reg_page_list_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_srq_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_srq_wr = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_srq = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_map_per_fmr = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_fmr = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_ah = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_total_mcast_qp_attach = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_mcast_qp_attach = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_mcast_grp = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_raw_ethy_qp = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_raw_ipv6_qp = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_mw = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_rdd = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_ee = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.atomic_cap = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_ee_init_rd_atom = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_qp_init_rd_atom = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_res_rd_atom = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_ee_rd_atom = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_qp_rd_atom = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_pd = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_mr = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_sge_rd = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.device_cap_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_qp_wr = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_qp = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.hw_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.vendor_part_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.page_size_cap = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.max_mr_size = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].attr.fw_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        rxe[_i0].max_inline_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rxe_init_device_param(rxe);
          free(rxe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
