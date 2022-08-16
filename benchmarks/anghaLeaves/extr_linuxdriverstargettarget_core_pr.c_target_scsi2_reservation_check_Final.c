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
struct se_session {scalar_t__ se_node_acl; scalar_t__ sess_bin_isid; } ;
struct se_device {scalar_t__ dev_reserved_node_acl; int dev_reservation_flags; scalar_t__ dev_res_bin_isid; } ;
struct se_cmd {int* t_task_cdb; struct se_session* se_sess; struct se_device* se_dev; } ;
typedef  int /*<<< orphan*/  sense_reason_t ;

/* Variables and functions */
 int DRF_SPC2_RESERVATIONS_WITH_ISID ; 
#define  INQUIRY 130 
#define  RELEASE 129 
#define  RELEASE_10 128 
 int /*<<< orphan*/  TCM_RESERVATION_CONFLICT ; 

__attribute__((used)) static sense_reason_t
target_scsi2_reservation_check(struct se_cmd *cmd)
{
	struct se_device *dev = cmd->se_dev;
	struct se_session *sess = cmd->se_sess;

	switch (cmd->t_task_cdb[0]) {
	case INQUIRY:
	case RELEASE:
	case RELEASE_10:
		return 0;
	default:
		break;
	}

	if (!dev->dev_reserved_node_acl || !sess)
		return 0;

	if (dev->dev_reserved_node_acl != sess->se_node_acl)
		return TCM_RESERVATION_CONFLICT;

	if (dev->dev_reservation_flags & DRF_SPC2_RESERVATIONS_WITH_ISID) {
		if (dev->dev_res_bin_isid != sess->sess_bin_isid)
			return TCM_RESERVATION_CONFLICT;
	}

	return 0;
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
          int _len_cmd0 = 1;
          struct se_cmd * cmd = (struct se_cmd *) malloc(_len_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__t_task_cdb0 = 1;
          cmd[_i0].t_task_cdb = (int *) malloc(_len_cmd__i0__t_task_cdb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__t_task_cdb0; _j0++) {
            cmd[_i0].t_task_cdb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd__i0__se_sess0 = 1;
          cmd[_i0].se_sess = (struct se_session *) malloc(_len_cmd__i0__se_sess0*sizeof(struct se_session));
          for(int _j0 = 0; _j0 < _len_cmd__i0__se_sess0; _j0++) {
            cmd[_i0].se_sess->se_node_acl = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].se_sess->sess_bin_isid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd__i0__se_dev0 = 1;
          cmd[_i0].se_dev = (struct se_device *) malloc(_len_cmd__i0__se_dev0*sizeof(struct se_device));
          for(int _j0 = 0; _j0 < _len_cmd__i0__se_dev0; _j0++) {
            cmd[_i0].se_dev->dev_reserved_node_acl = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].se_dev->dev_reservation_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].se_dev->dev_res_bin_isid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = target_scsi2_reservation_check(cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].t_task_cdb);
          }
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].se_sess);
          }
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].se_dev);
          }
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
