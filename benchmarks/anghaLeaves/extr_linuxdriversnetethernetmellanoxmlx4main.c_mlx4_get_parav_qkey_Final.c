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
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ base_tunnel_sqpn; scalar_t__ base_proxy_sqpn; } ;
struct mlx4_dev {TYPE_1__ phys_caps; } ;

/* Variables and functions */
 int EINVAL ; 
 int MLX4_MFUNC_MAX ; 
 scalar_t__ MLX4_RESERVED_QKEY_BASE ; 

int mlx4_get_parav_qkey(struct mlx4_dev *dev, u32 qpn, u32 *qkey)
{
	u32 qk = MLX4_RESERVED_QKEY_BASE;

	if (qpn >= dev->phys_caps.base_tunnel_sqpn + 8 * MLX4_MFUNC_MAX ||
	    qpn < dev->phys_caps.base_proxy_sqpn)
		return -EINVAL;

	if (qpn >= dev->phys_caps.base_tunnel_sqpn)
		/* tunnel qp */
		qk += qpn - dev->phys_caps.base_tunnel_sqpn;
	else
		qk += qpn - dev->phys_caps.base_proxy_sqpn;
	*qkey = qk;
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
          long qpn = 100;
          int _len_dev0 = 1;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phys_caps.base_tunnel_sqpn = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phys_caps.base_proxy_sqpn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qkey0 = 1;
          long * qkey = (long *) malloc(_len_qkey0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_qkey0; _i0++) {
            qkey[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_get_parav_qkey(dev,qpn,qkey);
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
