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
       0            big-arr\n\
       1            big-arr-10x\n\
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

/* Type definitions */
typedef  int u8 ;
struct ata_scsi_args {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int ata_scsiop_inq_b2(struct ata_scsi_args *args, u8 *rbuf)
{
	/* SCSI Thin Provisioning VPD page: SBC-3 rev 22 or later */
	rbuf[1] = 0xb2;
	rbuf[3] = 0x4;
	rbuf[5] = 1 << 6;	/* TPWS */

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

    // big-arr
    case 0:
    {
          int _len_args0 = 65025;
          struct ata_scsi_args * args = (struct ata_scsi_args *) malloc(_len_args0*sizeof(struct ata_scsi_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rbuf0 = 65025;
          int * rbuf = (int *) malloc(_len_rbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rbuf0; _i0++) {
            rbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ata_scsiop_inq_b2(args,rbuf);
          printf("%u\n", benchRet); 
          free(args);
          free(rbuf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_args0 = 100;
          struct ata_scsi_args * args = (struct ata_scsi_args *) malloc(_len_args0*sizeof(struct ata_scsi_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rbuf0 = 100;
          int * rbuf = (int *) malloc(_len_rbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rbuf0; _i0++) {
            rbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ata_scsiop_inq_b2(args,rbuf);
          printf("%u\n", benchRet); 
          free(args);
          free(rbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
