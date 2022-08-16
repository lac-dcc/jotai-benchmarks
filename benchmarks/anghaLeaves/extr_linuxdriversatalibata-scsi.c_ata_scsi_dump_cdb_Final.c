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
struct scsi_cmnd {int dummy; } ;
struct ata_port {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void ata_scsi_dump_cdb(struct ata_port *ap,
				     struct scsi_cmnd *cmd)
{
#ifdef ATA_VERBOSE_DEBUG
	struct scsi_device *scsidev = cmd->device;

	VPRINTK("CDB (%u:%d,%d,%lld) %9ph\n",
		ap->print_id,
		scsidev->channel, scsidev->id, scsidev->lun,
		cmd->cmnd);
#endif
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
          int _len_ap0 = 1;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
            ap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct scsi_cmnd * cmd = (struct scsi_cmnd *) malloc(_len_cmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ata_scsi_dump_cdb(ap,cmd);
          free(ap);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
