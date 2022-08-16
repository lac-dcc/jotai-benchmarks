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
struct mlx5_eswitch_rep {scalar_t__ vport; scalar_t__ vlan; scalar_t__ vlan_refcount; } ;
struct mlx5_esw_flow_attr {scalar_t__* vlan_vid; struct mlx5_eswitch_rep** out_rep; struct mlx5_eswitch_rep* in_rep; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
 scalar_t__ FDB_UPLINK_VPORT ; 

__attribute__((used)) static int esw_add_vlan_action_check(struct mlx5_esw_flow_attr *attr,
				     bool push, bool pop, bool fwd)
{
	struct mlx5_eswitch_rep *in_rep, *out_rep;

	if ((push || pop) && !fwd)
		goto out_notsupp;

	in_rep  = attr->in_rep;
	out_rep = attr->out_rep[0];

	if (push && in_rep->vport == FDB_UPLINK_VPORT)
		goto out_notsupp;

	if (pop && out_rep->vport == FDB_UPLINK_VPORT)
		goto out_notsupp;

	/* vport has vlan push configured, can't offload VF --> wire rules w.o it */
	if (!push && !pop && fwd)
		if (in_rep->vlan && out_rep->vport == FDB_UPLINK_VPORT)
			goto out_notsupp;

	/* protects against (1) setting rules with different vlans to push and
	 * (2) setting rules w.o vlans (attr->vlan = 0) && w. vlans to push (!= 0)
	 */
	if (push && in_rep->vlan_refcount && (in_rep->vlan != attr->vlan_vid[0]))
		goto out_notsupp;

	return 0;

out_notsupp:
	return -EOPNOTSUPP;
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
          int push = 100;
          int pop = 100;
          int fwd = 100;
          int _len_attr0 = 1;
          struct mlx5_esw_flow_attr * attr = (struct mlx5_esw_flow_attr *) malloc(_len_attr0*sizeof(struct mlx5_esw_flow_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              int _len_attr__i0__vlan_vid0 = 1;
          attr[_i0].vlan_vid = (long *) malloc(_len_attr__i0__vlan_vid0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_attr__i0__vlan_vid0; _j0++) {
            attr[_i0].vlan_vid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr__i0__out_rep0 = 1;
          attr[_i0].out_rep = (struct mlx5_eswitch_rep **) malloc(_len_attr__i0__out_rep0*sizeof(struct mlx5_eswitch_rep *));
          for(int _j0 = 0; _j0 < _len_attr__i0__out_rep0; _j0++) {
            int _len_attr__i0__out_rep1 = 1;
            attr[_i0].out_rep[_j0] = (struct mlx5_eswitch_rep *) malloc(_len_attr__i0__out_rep1*sizeof(struct mlx5_eswitch_rep));
            for(int _j1 = 0; _j1 < _len_attr__i0__out_rep1; _j1++) {
              attr[_i0].out_rep[_j0]->vport = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].out_rep[_j0]->vlan = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].out_rep[_j0]->vlan_refcount = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_attr__i0__in_rep0 = 1;
          attr[_i0].in_rep = (struct mlx5_eswitch_rep *) malloc(_len_attr__i0__in_rep0*sizeof(struct mlx5_eswitch_rep));
          for(int _j0 = 0; _j0 < _len_attr__i0__in_rep0; _j0++) {
            attr[_i0].in_rep->vport = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].in_rep->vlan = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].in_rep->vlan_refcount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = esw_add_vlan_action_check(attr,push,pop,fwd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_attr0; _aux++) {
          free(attr[_aux].vlan_vid);
          }
          for(int _aux = 0; _aux < _len_attr0; _aux++) {
          free(*(attr[_aux].out_rep));
        free(attr[_aux].out_rep);
          }
          for(int _aux = 0; _aux < _len_attr0; _aux++) {
          free(attr[_aux].in_rep);
          }
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
