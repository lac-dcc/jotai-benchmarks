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
struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_esw_flow_attr {struct mlx5_eswitch_rep** out_rep; struct mlx5_eswitch_rep* in_rep; } ;

/* Variables and functions */

__attribute__((used)) static struct mlx5_eswitch_rep *
esw_vlan_action_get_vport(struct mlx5_esw_flow_attr *attr, bool push, bool pop)
{
	struct mlx5_eswitch_rep *in_rep, *out_rep, *vport = NULL;

	in_rep  = attr->in_rep;
	out_rep = attr->out_rep[0];

	if (push)
		vport = in_rep;
	else if (pop)
		vport = out_rep;
	else
		vport = in_rep;

	return vport;
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
          int _len_attr0 = 1;
          struct mlx5_esw_flow_attr * attr = (struct mlx5_esw_flow_attr *) malloc(_len_attr0*sizeof(struct mlx5_esw_flow_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              int _len_attr__i0__out_rep0 = 1;
          attr[_i0].out_rep = (struct mlx5_eswitch_rep **) malloc(_len_attr__i0__out_rep0*sizeof(struct mlx5_eswitch_rep *));
          for(int _j0 = 0; _j0 < _len_attr__i0__out_rep0; _j0++) {
            int _len_attr__i0__out_rep1 = 1;
            attr[_i0].out_rep[_j0] = (struct mlx5_eswitch_rep *) malloc(_len_attr__i0__out_rep1*sizeof(struct mlx5_eswitch_rep));
            for(int _j1 = 0; _j1 < _len_attr__i0__out_rep1; _j1++) {
              attr[_i0].out_rep[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_attr__i0__in_rep0 = 1;
          attr[_i0].in_rep = (struct mlx5_eswitch_rep *) malloc(_len_attr__i0__in_rep0*sizeof(struct mlx5_eswitch_rep));
          for(int _j0 = 0; _j0 < _len_attr__i0__in_rep0; _j0++) {
            attr[_i0].in_rep->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx5_eswitch_rep * benchRet = esw_vlan_action_get_vport(attr,push,pop);
          printf("%d\n", (*benchRet).dummy);
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
