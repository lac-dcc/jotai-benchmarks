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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ v; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct mlxsw_pci_queue {scalar_t__ num; TYPE_2__ u; } ;
struct mlxsw_pci {scalar_t__ max_cqe_ver; scalar_t__ num_sdq_cqs; } ;

/* Variables and functions */
 scalar_t__ MLXSW_PCI_CQE_V1 ; 
 scalar_t__ MLXSW_PCI_CQE_V2 ; 

__attribute__((used)) static void mlxsw_pci_cq_pre_init(struct mlxsw_pci *mlxsw_pci,
				  struct mlxsw_pci_queue *q)
{
	q->u.cq.v = mlxsw_pci->max_cqe_ver;

	/* For SDQ it is pointless to use CQEv2, so use CQEv1 instead */
	if (q->u.cq.v == MLXSW_PCI_CQE_V2 &&
	    q->num < mlxsw_pci->num_sdq_cqs)
		q->u.cq.v = MLXSW_PCI_CQE_V1;
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
          int _len_mlxsw_pci0 = 1;
          struct mlxsw_pci * mlxsw_pci = (struct mlxsw_pci *) malloc(_len_mlxsw_pci0*sizeof(struct mlxsw_pci));
          for(int _i0 = 0; _i0 < _len_mlxsw_pci0; _i0++) {
            mlxsw_pci[_i0].max_cqe_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_pci[_i0].num_sdq_cqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 1;
          struct mlxsw_pci_queue * q = (struct mlxsw_pci_queue *) malloc(_len_q0*sizeof(struct mlxsw_pci_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].u.cq.v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_pci_cq_pre_init(mlxsw_pci,q);
          free(mlxsw_pci);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
