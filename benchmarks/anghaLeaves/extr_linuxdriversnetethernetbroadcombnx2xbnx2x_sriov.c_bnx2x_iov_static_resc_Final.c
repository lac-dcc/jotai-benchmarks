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
struct vf_pf_resc_request {int /*<<< orphan*/  num_sbs; scalar_t__ num_mc_filters; int /*<<< orphan*/  num_vlan_filters; int /*<<< orphan*/  num_mac_filters; scalar_t__ num_txqs; scalar_t__ num_rxqs; } ;
struct bnx2x_virtf {int /*<<< orphan*/  sb_count; struct vf_pf_resc_request alloc_resc; } ;
struct bnx2x {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  VF_MAC_CREDIT_CNT ; 
 int /*<<< orphan*/  VF_VLAN_CREDIT_CNT ; 

__attribute__((used)) static void
bnx2x_iov_static_resc(struct bnx2x *bp, struct bnx2x_virtf *vf)
{
	struct vf_pf_resc_request *resc = &vf->alloc_resc;

	/* will be set only during VF-ACQUIRE */
	resc->num_rxqs = 0;
	resc->num_txqs = 0;

	resc->num_mac_filters = VF_MAC_CREDIT_CNT;
	resc->num_vlan_filters = VF_VLAN_CREDIT_CNT;

	/* no real limitation */
	resc->num_mc_filters = 0;

	/* num_sbs already set */
	resc->num_sbs = vf->sb_count;
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
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vf0 = 1;
          struct bnx2x_virtf * vf = (struct bnx2x_virtf *) malloc(_len_vf0*sizeof(struct bnx2x_virtf));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
            vf[_i0].sb_count = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].alloc_resc.num_sbs = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].alloc_resc.num_mc_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].alloc_resc.num_vlan_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].alloc_resc.num_mac_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].alloc_resc.num_txqs = ((-2 * (next_i()%2)) + 1) * next_i();
        vf[_i0].alloc_resc.num_rxqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_iov_static_resc(bp,vf);
          free(bp);
          free(vf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
