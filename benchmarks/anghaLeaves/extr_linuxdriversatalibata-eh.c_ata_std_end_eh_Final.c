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
struct ata_port {struct Scsi_Host* scsi_host; } ;
struct Scsi_Host {scalar_t__ host_eh_scheduled; } ;

/* Variables and functions */

void ata_std_end_eh(struct ata_port *ap)
{
	struct Scsi_Host *host = ap->scsi_host;

	host->host_eh_scheduled = 0;
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
              int _len_ap__i0__scsi_host0 = 1;
          ap[_i0].scsi_host = (struct Scsi_Host *) malloc(_len_ap__i0__scsi_host0*sizeof(struct Scsi_Host));
          for(int _j0 = 0; _j0 < _len_ap__i0__scsi_host0; _j0++) {
            ap[_i0].scsi_host->host_eh_scheduled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ata_std_end_eh(ap);
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].scsi_host);
          }
          free(ap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
