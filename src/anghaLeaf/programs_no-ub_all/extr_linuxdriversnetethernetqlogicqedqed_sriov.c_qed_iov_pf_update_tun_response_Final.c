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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_14__ {int /*<<< orphan*/  port; } ;
struct TYPE_13__ {int /*<<< orphan*/  port; } ;
struct TYPE_12__ {int /*<<< orphan*/  tun_cls; int /*<<< orphan*/  b_mode_enabled; } ;
struct TYPE_11__ {int /*<<< orphan*/  tun_cls; int /*<<< orphan*/  b_mode_enabled; } ;
struct TYPE_10__ {int /*<<< orphan*/  tun_cls; } ;
struct TYPE_9__ {int /*<<< orphan*/  tun_cls; int /*<<< orphan*/  b_mode_enabled; } ;
struct TYPE_8__ {int /*<<< orphan*/  tun_cls; int /*<<< orphan*/  b_mode_enabled; } ;
struct qed_tunnel_info {TYPE_7__ vxlan_port; TYPE_6__ geneve_port; TYPE_5__ ip_geneve; TYPE_4__ l2_geneve; TYPE_3__ ip_gre; TYPE_2__ l2_gre; TYPE_1__ vxlan; } ;
struct pfvf_update_tunn_param_tlv {int /*<<< orphan*/  vxlan_udp_port; int /*<<< orphan*/  geneve_udp_port; int /*<<< orphan*/  ipgeneve_clss; int /*<<< orphan*/  l2geneve_clss; int /*<<< orphan*/  ipgre_clss; int /*<<< orphan*/  l2gre_clss; int /*<<< orphan*/  vxlan_clss; int /*<<< orphan*/  ipgre_mode; int /*<<< orphan*/  l2gre_mode; int /*<<< orphan*/  ipgeneve_mode; int /*<<< orphan*/  l2geneve_mode; int /*<<< orphan*/  vxlan_mode; int /*<<< orphan*/  tunn_feature_mask; } ;

/* Variables and functions */

__attribute__((used)) static void
qed_iov_pf_update_tun_response(struct pfvf_update_tunn_param_tlv *p_resp,
			       struct qed_tunnel_info *p_tun,
			       u16 tunn_feature_mask)
{
	p_resp->tunn_feature_mask = tunn_feature_mask;
	p_resp->vxlan_mode = p_tun->vxlan.b_mode_enabled;
	p_resp->l2geneve_mode = p_tun->l2_geneve.b_mode_enabled;
	p_resp->ipgeneve_mode = p_tun->ip_geneve.b_mode_enabled;
	p_resp->l2gre_mode = p_tun->l2_gre.b_mode_enabled;
	p_resp->ipgre_mode = p_tun->l2_gre.b_mode_enabled;
	p_resp->vxlan_clss = p_tun->vxlan.tun_cls;
	p_resp->l2gre_clss = p_tun->l2_gre.tun_cls;
	p_resp->ipgre_clss = p_tun->ip_gre.tun_cls;
	p_resp->l2geneve_clss = p_tun->l2_geneve.tun_cls;
	p_resp->ipgeneve_clss = p_tun->ip_geneve.tun_cls;
	p_resp->geneve_udp_port = p_tun->geneve_port.port;
	p_resp->vxlan_udp_port = p_tun->vxlan_port.port;
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

    // big-arr
    case 0:
    {
          int tunn_feature_mask = 255;
          int _len_p_resp0 = 1;
          struct pfvf_update_tunn_param_tlv * p_resp = (struct pfvf_update_tunn_param_tlv *) malloc(_len_p_resp0*sizeof(struct pfvf_update_tunn_param_tlv));
          for(int _i0 = 0; _i0 < _len_p_resp0; _i0++) {
            p_resp->vxlan_udp_port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->geneve_udp_port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->ipgeneve_clss = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->l2geneve_clss = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->ipgre_clss = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->l2gre_clss = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->vxlan_clss = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->ipgre_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->l2gre_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->ipgeneve_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->l2geneve_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->vxlan_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_resp->tunn_feature_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_tun0 = 1;
          struct qed_tunnel_info * p_tun = (struct qed_tunnel_info *) malloc(_len_p_tun0*sizeof(struct qed_tunnel_info));
          for(int _i0 = 0; _i0 < _len_p_tun0; _i0++) {
            p_tun->vxlan_port.port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->geneve_port.port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->ip_geneve.tun_cls = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->ip_geneve.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->l2_geneve.tun_cls = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->l2_geneve.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->ip_gre.tun_cls = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->l2_gre.tun_cls = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->l2_gre.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->vxlan.tun_cls = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun->vxlan.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_iov_pf_update_tun_response(p_resp,p_tun,tunn_feature_mask);
          free(p_resp);
          free(p_tun);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
