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
typedef  scalar_t__ u16 ;
struct qlcnic_vf_info {scalar_t__* sriov_vlans; int /*<<< orphan*/  num_vlan; } ;
struct qlcnic_sriov {int num_allowed_vlans; } ;

/* Variables and functions */

void qlcnic_sriov_del_vlan_id(struct qlcnic_sriov *sriov,
			      struct qlcnic_vf_info *vf, u16 vlan_id)
{
	int i;

	for (i = 0; i < sriov->num_allowed_vlans; i++) {
		if (vf->sriov_vlans[i] == vlan_id) {
			vf->sriov_vlans[i] = 0;
			vf->num_vlan--;
			return;
		}
	}
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
          long vlan_id = 100;
          int _len_sriov0 = 1;
          struct qlcnic_sriov * sriov = (struct qlcnic_sriov *) malloc(_len_sriov0*sizeof(struct qlcnic_sriov));
          for(int _i0 = 0; _i0 < _len_sriov0; _i0++) {
            sriov[_i0].num_allowed_vlans = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vf0 = 1;
          struct qlcnic_vf_info * vf = (struct qlcnic_vf_info *) malloc(_len_vf0*sizeof(struct qlcnic_vf_info));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
              int _len_vf__i0__sriov_vlans0 = 1;
          vf[_i0].sriov_vlans = (long *) malloc(_len_vf__i0__sriov_vlans0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vf__i0__sriov_vlans0; _j0++) {
            vf[_i0].sriov_vlans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vf[_i0].num_vlan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qlcnic_sriov_del_vlan_id(sriov,vf,vlan_id);
          free(sriov);
          for(int _aux = 0; _aux < _len_vf0; _aux++) {
          free(vf[_aux].sriov_vlans);
          }
          free(vf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
