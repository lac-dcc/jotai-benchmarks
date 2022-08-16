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
struct ipr_ioa_cfg {scalar_t__ sdt_state; int dump_timeout; } ;
struct ipr_cmnd {int /*<<< orphan*/  job_step; struct ipr_ioa_cfg* ioa_cfg; } ;

/* Variables and functions */
 scalar_t__ ABORT_DUMP ; 
 scalar_t__ GET_DUMP ; 
 int IPR_RC_JOB_CONTINUE ; 
 scalar_t__ READ_DUMP ; 
 scalar_t__ WAIT_FOR_DUMP ; 
 int /*<<< orphan*/  ipr_reset_alert ; 

__attribute__((used)) static int ipr_reset_wait_for_dump(struct ipr_cmnd *ipr_cmd)
{
	struct ipr_ioa_cfg *ioa_cfg = ipr_cmd->ioa_cfg;

	if (ioa_cfg->sdt_state == GET_DUMP)
		ioa_cfg->sdt_state = WAIT_FOR_DUMP;
	else if (ioa_cfg->sdt_state == READ_DUMP)
		ioa_cfg->sdt_state = ABORT_DUMP;

	ioa_cfg->dump_timeout = 1;
	ipr_cmd->job_step = ipr_reset_alert;

	return IPR_RC_JOB_CONTINUE;
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
          int _len_ipr_cmd0 = 1;
          struct ipr_cmnd * ipr_cmd = (struct ipr_cmnd *) malloc(_len_ipr_cmd0*sizeof(struct ipr_cmnd));
          for(int _i0 = 0; _i0 < _len_ipr_cmd0; _i0++) {
            ipr_cmd[_i0].job_step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipr_cmd__i0__ioa_cfg0 = 1;
          ipr_cmd[_i0].ioa_cfg = (struct ipr_ioa_cfg *) malloc(_len_ipr_cmd__i0__ioa_cfg0*sizeof(struct ipr_ioa_cfg));
          for(int _j0 = 0; _j0 < _len_ipr_cmd__i0__ioa_cfg0; _j0++) {
            ipr_cmd[_i0].ioa_cfg->sdt_state = ((-2 * (next_i()%2)) + 1) * next_i();
        ipr_cmd[_i0].ioa_cfg->dump_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipr_reset_wait_for_dump(ipr_cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ipr_cmd0; _aux++) {
          free(ipr_cmd[_aux].ioa_cfg);
          }
          free(ipr_cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
