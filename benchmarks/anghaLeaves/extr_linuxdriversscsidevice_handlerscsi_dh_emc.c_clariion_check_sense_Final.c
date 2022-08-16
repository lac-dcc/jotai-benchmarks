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
struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;

/* Variables and functions */
 int ADD_TO_MLQUEUE ; 
#define  ILLEGAL_REQUEST 130 
#define  NOT_READY 129 
 int SCSI_RETURN_NOT_HANDLED ; 
 int SUCCESS ; 
#define  UNIT_ATTENTION 128 

__attribute__((used)) static int clariion_check_sense(struct scsi_device *sdev,
				struct scsi_sense_hdr *sense_hdr)
{
	switch (sense_hdr->sense_key) {
	case NOT_READY:
		if (sense_hdr->asc == 0x04 && sense_hdr->ascq == 0x03)
			/*
			 * LUN Not Ready - Manual Intervention Required
			 * indicates this is a passive path.
			 *
			 * FIXME: However, if this is seen and EVPD C0
			 * indicates that this is due to a NDU in
			 * progress, we should set FAIL_PATH too.
			 * This indicates we might have to do a SCSI
			 * inquiry in the end_io path. Ugh.
			 *
			 * Can return FAILED only when we want the error
			 * recovery process to kick in.
			 */
			return SUCCESS;
		break;
	case ILLEGAL_REQUEST:
		if (sense_hdr->asc == 0x25 && sense_hdr->ascq == 0x01)
			/*
			 * An array based copy is in progress. Do not
			 * fail the path, do not bypass to another PG,
			 * do not retry. Fail the IO immediately.
			 * (Actually this is the same conclusion as in
			 * the default handler, but lets make sure.)
			 *
			 * Can return FAILED only when we want the error
			 * recovery process to kick in.
			 */
			return SUCCESS;
		break;
	case UNIT_ATTENTION:
		if (sense_hdr->asc == 0x29 && sense_hdr->ascq == 0x00)
			/*
			 * Unit Attention Code. This is the first IO
			 * to the new path, so just retry.
			 */
			return ADD_TO_MLQUEUE;
		break;
	}

	return SCSI_RETURN_NOT_HANDLED;
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
          int _len_sdev0 = 1;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
            sdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sense_hdr0 = 1;
          struct scsi_sense_hdr * sense_hdr = (struct scsi_sense_hdr *) malloc(_len_sense_hdr0*sizeof(struct scsi_sense_hdr));
          for(int _i0 = 0; _i0 < _len_sense_hdr0; _i0++) {
            sense_hdr[_i0].sense_key = ((-2 * (next_i()%2)) + 1) * next_i();
        sense_hdr[_i0].asc = ((-2 * (next_i()%2)) + 1) * next_i();
        sense_hdr[_i0].ascq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clariion_check_sense(sdev,sense_hdr);
          printf("%d\n", benchRet); 
          free(sdev);
          free(sense_hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
