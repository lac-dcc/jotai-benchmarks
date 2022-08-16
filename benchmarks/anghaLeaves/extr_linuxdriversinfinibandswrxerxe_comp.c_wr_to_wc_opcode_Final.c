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
typedef  enum ib_wr_opcode { ____Placeholder_ib_wr_opcode } ib_wr_opcode ;
typedef  enum ib_wc_opcode { ____Placeholder_ib_wc_opcode } ib_wc_opcode ;

/* Variables and functions */
 int IB_WC_COMP_SWAP ; 
 int IB_WC_FETCH_ADD ; 
 int IB_WC_LOCAL_INV ; 
 int IB_WC_LSO ; 
 int IB_WC_RDMA_READ ; 
 int IB_WC_RDMA_WRITE ; 
 int IB_WC_REG_MR ; 
 int IB_WC_SEND ; 
#define  IB_WR_ATOMIC_CMP_AND_SWP 139 
#define  IB_WR_ATOMIC_FETCH_AND_ADD 138 
#define  IB_WR_LOCAL_INV 137 
#define  IB_WR_LSO 136 
#define  IB_WR_RDMA_READ 135 
#define  IB_WR_RDMA_READ_WITH_INV 134 
#define  IB_WR_RDMA_WRITE 133 
#define  IB_WR_RDMA_WRITE_WITH_IMM 132 
#define  IB_WR_REG_MR 131 
#define  IB_WR_SEND 130 
#define  IB_WR_SEND_WITH_IMM 129 
#define  IB_WR_SEND_WITH_INV 128 

__attribute__((used)) static enum ib_wc_opcode wr_to_wc_opcode(enum ib_wr_opcode opcode)
{
	switch (opcode) {
	case IB_WR_RDMA_WRITE:			return IB_WC_RDMA_WRITE;
	case IB_WR_RDMA_WRITE_WITH_IMM:		return IB_WC_RDMA_WRITE;
	case IB_WR_SEND:			return IB_WC_SEND;
	case IB_WR_SEND_WITH_IMM:		return IB_WC_SEND;
	case IB_WR_RDMA_READ:			return IB_WC_RDMA_READ;
	case IB_WR_ATOMIC_CMP_AND_SWP:		return IB_WC_COMP_SWAP;
	case IB_WR_ATOMIC_FETCH_AND_ADD:	return IB_WC_FETCH_ADD;
	case IB_WR_LSO:				return IB_WC_LSO;
	case IB_WR_SEND_WITH_INV:		return IB_WC_SEND;
	case IB_WR_RDMA_READ_WITH_INV:		return IB_WC_RDMA_READ;
	case IB_WR_LOCAL_INV:			return IB_WC_LOCAL_INV;
	case IB_WR_REG_MR:			return IB_WC_REG_MR;

	default:
		return 0xff;
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
          enum ib_wr_opcode opcode = 0;
          enum ib_wc_opcode benchRet = wr_to_wc_opcode(opcode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
