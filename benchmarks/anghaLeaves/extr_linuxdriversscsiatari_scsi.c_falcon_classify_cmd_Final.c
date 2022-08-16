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
struct scsi_cmnd {unsigned char* cmnd; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ type; } ;

/* Variables and functions */
 int CMD_MODE_UNKNOWN ; 
 int CMD_SURELY_BLOCK_MODE ; 
 int CMD_SURELY_BYTE_MODE ; 
 unsigned char READ_10 ; 
 unsigned char READ_6 ; 
 unsigned char READ_BUFFER ; 
 unsigned char READ_DEFECT_DATA ; 
 unsigned char READ_LONG ; 
 unsigned char READ_REVERSE ; 
 unsigned char RECOVER_BUFFERED_DATA ; 
 scalar_t__ TYPE_TAPE ; 

__attribute__((used)) static int falcon_classify_cmd(struct scsi_cmnd *cmd)
{
	unsigned char opcode = cmd->cmnd[0];

	if (opcode == READ_DEFECT_DATA || opcode == READ_LONG ||
	    opcode == READ_BUFFER)
		return CMD_SURELY_BYTE_MODE;
	else if (opcode == READ_6 || opcode == READ_10 ||
		 opcode == 0xa8 /* READ_12 */ || opcode == READ_REVERSE ||
		 opcode == RECOVER_BUFFERED_DATA) {
		/* In case of a sequential-access target (tape), special care is
		 * needed here: The transfer is block-mode only if the 'fixed' bit is
		 * set! */
		if (cmd->device->type == TYPE_TAPE && !(cmd->cmnd[1] & 1))
			return CMD_SURELY_BYTE_MODE;
		else
			return CMD_SURELY_BLOCK_MODE;
	} else
		return CMD_MODE_UNKNOWN;
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
          struct scsi_cmnd * cmd = (struct scsi_cmnd *) malloc(_len_cmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__cmnd0 = 1;
          cmd[_i0].cmnd = (unsigned char *) malloc(_len_cmd__i0__cmnd0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_cmd__i0__cmnd0; _j0++) {
            cmd[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd__i0__device0 = 1;
          cmd[_i0].device = (struct TYPE_2__ *) malloc(_len_cmd__i0__device0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__device0; _j0++) {
            cmd[_i0].device->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = falcon_classify_cmd(cmd);
          printf("%d\n", benchRet); 
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
