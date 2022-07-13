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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  time_left; } ;
struct ipr_cmnd {TYPE_2__ u; int /*<<< orphan*/  job_step; TYPE_1__* ioa_cfg; } ;
struct TYPE_3__ {scalar_t__ cfg_locked; } ;

/* Variables and functions */
 int IPR_RC_JOB_CONTINUE ; 
 int /*<<< orphan*/  IPR_WAIT_FOR_RESET_TIMEOUT ; 
 int /*<<< orphan*/  ipr_reset_block_config_access_wait ; 

__attribute__((used)) static int ipr_reset_block_config_access(struct ipr_cmnd *ipr_cmd)
{
	ipr_cmd->ioa_cfg->cfg_locked = 0;
	ipr_cmd->job_step = ipr_reset_block_config_access_wait;
	ipr_cmd->u.time_left = IPR_WAIT_FOR_RESET_TIMEOUT;
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
            ipr_cmd[_i0].u.time_left = ((-2 * (next_i()%2)) + 1) * next_i();
        ipr_cmd[_i0].job_step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipr_cmd__i0__ioa_cfg0 = 1;
          ipr_cmd[_i0].ioa_cfg = (struct TYPE_3__ *) malloc(_len_ipr_cmd__i0__ioa_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ipr_cmd__i0__ioa_cfg0; _j0++) {
            ipr_cmd[_i0].ioa_cfg->cfg_locked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipr_reset_block_config_access(ipr_cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ipr_cmd0; _aux++) {
          free(ipr_cmd[_aux].ioa_cfg);
          }
          free(ipr_cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ipr_cmd0 = 65025;
          struct ipr_cmnd * ipr_cmd = (struct ipr_cmnd *) malloc(_len_ipr_cmd0*sizeof(struct ipr_cmnd));
          for(int _i0 = 0; _i0 < _len_ipr_cmd0; _i0++) {
            ipr_cmd[_i0].u.time_left = ((-2 * (next_i()%2)) + 1) * next_i();
        ipr_cmd[_i0].job_step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipr_cmd__i0__ioa_cfg0 = 1;
          ipr_cmd[_i0].ioa_cfg = (struct TYPE_3__ *) malloc(_len_ipr_cmd__i0__ioa_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ipr_cmd__i0__ioa_cfg0; _j0++) {
            ipr_cmd[_i0].ioa_cfg->cfg_locked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipr_reset_block_config_access(ipr_cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ipr_cmd0; _aux++) {
          free(ipr_cmd[_aux].ioa_cfg);
          }
          free(ipr_cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ipr_cmd0 = 100;
          struct ipr_cmnd * ipr_cmd = (struct ipr_cmnd *) malloc(_len_ipr_cmd0*sizeof(struct ipr_cmnd));
          for(int _i0 = 0; _i0 < _len_ipr_cmd0; _i0++) {
            ipr_cmd[_i0].u.time_left = ((-2 * (next_i()%2)) + 1) * next_i();
        ipr_cmd[_i0].job_step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipr_cmd__i0__ioa_cfg0 = 1;
          ipr_cmd[_i0].ioa_cfg = (struct TYPE_3__ *) malloc(_len_ipr_cmd__i0__ioa_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ipr_cmd__i0__ioa_cfg0; _j0++) {
            ipr_cmd[_i0].ioa_cfg->cfg_locked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipr_reset_block_config_access(ipr_cmd);
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
