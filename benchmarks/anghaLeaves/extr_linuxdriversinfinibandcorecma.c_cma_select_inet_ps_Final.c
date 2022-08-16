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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int ps; } ;
struct rdma_id_private {TYPE_1__ id; } ;
typedef  enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;

/* Variables and functions */
#define  RDMA_PS_IB 131 
#define  RDMA_PS_IPOIB 130 
#define  RDMA_PS_TCP 129 
#define  RDMA_PS_UDP 128 

__attribute__((used)) static enum rdma_ucm_port_space
cma_select_inet_ps(struct rdma_id_private *id_priv)
{
	switch (id_priv->id.ps) {
	case RDMA_PS_TCP:
	case RDMA_PS_UDP:
	case RDMA_PS_IPOIB:
	case RDMA_PS_IB:
		return id_priv->id.ps;
	default:

		return 0;
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
          int _len_id_priv0 = 1;
          struct rdma_id_private * id_priv = (struct rdma_id_private *) malloc(_len_id_priv0*sizeof(struct rdma_id_private));
          for(int _i0 = 0; _i0 < _len_id_priv0; _i0++) {
            id_priv[_i0].id.ps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum rdma_ucm_port_space benchRet = cma_select_inet_ps(id_priv);
          free(id_priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_id_priv0 = 100;
          struct rdma_id_private * id_priv = (struct rdma_id_private *) malloc(_len_id_priv0*sizeof(struct rdma_id_private));
          for(int _i0 = 0; _i0 < _len_id_priv0; _i0++) {
            id_priv[_i0].id.ps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum rdma_ucm_port_space benchRet = cma_select_inet_ps(id_priv);
          free(id_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
