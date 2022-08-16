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
typedef  int /*<<< orphan*/  u32 ;
struct ocrdma_qp {int cap_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  OCRDMA_CREATE_QP_REQ_BIND_MEMWIN_MASK ; 
 int /*<<< orphan*/  OCRDMA_CREATE_QP_REQ_FMR_EN_MASK ; 
 int /*<<< orphan*/  OCRDMA_CREATE_QP_REQ_INB_RDEN_MASK ; 
 int /*<<< orphan*/  OCRDMA_CREATE_QP_REQ_INB_WREN_MASK ; 
 int /*<<< orphan*/  OCRDMA_CREATE_QP_REQ_ZERO_LKEYEN_MASK ; 
 int OCRDMA_QP_FAST_REG ; 
 int OCRDMA_QP_INB_RD ; 
 int OCRDMA_QP_INB_WR ; 
 int OCRDMA_QP_LKEY0 ; 
 int OCRDMA_QP_MW_BIND ; 

__attribute__((used)) static u32 ocrdma_set_create_qp_mbx_access_flags(struct ocrdma_qp *qp)
{
	u32 flags = 0;
	if (qp->cap_flags & OCRDMA_QP_INB_RD)
		flags |= OCRDMA_CREATE_QP_REQ_INB_RDEN_MASK;
	if (qp->cap_flags & OCRDMA_QP_INB_WR)
		flags |= OCRDMA_CREATE_QP_REQ_INB_WREN_MASK;
	if (qp->cap_flags & OCRDMA_QP_MW_BIND)
		flags |= OCRDMA_CREATE_QP_REQ_BIND_MEMWIN_MASK;
	if (qp->cap_flags & OCRDMA_QP_LKEY0)
		flags |= OCRDMA_CREATE_QP_REQ_ZERO_LKEYEN_MASK;
	if (qp->cap_flags & OCRDMA_QP_FAST_REG)
		flags |= OCRDMA_CREATE_QP_REQ_FMR_EN_MASK;
	return flags;
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
          int _len_qp0 = 1;
          struct ocrdma_qp * qp = (struct ocrdma_qp *) malloc(_len_qp0*sizeof(struct ocrdma_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].cap_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocrdma_set_create_qp_mbx_access_flags(qp);
          printf("%d\n", benchRet); 
          free(qp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_qp0 = 100;
          struct ocrdma_qp * qp = (struct ocrdma_qp *) malloc(_len_qp0*sizeof(struct ocrdma_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].cap_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocrdma_set_create_qp_mbx_access_flags(qp);
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
