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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u8 ;
struct ib_device {int dummy; } ;
typedef  enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;

/* Variables and functions */
 int IB_LINK_LAYER_ETHERNET ; 

enum rdma_link_layer bnxt_re_get_link_layer(struct ib_device *ibdev,
					    u8 port_num)
{
	return IB_LINK_LAYER_ETHERNET;
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
          int port_num = 100;
          int _len_ibdev0 = 1;
          struct ib_device * ibdev = (struct ib_device *) malloc(_len_ibdev0*sizeof(struct ib_device));
          for(int _i0 = 0; _i0 < _len_ibdev0; _i0++) {
            ibdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum rdma_link_layer benchRet = bnxt_re_get_link_layer(ibdev,port_num);
          free(ibdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int port_num = 10;
          int _len_ibdev0 = 100;
          struct ib_device * ibdev = (struct ib_device *) malloc(_len_ibdev0*sizeof(struct ib_device));
          for(int _i0 = 0; _i0 < _len_ibdev0; _i0++) {
            ibdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum rdma_link_layer benchRet = bnxt_re_get_link_layer(ibdev,port_num);
          free(ibdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
