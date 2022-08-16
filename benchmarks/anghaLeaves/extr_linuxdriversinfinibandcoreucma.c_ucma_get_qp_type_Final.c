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
struct rdma_ucm_create_id {int ps; int qp_type; } ;
typedef  enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;

/* Variables and functions */
 int EINVAL ; 
 int IB_QPT_RC ; 
 int IB_QPT_UD ; 
#define  RDMA_PS_IB 131 
#define  RDMA_PS_IPOIB 130 
#define  RDMA_PS_TCP 129 
#define  RDMA_PS_UDP 128 

__attribute__((used)) static int ucma_get_qp_type(struct rdma_ucm_create_id *cmd, enum ib_qp_type *qp_type)
{
	switch (cmd->ps) {
	case RDMA_PS_TCP:
		*qp_type = IB_QPT_RC;
		return 0;
	case RDMA_PS_UDP:
	case RDMA_PS_IPOIB:
		*qp_type = IB_QPT_UD;
		return 0;
	case RDMA_PS_IB:
		*qp_type = cmd->qp_type;
		return 0;
	default:
		return -EINVAL;
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
          int _len_cmd0 = 1;
          struct rdma_ucm_create_id * cmd = (struct rdma_ucm_create_id *) malloc(_len_cmd0*sizeof(struct rdma_ucm_create_id));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].ps = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].qp_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp_type0 = 1;
          enum ib_qp_type * qp_type = (enum ib_qp_type *) malloc(_len_qp_type0*sizeof(enum ib_qp_type));
          for(int _i0 = 0; _i0 < _len_qp_type0; _i0++) {
            qp_type[_i0] = 0;
          }
          int benchRet = ucma_get_qp_type(cmd,qp_type);
          printf("%d\n", benchRet); 
          free(cmd);
          free(qp_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
