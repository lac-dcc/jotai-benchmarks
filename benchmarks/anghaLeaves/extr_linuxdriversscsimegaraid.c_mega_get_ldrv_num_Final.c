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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct scsi_cmnd {int* cmnd; TYPE_1__* device; } ;
struct TYPE_5__ {int this_id; int boot_ldrv; scalar_t__ read_ldidmap; scalar_t__ support_random_del; scalar_t__ boot_ldrv_enabled; } ;
typedef  TYPE_2__ adapter_t ;
struct TYPE_4__ {int id; } ;

/* Variables and functions */
#define  READ_10 131 
#define  READ_6 130 
#define  WRITE_10 129 
#define  WRITE_6 128 

__attribute__((used)) static inline int
mega_get_ldrv_num(adapter_t *adapter, struct scsi_cmnd *cmd, int channel)
{
	int		tgt;
	int		ldrv_num;

	tgt = cmd->device->id;
	
	if ( tgt > adapter->this_id )
		tgt--;	/* we do not get inquires for initiator id */

	ldrv_num = (channel * 15) + tgt;


	/*
	 * If we have a logical drive with boot enabled, project it first
	 */
	if( adapter->boot_ldrv_enabled ) {
		if( ldrv_num == 0 ) {
			ldrv_num = adapter->boot_ldrv;
		}
		else {
			if( ldrv_num <= adapter->boot_ldrv ) {
				ldrv_num--;
			}
		}
	}

	/*
	 * If "delete logical drive" feature is enabled on this controller.
	 * Do only if at least one delete logical drive operation was done.
	 *
	 * Also, after logical drive deletion, instead of logical drive number,
	 * the value returned should be 0x80+logical drive id.
	 *
	 * These is valid only for IO commands.
	 */

	if (adapter->support_random_del && adapter->read_ldidmap )
		switch (cmd->cmnd[0]) {
		case READ_6:	/* fall through */
		case WRITE_6:	/* fall through */
		case READ_10:	/* fall through */
		case WRITE_10:
			ldrv_num += 0x80;
		}

	return ldrv_num;
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
          int channel = 100;
          int _len_adapter0 = 1;
          struct TYPE_5__ * adapter = (struct TYPE_5__ *) malloc(_len_adapter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].this_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].boot_ldrv = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].read_ldidmap = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].support_random_del = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].boot_ldrv_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct scsi_cmnd * cmd = (struct scsi_cmnd *) malloc(_len_cmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__cmnd0 = 1;
          cmd[_i0].cmnd = (int *) malloc(_len_cmd__i0__cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__cmnd0; _j0++) {
            cmd[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd__i0__device0 = 1;
          cmd[_i0].device = (struct TYPE_4__ *) malloc(_len_cmd__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__device0; _j0++) {
            cmd[_i0].device->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mega_get_ldrv_num(adapter,cmd,channel);
          printf("%d\n", benchRet); 
          free(adapter);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].cmnd);
          }
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].device);
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
