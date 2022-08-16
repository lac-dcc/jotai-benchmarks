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
       1            big-arr-10x\n\
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
struct tcm_loop_hba {int tl_proto_id; } ;

/* Variables and functions */
#define  SCSI_PROTOCOL_FCP 130 
#define  SCSI_PROTOCOL_ISCSI 129 
#define  SCSI_PROTOCOL_SAS 128 

__attribute__((used)) static char *tcm_loop_dump_proto_id(struct tcm_loop_hba *tl_hba)
{
	switch (tl_hba->tl_proto_id) {
	case SCSI_PROTOCOL_SAS:
		return "SAS";
	case SCSI_PROTOCOL_FCP:
		return "FCP";
	case SCSI_PROTOCOL_ISCSI:
		return "iSCSI";
	default:
		break;
	}

	return "Unknown";
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
          int _len_tl_hba0 = 1;
          struct tcm_loop_hba * tl_hba = (struct tcm_loop_hba *) malloc(_len_tl_hba0*sizeof(struct tcm_loop_hba));
          for(int _i0 = 0; _i0 < _len_tl_hba0; _i0++) {
            tl_hba[_i0].tl_proto_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = tcm_loop_dump_proto_id(tl_hba);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(tl_hba);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_tl_hba0 = 100;
          struct tcm_loop_hba * tl_hba = (struct tcm_loop_hba *) malloc(_len_tl_hba0*sizeof(struct tcm_loop_hba));
          for(int _i0 = 0; _i0 < _len_tl_hba0; _i0++) {
            tl_hba[_i0].tl_proto_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = tcm_loop_dump_proto_id(tl_hba);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(tl_hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
