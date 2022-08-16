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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int /*<<< orphan*/  b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_9__ {int /*<<< orphan*/  b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_8__ {int /*<<< orphan*/  b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_7__ {int /*<<< orphan*/  b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_6__ {int /*<<< orphan*/  b_mode_enabled; scalar_t__ b_update_mode; } ;
struct qed_tunnel_info {TYPE_5__ ip_geneve; TYPE_4__ l2_geneve; TYPE_3__ ip_gre; TYPE_2__ l2_gre; TYPE_1__ vxlan; } ;

/* Variables and functions */

__attribute__((used)) static void
qed_set_pf_update_tunn_mode(struct qed_tunnel_info *p_tun,
			    struct qed_tunnel_info *p_src, bool b_pf_start)
{
	if (p_src->vxlan.b_update_mode || b_pf_start)
		p_tun->vxlan.b_mode_enabled = p_src->vxlan.b_mode_enabled;

	if (p_src->l2_gre.b_update_mode || b_pf_start)
		p_tun->l2_gre.b_mode_enabled = p_src->l2_gre.b_mode_enabled;

	if (p_src->ip_gre.b_update_mode || b_pf_start)
		p_tun->ip_gre.b_mode_enabled = p_src->ip_gre.b_mode_enabled;

	if (p_src->l2_geneve.b_update_mode || b_pf_start)
		p_tun->l2_geneve.b_mode_enabled =
		    p_src->l2_geneve.b_mode_enabled;

	if (p_src->ip_geneve.b_update_mode || b_pf_start)
		p_tun->ip_geneve.b_mode_enabled =
		    p_src->ip_geneve.b_mode_enabled;
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
          int b_pf_start = 100;
          int _len_p_tun0 = 1;
          struct qed_tunnel_info * p_tun = (struct qed_tunnel_info *) malloc(_len_p_tun0*sizeof(struct qed_tunnel_info));
          for(int _i0 = 0; _i0 < _len_p_tun0; _i0++) {
            p_tun[_i0].ip_geneve.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].ip_geneve.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].l2_geneve.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].l2_geneve.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].ip_gre.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].ip_gre.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].l2_gre.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].l2_gre.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].vxlan.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_tun[_i0].vxlan.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_src0 = 1;
          struct qed_tunnel_info * p_src = (struct qed_tunnel_info *) malloc(_len_p_src0*sizeof(struct qed_tunnel_info));
          for(int _i0 = 0; _i0 < _len_p_src0; _i0++) {
            p_src[_i0].ip_geneve.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].ip_geneve.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].l2_geneve.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].l2_geneve.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].ip_gre.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].ip_gre.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].l2_gre.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].l2_gre.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].vxlan.b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p_src[_i0].vxlan.b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_set_pf_update_tunn_mode(p_tun,p_src,b_pf_start);
          free(p_tun);
          free(p_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
