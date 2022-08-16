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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
 int IB_WC_COMP_SWAP ; 
 int IB_WC_FETCH_ADD ; 
 int IB_WC_LOCAL_INV ; 
 int IB_WC_MASKED_COMP_SWAP ; 
 int IB_WC_MASKED_FETCH_ADD ; 
 int IB_WC_RDMA_READ ; 
 int IB_WC_RDMA_WRITE ; 
 int IB_WC_RECV ; 
 int IB_WC_RECV_RDMA_WITH_IMM ; 
 int IB_WC_REG_MR ; 
 int IB_WC_SEND ; 
#define  PVRDMA_WC_COMP_SWAP 138 
#define  PVRDMA_WC_FAST_REG_MR 137 
#define  PVRDMA_WC_FETCH_ADD 136 
#define  PVRDMA_WC_LOCAL_INV 135 
#define  PVRDMA_WC_MASKED_COMP_SWAP 134 
#define  PVRDMA_WC_MASKED_FETCH_ADD 133 
#define  PVRDMA_WC_RDMA_READ 132 
#define  PVRDMA_WC_RDMA_WRITE 131 
#define  PVRDMA_WC_RECV 130 
#define  PVRDMA_WC_RECV_RDMA_WITH_IMM 129 
#define  PVRDMA_WC_SEND 128 

__attribute__((used)) static inline int pvrdma_wc_opcode_to_ib(unsigned int opcode)
{
	switch (opcode) {
	case PVRDMA_WC_SEND:
		return IB_WC_SEND;
	case PVRDMA_WC_RDMA_WRITE:
		return IB_WC_RDMA_WRITE;
	case PVRDMA_WC_RDMA_READ:
		return IB_WC_RDMA_READ;
	case PVRDMA_WC_COMP_SWAP:
		return IB_WC_COMP_SWAP;
	case PVRDMA_WC_FETCH_ADD:
		return IB_WC_FETCH_ADD;
	case PVRDMA_WC_LOCAL_INV:
		return IB_WC_LOCAL_INV;
	case PVRDMA_WC_FAST_REG_MR:
		return IB_WC_REG_MR;
	case PVRDMA_WC_MASKED_COMP_SWAP:
		return IB_WC_MASKED_COMP_SWAP;
	case PVRDMA_WC_MASKED_FETCH_ADD:
		return IB_WC_MASKED_FETCH_ADD;
	case PVRDMA_WC_RECV:
		return IB_WC_RECV;
	case PVRDMA_WC_RECV_RDMA_WITH_IMM:
		return IB_WC_RECV_RDMA_WITH_IMM;
	default:
		return IB_WC_SEND;
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
          unsigned int opcode = 100;
          int benchRet = pvrdma_wc_opcode_to_ib(opcode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int opcode = 255;
          int benchRet = pvrdma_wc_opcode_to_ib(opcode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int opcode = 10;
          int benchRet = pvrdma_wc_opcode_to_ib(opcode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
