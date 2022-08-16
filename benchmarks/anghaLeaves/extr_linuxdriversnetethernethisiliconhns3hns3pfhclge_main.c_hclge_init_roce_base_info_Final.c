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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ num_vectors; int /*<<< orphan*/  roce_io_base; int /*<<< orphan*/  netdev; int /*<<< orphan*/  base_vector; } ;
struct TYPE_5__ {int /*<<< orphan*/  netdev; } ;
struct hnae3_handle {int /*<<< orphan*/  numa_node_mask; int /*<<< orphan*/  ae_algo; int /*<<< orphan*/  pdev; TYPE_2__ rinfo; TYPE_1__ kinfo; } ;
struct hclge_vport {TYPE_4__* back; struct hnae3_handle roce; struct hnae3_handle nic; } ;
struct TYPE_7__ {int /*<<< orphan*/  io_base; } ;
struct TYPE_8__ {scalar_t__ num_roce_msi; scalar_t__ num_msi_left; TYPE_3__ hw; int /*<<< orphan*/  roce_base_vector; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int hclge_init_roce_base_info(struct hclge_vport *vport)
{
	struct hnae3_handle *roce = &vport->roce;
	struct hnae3_handle *nic = &vport->nic;

	roce->rinfo.num_vectors = vport->back->num_roce_msi;

	if (vport->back->num_msi_left < vport->roce.rinfo.num_vectors ||
	    vport->back->num_msi_left == 0)
		return -EINVAL;

	roce->rinfo.base_vector = vport->back->roce_base_vector;

	roce->rinfo.netdev = nic->kinfo.netdev;
	roce->rinfo.roce_io_base = vport->back->hw.io_base;

	roce->pdev = nic->pdev;
	roce->ae_algo = nic->ae_algo;
	roce->numa_node_mask = nic->numa_node_mask;

	return 0;
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
          int _len_vport0 = 1;
          struct hclge_vport * vport = (struct hclge_vport *) malloc(_len_vport0*sizeof(struct hclge_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
              int _len_vport__i0__back0 = 1;
          vport[_i0].back = (struct TYPE_8__ *) malloc(_len_vport__i0__back0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_vport__i0__back0; _j0++) {
            vport[_i0].back->num_roce_msi = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].back->num_msi_left = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].back->hw.io_base = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].back->roce_base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vport[_i0].roce.numa_node_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].roce.ae_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].roce.pdev = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].roce.rinfo.num_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].roce.rinfo.roce_io_base = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].roce.rinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].roce.rinfo.base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].roce.kinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.numa_node_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.ae_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.pdev = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.rinfo.num_vectors = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.rinfo.roce_io_base = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.rinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.rinfo.base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        vport[_i0].nic.kinfo.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_init_roce_base_info(vport);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vport0; _aux++) {
          free(vport[_aux].back);
          }
          free(vport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
