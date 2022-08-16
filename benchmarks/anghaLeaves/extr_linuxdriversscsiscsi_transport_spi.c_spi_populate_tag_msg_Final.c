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
struct scsi_cmnd {int flags; TYPE_1__* request; } ;
struct TYPE_2__ {int /*<<< orphan*/  tag; } ;

/* Variables and functions */
 int SCMD_TAGGED ; 
 int /*<<< orphan*/  SIMPLE_QUEUE_TAG ; 

int spi_populate_tag_msg(unsigned char *msg, struct scsi_cmnd *cmd)
{
        if (cmd->flags & SCMD_TAGGED) {
		*msg++ = SIMPLE_QUEUE_TAG;
        	*msg++ = cmd->request->tag;
        	return 2;
	}

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

    // int-bounds
    case 0:
    {
          int _len_msg0 = 1;
          unsigned char * msg = (unsigned char *) malloc(_len_msg0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct scsi_cmnd * cmd = (struct scsi_cmnd *) malloc(_len_cmd0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__request0 = 1;
          cmd[_i0].request = (struct TYPE_2__ *) malloc(_len_cmd__i0__request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__request0; _j0++) {
            cmd[_i0].request->tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spi_populate_tag_msg(msg,cmd);
          printf("%d\n", benchRet); 
          free(msg);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].request);
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
