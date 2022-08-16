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
typedef  enum pvrdma_wr_opcode { ____Placeholder_pvrdma_wr_opcode } pvrdma_wr_opcode ;
typedef  enum ib_wr_opcode { ____Placeholder_ib_wr_opcode } ib_wr_opcode ;

/* Variables and functions */
#define  IB_WR_ATOMIC_CMP_AND_SWP 142 
#define  IB_WR_ATOMIC_FETCH_AND_ADD 141 
#define  IB_WR_LOCAL_INV 140 
#define  IB_WR_LSO 139 
#define  IB_WR_MASKED_ATOMIC_CMP_AND_SWP 138 
#define  IB_WR_MASKED_ATOMIC_FETCH_AND_ADD 137 
#define  IB_WR_RDMA_READ 136 
#define  IB_WR_RDMA_READ_WITH_INV 135 
#define  IB_WR_RDMA_WRITE 134 
#define  IB_WR_RDMA_WRITE_WITH_IMM 133 
#define  IB_WR_REG_MR 132 
#define  IB_WR_REG_SIG_MR 131 
#define  IB_WR_SEND 130 
#define  IB_WR_SEND_WITH_IMM 129 
#define  IB_WR_SEND_WITH_INV 128 
 int PVRDMA_WR_ATOMIC_CMP_AND_SWP ; 
 int PVRDMA_WR_ATOMIC_FETCH_AND_ADD ; 
 int PVRDMA_WR_ERROR ; 
 int PVRDMA_WR_FAST_REG_MR ; 
 int PVRDMA_WR_LOCAL_INV ; 
 int PVRDMA_WR_LSO ; 
 int PVRDMA_WR_MASKED_ATOMIC_CMP_AND_SWP ; 
 int PVRDMA_WR_MASKED_ATOMIC_FETCH_AND_ADD ; 
 int PVRDMA_WR_RDMA_READ ; 
 int PVRDMA_WR_RDMA_READ_WITH_INV ; 
 int PVRDMA_WR_RDMA_WRITE ; 
 int PVRDMA_WR_RDMA_WRITE_WITH_IMM ; 
 int PVRDMA_WR_REG_SIG_MR ; 
 int PVRDMA_WR_SEND ; 
 int PVRDMA_WR_SEND_WITH_IMM ; 
 int PVRDMA_WR_SEND_WITH_INV ; 

__attribute__((used)) static inline enum pvrdma_wr_opcode ib_wr_opcode_to_pvrdma(enum ib_wr_opcode op)
{
	switch (op) {
	case IB_WR_RDMA_WRITE:
		return PVRDMA_WR_RDMA_WRITE;
	case IB_WR_RDMA_WRITE_WITH_IMM:
		return PVRDMA_WR_RDMA_WRITE_WITH_IMM;
	case IB_WR_SEND:
		return PVRDMA_WR_SEND;
	case IB_WR_SEND_WITH_IMM:
		return PVRDMA_WR_SEND_WITH_IMM;
	case IB_WR_RDMA_READ:
		return PVRDMA_WR_RDMA_READ;
	case IB_WR_ATOMIC_CMP_AND_SWP:
		return PVRDMA_WR_ATOMIC_CMP_AND_SWP;
	case IB_WR_ATOMIC_FETCH_AND_ADD:
		return PVRDMA_WR_ATOMIC_FETCH_AND_ADD;
	case IB_WR_LSO:
		return PVRDMA_WR_LSO;
	case IB_WR_SEND_WITH_INV:
		return PVRDMA_WR_SEND_WITH_INV;
	case IB_WR_RDMA_READ_WITH_INV:
		return PVRDMA_WR_RDMA_READ_WITH_INV;
	case IB_WR_LOCAL_INV:
		return PVRDMA_WR_LOCAL_INV;
	case IB_WR_REG_MR:
		return PVRDMA_WR_FAST_REG_MR;
	case IB_WR_MASKED_ATOMIC_CMP_AND_SWP:
		return PVRDMA_WR_MASKED_ATOMIC_CMP_AND_SWP;
	case IB_WR_MASKED_ATOMIC_FETCH_AND_ADD:
		return PVRDMA_WR_MASKED_ATOMIC_FETCH_AND_ADD;
	case IB_WR_REG_SIG_MR:
		return PVRDMA_WR_REG_SIG_MR;
	default:
		return PVRDMA_WR_ERROR;
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
          enum ib_wr_opcode op = 0;
          enum pvrdma_wr_opcode benchRet = ib_wr_opcode_to_pvrdma(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
