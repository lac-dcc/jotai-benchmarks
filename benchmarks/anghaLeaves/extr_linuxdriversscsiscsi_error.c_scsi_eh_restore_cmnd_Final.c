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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct scsi_eh_save {int /*<<< orphan*/  eh_eflags; int /*<<< orphan*/  prot_op; int /*<<< orphan*/  underflow; int /*<<< orphan*/  result; int /*<<< orphan*/  next_rq; int /*<<< orphan*/  sdb; int /*<<< orphan*/  data_direction; int /*<<< orphan*/  cmnd; int /*<<< orphan*/  cmd_len; } ;
struct scsi_cmnd {int /*<<< orphan*/  eh_eflags; int /*<<< orphan*/  prot_op; int /*<<< orphan*/  underflow; int /*<<< orphan*/  result; TYPE_1__* request; int /*<<< orphan*/  sdb; int /*<<< orphan*/  sc_data_direction; int /*<<< orphan*/  cmnd; int /*<<< orphan*/  cmd_len; } ;
struct TYPE_2__ {int /*<<< orphan*/  next_rq; } ;

/* Variables and functions */

void scsi_eh_restore_cmnd(struct scsi_cmnd* scmd, struct scsi_eh_save *ses)
{
	/*
	 * Restore original data
	 */
	scmd->cmd_len = ses->cmd_len;
	scmd->cmnd = ses->cmnd;
	scmd->sc_data_direction = ses->data_direction;
	scmd->sdb = ses->sdb;
	scmd->request->next_rq = ses->next_rq;
	scmd->result = ses->result;
	scmd->underflow = ses->underflow;
	scmd->prot_op = ses->prot_op;
	scmd->eh_eflags = ses->eh_eflags;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_scmd0 = 65025;
          struct scsi_cmnd * scmd = (struct scsi_cmnd *) malloc(_len_scmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_scmd0; _i0++) {
              scmd[_i0].eh_eflags = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].prot_op = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scmd__i0__request0 = 1;
          scmd[_i0].request = (struct TYPE_2__ *) malloc(_len_scmd__i0__request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_scmd__i0__request0; _j0++) {
              scmd[_i0].request->next_rq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          scmd[_i0].sdb = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].sc_data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].cmnd = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ses0 = 65025;
          struct scsi_eh_save * ses = (struct scsi_eh_save *) malloc(_len_ses0*sizeof(struct scsi_eh_save));
          for(int _i0 = 0; _i0 < _len_ses0; _i0++) {
              ses[_i0].eh_eflags = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].prot_op = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].next_rq = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].sdb = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].cmnd = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          scsi_eh_restore_cmnd(scmd,ses);
          for(int _aux = 0; _aux < _len_scmd0; _aux++) {
          free(scmd[_aux].request);
          }
          free(scmd);
          free(ses);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_scmd0 = 100;
          struct scsi_cmnd * scmd = (struct scsi_cmnd *) malloc(_len_scmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_scmd0; _i0++) {
              scmd[_i0].eh_eflags = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].prot_op = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scmd__i0__request0 = 1;
          scmd[_i0].request = (struct TYPE_2__ *) malloc(_len_scmd__i0__request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_scmd__i0__request0; _j0++) {
              scmd[_i0].request->next_rq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          scmd[_i0].sdb = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].sc_data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].cmnd = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ses0 = 100;
          struct scsi_eh_save * ses = (struct scsi_eh_save *) malloc(_len_ses0*sizeof(struct scsi_eh_save));
          for(int _i0 = 0; _i0 < _len_ses0; _i0++) {
              ses[_i0].eh_eflags = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].prot_op = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].next_rq = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].sdb = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].cmnd = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          scsi_eh_restore_cmnd(scmd,ses);
          for(int _aux = 0; _aux < _len_scmd0; _aux++) {
          free(scmd[_aux].request);
          }
          free(scmd);
          free(ses);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_scmd0 = 1;
          struct scsi_cmnd * scmd = (struct scsi_cmnd *) malloc(_len_scmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_scmd0; _i0++) {
              scmd[_i0].eh_eflags = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].prot_op = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scmd__i0__request0 = 1;
          scmd[_i0].request = (struct TYPE_2__ *) malloc(_len_scmd__i0__request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_scmd__i0__request0; _j0++) {
              scmd[_i0].request->next_rq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          scmd[_i0].sdb = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].sc_data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].cmnd = ((-2 * (next_i()%2)) + 1) * next_i();
          scmd[_i0].cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ses0 = 1;
          struct scsi_eh_save * ses = (struct scsi_eh_save *) malloc(_len_ses0*sizeof(struct scsi_eh_save));
          for(int _i0 = 0; _i0 < _len_ses0; _i0++) {
              ses[_i0].eh_eflags = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].prot_op = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].next_rq = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].sdb = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].data_direction = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].cmnd = ((-2 * (next_i()%2)) + 1) * next_i();
          ses[_i0].cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          scsi_eh_restore_cmnd(scmd,ses);
          for(int _aux = 0; _aux < _len_scmd0; _aux++) {
          free(scmd[_aux].request);
          }
          free(scmd);
          free(ses);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
