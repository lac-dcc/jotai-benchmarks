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
typedef  int u8 ;
struct scsi_cmnd {int* cmnd; int result; } ;

/* Variables and functions */
 int ILLEGAL_REQUEST ; 
#define  SET_WINDOW 129 
#define  WRITE_SAME 128 

__attribute__((used)) static bool storvsc_scsi_cmd_ok(struct scsi_cmnd *scmnd)
{
	bool allowed = true;
	u8 scsi_op = scmnd->cmnd[0];

	switch (scsi_op) {
	/* the host does not handle WRITE_SAME, log accident usage */
	case WRITE_SAME:
	/*
	 * smartd sends this command and the host does not handle
	 * this. So, don't send it.
	 */
	case SET_WINDOW:
		scmnd->result = ILLEGAL_REQUEST << 16;
		allowed = false;
		break;
	default:
		break;
	}
	return allowed;
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
          int _len_scmnd0 = 1;
          struct scsi_cmnd * scmnd = (struct scsi_cmnd *) malloc(_len_scmnd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_scmnd0; _i0++) {
              int _len_scmnd__i0__cmnd0 = 1;
          scmnd[_i0].cmnd = (int *) malloc(_len_scmnd__i0__cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_scmnd__i0__cmnd0; _j0++) {
            scmnd[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        scmnd[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = storvsc_scsi_cmd_ok(scmnd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scmnd0; _aux++) {
          free(scmnd[_aux].cmnd);
          }
          free(scmnd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
