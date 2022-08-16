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
struct TYPE_2__ {scalar_t__ update_tpa_param_flg; scalar_t__ update_tpa_en_flg; } ;
struct eth_vport_tpa_param {int /*<<< orphan*/  tpa_min_size_to_cont; int /*<<< orphan*/  tpa_min_size_to_start; int /*<<< orphan*/  tpa_max_size; int /*<<< orphan*/  tpa_max_aggs_num; int /*<<< orphan*/  tpa_gro_consistent_flg; int /*<<< orphan*/  tpa_hdr_data_split_flg; int /*<<< orphan*/  tpa_pkt_split_flg; int /*<<< orphan*/  max_buff_num; int /*<<< orphan*/  tpa_ipv6_tunn_en_flg; int /*<<< orphan*/  tpa_ipv4_tunn_en_flg; int /*<<< orphan*/  tpa_ipv6_en_flg; int /*<<< orphan*/  tpa_ipv4_en_flg; } ;
struct vport_update_ramrod_data {TYPE_1__ common; struct eth_vport_tpa_param tpa_param; } ;
struct qed_sge_tpa_params {int /*<<< orphan*/  tpa_min_size_to_cont; int /*<<< orphan*/  tpa_min_size_to_start; int /*<<< orphan*/  tpa_max_size; int /*<<< orphan*/  tpa_max_aggs_num; int /*<<< orphan*/  tpa_gro_consistent_flg; int /*<<< orphan*/  tpa_hdr_data_split_flg; int /*<<< orphan*/  tpa_pkt_split_flg; int /*<<< orphan*/  max_buffers_per_cqe; scalar_t__ update_tpa_param_flg; int /*<<< orphan*/  tpa_ipv6_tunn_en_flg; int /*<<< orphan*/  tpa_ipv4_tunn_en_flg; int /*<<< orphan*/  tpa_ipv6_en_flg; int /*<<< orphan*/  tpa_ipv4_en_flg; scalar_t__ update_tpa_en_flg; } ;
struct qed_hwfn {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
qed_sp_vport_update_sge_tpa(struct qed_hwfn *p_hwfn,
			    struct vport_update_ramrod_data *p_ramrod,
			    struct qed_sge_tpa_params *p_params)
{
	struct eth_vport_tpa_param *p_tpa;

	if (!p_params) {
		p_ramrod->common.update_tpa_param_flg = 0;
		p_ramrod->common.update_tpa_en_flg = 0;
		p_ramrod->common.update_tpa_param_flg = 0;
		return;
	}

	p_ramrod->common.update_tpa_en_flg = p_params->update_tpa_en_flg;
	p_tpa = &p_ramrod->tpa_param;
	p_tpa->tpa_ipv4_en_flg = p_params->tpa_ipv4_en_flg;
	p_tpa->tpa_ipv6_en_flg = p_params->tpa_ipv6_en_flg;
	p_tpa->tpa_ipv4_tunn_en_flg = p_params->tpa_ipv4_tunn_en_flg;
	p_tpa->tpa_ipv6_tunn_en_flg = p_params->tpa_ipv6_tunn_en_flg;

	p_ramrod->common.update_tpa_param_flg = p_params->update_tpa_param_flg;
	p_tpa->max_buff_num = p_params->max_buffers_per_cqe;
	p_tpa->tpa_pkt_split_flg = p_params->tpa_pkt_split_flg;
	p_tpa->tpa_hdr_data_split_flg = p_params->tpa_hdr_data_split_flg;
	p_tpa->tpa_gro_consistent_flg = p_params->tpa_gro_consistent_flg;
	p_tpa->tpa_max_aggs_num = p_params->tpa_max_aggs_num;
	p_tpa->tpa_max_size = p_params->tpa_max_size;
	p_tpa->tpa_min_size_to_start = p_params->tpa_min_size_to_start;
	p_tpa->tpa_min_size_to_cont = p_params->tpa_min_size_to_cont;
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
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_ramrod0 = 1;
          struct vport_update_ramrod_data * p_ramrod = (struct vport_update_ramrod_data *) malloc(_len_p_ramrod0*sizeof(struct vport_update_ramrod_data));
          for(int _i0 = 0; _i0 < _len_p_ramrod0; _i0++) {
            p_ramrod[_i0].common.update_tpa_param_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].common.update_tpa_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_min_size_to_cont = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_min_size_to_start = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_max_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_max_aggs_num = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_gro_consistent_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_hdr_data_split_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_pkt_split_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.max_buff_num = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_ipv6_tunn_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_ipv4_tunn_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_ipv6_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_ramrod[_i0].tpa_param.tpa_ipv4_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_params0 = 1;
          struct qed_sge_tpa_params * p_params = (struct qed_sge_tpa_params *) malloc(_len_p_params0*sizeof(struct qed_sge_tpa_params));
          for(int _i0 = 0; _i0 < _len_p_params0; _i0++) {
            p_params[_i0].tpa_min_size_to_cont = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_min_size_to_start = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_max_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_max_aggs_num = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_gro_consistent_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_hdr_data_split_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_pkt_split_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].max_buffers_per_cqe = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].update_tpa_param_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_ipv6_tunn_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_ipv4_tunn_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_ipv6_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].tpa_ipv4_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
        p_params[_i0].update_tpa_en_flg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_sp_vport_update_sge_tpa(p_hwfn,p_ramrod,p_params);
          free(p_hwfn);
          free(p_ramrod);
          free(p_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
