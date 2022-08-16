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
struct tc_mqprio_qopt {int num_tc; int* prio_tc_map; scalar_t__ hw; unsigned int* offset; unsigned int* count; } ;
struct net_device {unsigned int real_num_tx_queues; TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {scalar_t__ ndo_setup_tc; } ;

/* Variables and functions */
 int EINVAL ; 
 int TC_BITMASK ; 
 int TC_MAX_QUEUE ; 
 scalar_t__ TC_MQPRIO_HW_OFFLOAD_MAX ; 

__attribute__((used)) static int mqprio_parse_opt(struct net_device *dev, struct tc_mqprio_qopt *qopt)
{
	int i, j;

	/* Verify num_tc is not out of max range */
	if (qopt->num_tc > TC_MAX_QUEUE)
		return -EINVAL;

	/* Verify priority mapping uses valid tcs */
	for (i = 0; i < TC_BITMASK + 1; i++) {
		if (qopt->prio_tc_map[i] >= qopt->num_tc)
			return -EINVAL;
	}

	/* Limit qopt->hw to maximum supported offload value.  Drivers have
	 * the option of overriding this later if they don't support the a
	 * given offload type.
	 */
	if (qopt->hw > TC_MQPRIO_HW_OFFLOAD_MAX)
		qopt->hw = TC_MQPRIO_HW_OFFLOAD_MAX;

	/* If hardware offload is requested we will leave it to the device
	 * to either populate the queue counts itself or to validate the
	 * provided queue counts.  If ndo_setup_tc is not present then
	 * hardware doesn't support offload and we should return an error.
	 */
	if (qopt->hw)
		return dev->netdev_ops->ndo_setup_tc ? 0 : -EINVAL;

	for (i = 0; i < qopt->num_tc; i++) {
		unsigned int last = qopt->offset[i] + qopt->count[i];

		/* Verify the queue count is in tx range being equal to the
		 * real_num_tx_queues indicates the last queue is in use.
		 */
		if (qopt->offset[i] >= dev->real_num_tx_queues ||
		    !qopt->count[i] ||
		    last > dev->real_num_tx_queues)
			return -EINVAL;

		/* Verify that the offset and counts do not overlap */
		for (j = i + 1; j < qopt->num_tc; j++) {
			if (last > qopt->offset[j])
				return -EINVAL;
		}
	}

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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].real_num_tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__netdev_ops0 = 1;
          dev[_i0].netdev_ops = (struct TYPE_2__ *) malloc(_len_dev__i0__netdev_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__netdev_ops0; _j0++) {
            dev[_i0].netdev_ops->ndo_setup_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qopt0 = 1;
          struct tc_mqprio_qopt * qopt = (struct tc_mqprio_qopt *) malloc(_len_qopt0*sizeof(struct tc_mqprio_qopt));
          for(int _i0 = 0; _i0 < _len_qopt0; _i0++) {
            qopt[_i0].num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qopt__i0__prio_tc_map0 = 1;
          qopt[_i0].prio_tc_map = (int *) malloc(_len_qopt__i0__prio_tc_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qopt__i0__prio_tc_map0; _j0++) {
            qopt[_i0].prio_tc_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qopt[_i0].hw = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qopt__i0__offset0 = 1;
          qopt[_i0].offset = (unsigned int *) malloc(_len_qopt__i0__offset0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_qopt__i0__offset0; _j0++) {
            qopt[_i0].offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qopt__i0__count0 = 1;
          qopt[_i0].count = (unsigned int *) malloc(_len_qopt__i0__count0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_qopt__i0__count0; _j0++) {
            qopt[_i0].count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mqprio_parse_opt(dev,qopt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].netdev_ops);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_qopt0; _aux++) {
          free(qopt[_aux].prio_tc_map);
          }
          for(int _aux = 0; _aux < _len_qopt0; _aux++) {
          free(qopt[_aux].offset);
          }
          for(int _aux = 0; _aux < _len_qopt0; _aux++) {
          free(qopt[_aux].count);
          }
          free(qopt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
