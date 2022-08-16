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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct packet_command {int stat; TYPE_1__* sshdr; } ;
struct cdrom_device_info {int dummy; } ;
struct TYPE_2__ {int sense_key; int asc; int ascq; } ;

/* Variables and functions */
 int EIO ; 

int cdrom_dummy_generic_packet(struct cdrom_device_info *cdi,
			       struct packet_command *cgc)
{
	if (cgc->sshdr) {
		cgc->sshdr->sense_key = 0x05;
		cgc->sshdr->asc = 0x20;
		cgc->sshdr->ascq = 0x00;
	}

	cgc->stat = -EIO;
	return -EIO;
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
          int _len_cdi0 = 1;
          struct cdrom_device_info * cdi = (struct cdrom_device_info *) malloc(_len_cdi0*sizeof(struct cdrom_device_info));
          for(int _i0 = 0; _i0 < _len_cdi0; _i0++) {
            cdi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cgc0 = 1;
          struct packet_command * cgc = (struct packet_command *) malloc(_len_cgc0*sizeof(struct packet_command));
          for(int _i0 = 0; _i0 < _len_cgc0; _i0++) {
            cgc[_i0].stat = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cgc__i0__sshdr0 = 1;
          cgc[_i0].sshdr = (struct TYPE_2__ *) malloc(_len_cgc__i0__sshdr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cgc__i0__sshdr0; _j0++) {
            cgc[_i0].sshdr->sense_key = ((-2 * (next_i()%2)) + 1) * next_i();
        cgc[_i0].sshdr->asc = ((-2 * (next_i()%2)) + 1) * next_i();
        cgc[_i0].sshdr->ascq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cdrom_dummy_generic_packet(cdi,cgc);
          printf("%d\n", benchRet); 
          free(cdi);
          for(int _aux = 0; _aux < _len_cgc0; _aux++) {
          free(cgc[_aux].sshdr);
          }
          free(cgc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
