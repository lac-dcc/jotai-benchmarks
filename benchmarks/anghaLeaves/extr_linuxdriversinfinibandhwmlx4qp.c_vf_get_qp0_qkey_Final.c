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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_3__ {int num_ports; TYPE_2__* spec_qps; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {int qp0_proxy; int qp0_tunnel; int /*<<< orphan*/  qp0_qkey; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int vf_get_qp0_qkey(struct mlx4_dev *dev, int qpn, u32 *qkey)
{
	int i;
	for (i = 0; i < dev->caps.num_ports; i++) {
		if (qpn == dev->caps.spec_qps[i].qp0_proxy ||
		    qpn == dev->caps.spec_qps[i].qp0_tunnel) {
			*qkey = dev->caps.spec_qps[i].qp0_qkey;
			return 0;
		}
	}
	return -EINVAL;
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
          int qpn = 100;
          int _len_dev0 = 1;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].caps.num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__caps_spec_qps0 = 1;
          dev[_i0].caps.spec_qps = (struct TYPE_4__ *) malloc(_len_dev__i0__caps_spec_qps0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_spec_qps0; _j0++) {
            dev[_i0].caps.spec_qps->qp0_proxy = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].caps.spec_qps->qp0_tunnel = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].caps.spec_qps->qp0_qkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qkey0 = 1;
          int * qkey = (int *) malloc(_len_qkey0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_qkey0; _i0++) {
            qkey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vf_get_qp0_qkey(dev,qpn,qkey);
          printf("%d\n", benchRet); 
          free(dev);
          free(qkey);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}