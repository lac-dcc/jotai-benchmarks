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
typedef  enum ocrdma_qp_state { ____Placeholder_ocrdma_qp_state } ocrdma_qp_state ;
typedef  enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;

/* Variables and functions */
#define  IB_QPS_ERR 134 
#define  IB_QPS_INIT 133 
#define  IB_QPS_RESET 132 
#define  IB_QPS_RTR 131 
#define  IB_QPS_RTS 130 
#define  IB_QPS_SQD 129 
#define  IB_QPS_SQE 128 
 int OCRDMA_QPS_ERR ; 
 int OCRDMA_QPS_INIT ; 
 int OCRDMA_QPS_RST ; 
 int OCRDMA_QPS_RTR ; 
 int OCRDMA_QPS_RTS ; 
 int OCRDMA_QPS_SQD ; 
 int OCRDMA_QPS_SQE ; 

__attribute__((used)) static enum ocrdma_qp_state get_ocrdma_qp_state(enum ib_qp_state qps)
{
	switch (qps) {
	case IB_QPS_RESET:
		return OCRDMA_QPS_RST;
	case IB_QPS_INIT:
		return OCRDMA_QPS_INIT;
	case IB_QPS_RTR:
		return OCRDMA_QPS_RTR;
	case IB_QPS_RTS:
		return OCRDMA_QPS_RTS;
	case IB_QPS_SQD:
		return OCRDMA_QPS_SQD;
	case IB_QPS_SQE:
		return OCRDMA_QPS_SQE;
	case IB_QPS_ERR:
		return OCRDMA_QPS_ERR;
	}
	return OCRDMA_QPS_ERR;
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
          enum ib_qp_state qps = 0;
          enum ocrdma_qp_state benchRet = get_ocrdma_qp_state(qps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
