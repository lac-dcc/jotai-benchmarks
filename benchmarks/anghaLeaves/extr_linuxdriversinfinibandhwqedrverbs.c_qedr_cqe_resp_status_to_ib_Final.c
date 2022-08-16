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
typedef  int u8 ;

/* Variables and functions */
 int IB_WC_GENERAL_ERR ; 
 int IB_WC_LOC_ACCESS_ERR ; 
 int IB_WC_LOC_LEN_ERR ; 
 int IB_WC_LOC_PROT_ERR ; 
 int IB_WC_LOC_QP_OP_ERR ; 
 int IB_WC_MW_BIND_ERR ; 
 int IB_WC_REM_INV_RD_REQ_ERR ; 
 int IB_WC_SUCCESS ; 
#define  RDMA_CQE_RESP_STS_LOCAL_ACCESS_ERR 134 
#define  RDMA_CQE_RESP_STS_LOCAL_LENGTH_ERR 133 
#define  RDMA_CQE_RESP_STS_LOCAL_PROTECTION_ERR 132 
#define  RDMA_CQE_RESP_STS_LOCAL_QP_OPERATION_ERR 131 
#define  RDMA_CQE_RESP_STS_MEMORY_MGT_OPERATION_ERR 130 
#define  RDMA_CQE_RESP_STS_OK 129 
#define  RDMA_CQE_RESP_STS_REMOTE_INVALID_REQUEST_ERR 128 

__attribute__((used)) static inline int qedr_cqe_resp_status_to_ib(u8 status)
{
	switch (status) {
	case RDMA_CQE_RESP_STS_LOCAL_ACCESS_ERR:
		return IB_WC_LOC_ACCESS_ERR;
	case RDMA_CQE_RESP_STS_LOCAL_LENGTH_ERR:
		return IB_WC_LOC_LEN_ERR;
	case RDMA_CQE_RESP_STS_LOCAL_QP_OPERATION_ERR:
		return IB_WC_LOC_QP_OP_ERR;
	case RDMA_CQE_RESP_STS_LOCAL_PROTECTION_ERR:
		return IB_WC_LOC_PROT_ERR;
	case RDMA_CQE_RESP_STS_MEMORY_MGT_OPERATION_ERR:
		return IB_WC_MW_BIND_ERR;
	case RDMA_CQE_RESP_STS_REMOTE_INVALID_REQUEST_ERR:
		return IB_WC_REM_INV_RD_REQ_ERR;
	case RDMA_CQE_RESP_STS_OK:
		return IB_WC_SUCCESS;
	default:
		return IB_WC_GENERAL_ERR;
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
          int status = 100;
          int benchRet = qedr_cqe_resp_status_to_ib(status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          int benchRet = qedr_cqe_resp_status_to_ib(status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          int benchRet = qedr_cqe_resp_status_to_ib(status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
