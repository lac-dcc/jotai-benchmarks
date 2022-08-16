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
typedef  int /*<<< orphan*/  u8 ;
struct se_tmr_req {int response; } ;

/* Variables and functions */
 int /*<<< orphan*/  ISCSI_TMF_RSP_COMPLETE ; 
 int /*<<< orphan*/  ISCSI_TMF_RSP_NOT_SUPPORTED ; 
 int /*<<< orphan*/  ISCSI_TMF_RSP_NO_LUN ; 
 int /*<<< orphan*/  ISCSI_TMF_RSP_NO_TASK ; 
 int /*<<< orphan*/  ISCSI_TMF_RSP_REJECTED ; 
#define  TMR_FUNCTION_COMPLETE 132 
#define  TMR_FUNCTION_REJECTED 131 
#define  TMR_LUN_DOES_NOT_EXIST 130 
#define  TMR_TASK_DOES_NOT_EXIST 129 
#define  TMR_TASK_MGMT_FUNCTION_NOT_SUPPORTED 128 

__attribute__((used)) static u8 iscsit_convert_tcm_tmr_rsp(struct se_tmr_req *se_tmr)
{
	switch (se_tmr->response) {
	case TMR_FUNCTION_COMPLETE:
		return ISCSI_TMF_RSP_COMPLETE;
	case TMR_TASK_DOES_NOT_EXIST:
		return ISCSI_TMF_RSP_NO_TASK;
	case TMR_LUN_DOES_NOT_EXIST:
		return ISCSI_TMF_RSP_NO_LUN;
	case TMR_TASK_MGMT_FUNCTION_NOT_SUPPORTED:
		return ISCSI_TMF_RSP_NOT_SUPPORTED;
	case TMR_FUNCTION_REJECTED:
	default:
		return ISCSI_TMF_RSP_REJECTED;
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
          int _len_se_tmr0 = 1;
          struct se_tmr_req * se_tmr = (struct se_tmr_req *) malloc(_len_se_tmr0*sizeof(struct se_tmr_req));
          for(int _i0 = 0; _i0 < _len_se_tmr0; _i0++) {
            se_tmr[_i0].response = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iscsit_convert_tcm_tmr_rsp(se_tmr);
          printf("%d\n", benchRet); 
          free(se_tmr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_se_tmr0 = 100;
          struct se_tmr_req * se_tmr = (struct se_tmr_req *) malloc(_len_se_tmr0*sizeof(struct se_tmr_req));
          for(int _i0 = 0; _i0 < _len_se_tmr0; _i0++) {
            se_tmr[_i0].response = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iscsit_convert_tcm_tmr_rsp(se_tmr);
          printf("%d\n", benchRet); 
          free(se_tmr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
