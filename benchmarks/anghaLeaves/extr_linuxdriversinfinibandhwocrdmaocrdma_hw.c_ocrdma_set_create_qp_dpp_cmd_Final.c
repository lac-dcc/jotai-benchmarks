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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u16 ;
struct ocrdma_qp {int dpp_enabled; } ;
struct ocrdma_pd {int /*<<< orphan*/  num_dpp_qp; } ;
struct ocrdma_create_qp_req {int dpp_credits_cqid; int /*<<< orphan*/  max_sge_recv_flags; } ;

/* Variables and functions */
 int OCRDMA_CREATE_QP_REQ_DPP_CREDIT_LIMIT ; 
 int OCRDMA_CREATE_QP_REQ_DPP_CREDIT_SHIFT ; 
 int /*<<< orphan*/  OCRDMA_CREATE_QP_REQ_ENABLE_DPP_MASK ; 

__attribute__((used)) static void ocrdma_set_create_qp_dpp_cmd(struct ocrdma_create_qp_req *cmd,
					 struct ocrdma_pd *pd,
					 struct ocrdma_qp *qp,
					 u8 enable_dpp_cq, u16 dpp_cq_id)
{
	pd->num_dpp_qp--;
	qp->dpp_enabled = true;
	cmd->max_sge_recv_flags |= OCRDMA_CREATE_QP_REQ_ENABLE_DPP_MASK;
	if (!enable_dpp_cq)
		return;
	cmd->max_sge_recv_flags |= OCRDMA_CREATE_QP_REQ_ENABLE_DPP_MASK;
	cmd->dpp_credits_cqid = dpp_cq_id;
	cmd->dpp_credits_cqid |= OCRDMA_CREATE_QP_REQ_DPP_CREDIT_LIMIT <<
					OCRDMA_CREATE_QP_REQ_DPP_CREDIT_SHIFT;
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
          int enable_dpp_cq = 100;
          int dpp_cq_id = 100;
          int _len_cmd0 = 1;
          struct ocrdma_create_qp_req * cmd = (struct ocrdma_create_qp_req *) malloc(_len_cmd0*sizeof(struct ocrdma_create_qp_req));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].dpp_credits_cqid = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].max_sge_recv_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pd0 = 1;
          struct ocrdma_pd * pd = (struct ocrdma_pd *) malloc(_len_pd0*sizeof(struct ocrdma_pd));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
            pd[_i0].num_dpp_qp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp0 = 1;
          struct ocrdma_qp * qp = (struct ocrdma_qp *) malloc(_len_qp0*sizeof(struct ocrdma_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].dpp_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocrdma_set_create_qp_dpp_cmd(cmd,pd,qp,enable_dpp_cq,dpp_cq_id);
          free(cmd);
          free(pd);
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
