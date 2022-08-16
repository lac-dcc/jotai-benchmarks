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
typedef  int /*<<< orphan*/  u16 ;
struct qed_hwfn {TYPE_1__* vf_iov_info; } ;
struct qed_bulletin_content {int /*<<< orphan*/  geneve_udp_port; int /*<<< orphan*/  vxlan_udp_port; } ;
struct TYPE_2__ {struct qed_bulletin_content bulletin_shadow; } ;

/* Variables and functions */

__attribute__((used)) static void
qed_vf_bulletin_get_udp_ports(struct qed_hwfn *p_hwfn,
			      u16 *p_vxlan_port, u16 *p_geneve_port)
{
	struct qed_bulletin_content *p_bulletin;

	p_bulletin = &p_hwfn->vf_iov_info->bulletin_shadow;

	*p_vxlan_port = p_bulletin->vxlan_udp_port;
	*p_geneve_port = p_bulletin->geneve_udp_port;
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
              int _len_p_hwfn__i0__vf_iov_info0 = 1;
          p_hwfn[_i0].vf_iov_info = (struct TYPE_2__ *) malloc(_len_p_hwfn__i0__vf_iov_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__vf_iov_info0; _j0++) {
            p_hwfn[_i0].vf_iov_info->bulletin_shadow.geneve_udp_port = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].vf_iov_info->bulletin_shadow.vxlan_udp_port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p_vxlan_port0 = 1;
          int * p_vxlan_port = (int *) malloc(_len_p_vxlan_port0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_vxlan_port0; _i0++) {
            p_vxlan_port[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_geneve_port0 = 1;
          int * p_geneve_port = (int *) malloc(_len_p_geneve_port0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_geneve_port0; _i0++) {
            p_geneve_port[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_vf_bulletin_get_udp_ports(p_hwfn,p_vxlan_port,p_geneve_port);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].vf_iov_info);
          }
          free(p_hwfn);
          free(p_vxlan_port);
          free(p_geneve_port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
