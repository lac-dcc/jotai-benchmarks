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
       3            empty\n\
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
typedef  int u32 ;
struct TYPE_2__ {int opcode; } ;
struct rxe_qp {TYPE_1__ req; } ;

/* Variables and functions */
 int EINVAL ; 
 int IB_OPCODE_RC_COMPARE_SWAP ; 
 int IB_OPCODE_RC_FETCH_ADD ; 
 int IB_OPCODE_RC_RDMA_READ_REQUEST ; 
 int IB_OPCODE_RC_RDMA_WRITE_FIRST ; 
 int IB_OPCODE_RC_RDMA_WRITE_LAST ; 
 int IB_OPCODE_RC_RDMA_WRITE_LAST_WITH_IMMEDIATE ; 
 int IB_OPCODE_RC_RDMA_WRITE_MIDDLE ; 
 int IB_OPCODE_RC_RDMA_WRITE_ONLY ; 
 int IB_OPCODE_RC_RDMA_WRITE_ONLY_WITH_IMMEDIATE ; 
 int IB_OPCODE_RC_SEND_FIRST ; 
 int IB_OPCODE_RC_SEND_LAST ; 
 int IB_OPCODE_RC_SEND_LAST_WITH_IMMEDIATE ; 
 int IB_OPCODE_RC_SEND_LAST_WITH_INVALIDATE ; 
 int IB_OPCODE_RC_SEND_MIDDLE ; 
 int IB_OPCODE_RC_SEND_ONLY ; 
 int IB_OPCODE_RC_SEND_ONLY_WITH_IMMEDIATE ; 
 int IB_OPCODE_RC_SEND_ONLY_WITH_INVALIDATE ; 
#define  IB_WR_ATOMIC_CMP_AND_SWP 137 
#define  IB_WR_ATOMIC_FETCH_AND_ADD 136 
#define  IB_WR_LOCAL_INV 135 
#define  IB_WR_RDMA_READ 134 
#define  IB_WR_RDMA_WRITE 133 
#define  IB_WR_RDMA_WRITE_WITH_IMM 132 
#define  IB_WR_REG_MR 131 
#define  IB_WR_SEND 130 
#define  IB_WR_SEND_WITH_IMM 129 
#define  IB_WR_SEND_WITH_INV 128 

__attribute__((used)) static int next_opcode_rc(struct rxe_qp *qp, u32 opcode, int fits)
{
	switch (opcode) {
	case IB_WR_RDMA_WRITE:
		if (qp->req.opcode == IB_OPCODE_RC_RDMA_WRITE_FIRST ||
		    qp->req.opcode == IB_OPCODE_RC_RDMA_WRITE_MIDDLE)
			return fits ?
				IB_OPCODE_RC_RDMA_WRITE_LAST :
				IB_OPCODE_RC_RDMA_WRITE_MIDDLE;
		else
			return fits ?
				IB_OPCODE_RC_RDMA_WRITE_ONLY :
				IB_OPCODE_RC_RDMA_WRITE_FIRST;

	case IB_WR_RDMA_WRITE_WITH_IMM:
		if (qp->req.opcode == IB_OPCODE_RC_RDMA_WRITE_FIRST ||
		    qp->req.opcode == IB_OPCODE_RC_RDMA_WRITE_MIDDLE)
			return fits ?
				IB_OPCODE_RC_RDMA_WRITE_LAST_WITH_IMMEDIATE :
				IB_OPCODE_RC_RDMA_WRITE_MIDDLE;
		else
			return fits ?
				IB_OPCODE_RC_RDMA_WRITE_ONLY_WITH_IMMEDIATE :
				IB_OPCODE_RC_RDMA_WRITE_FIRST;

	case IB_WR_SEND:
		if (qp->req.opcode == IB_OPCODE_RC_SEND_FIRST ||
		    qp->req.opcode == IB_OPCODE_RC_SEND_MIDDLE)
			return fits ?
				IB_OPCODE_RC_SEND_LAST :
				IB_OPCODE_RC_SEND_MIDDLE;
		else
			return fits ?
				IB_OPCODE_RC_SEND_ONLY :
				IB_OPCODE_RC_SEND_FIRST;

	case IB_WR_SEND_WITH_IMM:
		if (qp->req.opcode == IB_OPCODE_RC_SEND_FIRST ||
		    qp->req.opcode == IB_OPCODE_RC_SEND_MIDDLE)
			return fits ?
				IB_OPCODE_RC_SEND_LAST_WITH_IMMEDIATE :
				IB_OPCODE_RC_SEND_MIDDLE;
		else
			return fits ?
				IB_OPCODE_RC_SEND_ONLY_WITH_IMMEDIATE :
				IB_OPCODE_RC_SEND_FIRST;

	case IB_WR_RDMA_READ:
		return IB_OPCODE_RC_RDMA_READ_REQUEST;

	case IB_WR_ATOMIC_CMP_AND_SWP:
		return IB_OPCODE_RC_COMPARE_SWAP;

	case IB_WR_ATOMIC_FETCH_AND_ADD:
		return IB_OPCODE_RC_FETCH_ADD;

	case IB_WR_SEND_WITH_INV:
		if (qp->req.opcode == IB_OPCODE_RC_SEND_FIRST ||
		    qp->req.opcode == IB_OPCODE_RC_SEND_MIDDLE)
			return fits ? IB_OPCODE_RC_SEND_LAST_WITH_INVALIDATE :
				IB_OPCODE_RC_SEND_MIDDLE;
		else
			return fits ? IB_OPCODE_RC_SEND_ONLY_WITH_INVALIDATE :
				IB_OPCODE_RC_SEND_FIRST;
	case IB_WR_REG_MR:
	case IB_WR_LOCAL_INV:
		return opcode;
	}

	return -EINVAL;
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int opcode = 100;
        
          int fits = 100;
        
          int _len_qp0 = 1;
          struct rxe_qp * qp = (struct rxe_qp *) malloc(_len_qp0*sizeof(struct rxe_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
              qp[_i0].req.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = next_opcode_rc(qp,opcode,fits);
          printf("%d\n", benchRet); 
          free(qp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int opcode = 255;
        
          int fits = 255;
        
          int _len_qp0 = 65025;
          struct rxe_qp * qp = (struct rxe_qp *) malloc(_len_qp0*sizeof(struct rxe_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
              qp[_i0].req.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = next_opcode_rc(qp,opcode,fits);
          printf("%d\n", benchRet); 
          free(qp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int opcode = 10;
        
          int fits = 10;
        
          int _len_qp0 = 100;
          struct rxe_qp * qp = (struct rxe_qp *) malloc(_len_qp0*sizeof(struct rxe_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
              qp[_i0].req.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = next_opcode_rc(qp,opcode,fits);
          printf("%d\n", benchRet); 
          free(qp);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int fits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_qp0 = 1;
          struct rxe_qp * qp = (struct rxe_qp *) malloc(_len_qp0*sizeof(struct rxe_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
              qp[_i0].req.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = next_opcode_rc(qp,opcode,fits);
          printf("%d\n", benchRet); 
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
