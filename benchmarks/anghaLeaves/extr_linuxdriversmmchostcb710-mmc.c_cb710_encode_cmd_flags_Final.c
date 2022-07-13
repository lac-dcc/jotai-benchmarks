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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct mmc_command {unsigned int flags; int opcode; TYPE_1__* data; } ;
struct cb710_mmc_reader {int dummy; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int CB710_MMC_CMD_AC ; 
 int CB710_MMC_CMD_ADTC ; 
 int CB710_MMC_CMD_BC ; 
 int CB710_MMC_CMD_BCR ; 
 int CB710_MMC_CMD_CODE_SHIFT ; 
 int CB710_MMC_DATA_READ ; 
 int CB710_MMC_RSP_136 ; 
 int CB710_MMC_RSP_BUSY ; 
 int CB710_MMC_RSP_NO_CRC ; 
 int CB710_MMC_RSP_PRESENT ; 
#define  MMC_CMD_AC 131 
#define  MMC_CMD_ADTC 130 
#define  MMC_CMD_BC 129 
#define  MMC_CMD_BCR 128 
 unsigned int MMC_CMD_MASK ; 
 int MMC_DATA_READ ; 
 unsigned int MMC_RSP_136 ; 
 unsigned int MMC_RSP_BUSY ; 
 unsigned int MMC_RSP_CRC ; 
 unsigned int MMC_RSP_PRESENT ; 

__attribute__((used)) static u16 cb710_encode_cmd_flags(struct cb710_mmc_reader *reader,
	struct mmc_command *cmd)
{
	unsigned int flags = cmd->flags;
	u16 cb_flags = 0;

	/* Windows driver returned 0 for commands for which no response
	 * is expected. It happened that there were only two such commands
	 * used: MMC_GO_IDLE_STATE and MMC_GO_INACTIVE_STATE so it might
	 * as well be a bug in that driver.
	 *
	 * Original driver set bit 14 for MMC/SD application
	 * commands. There's no difference 'on the wire' and
	 * it apparently works without it anyway.
	 */

	switch (flags & MMC_CMD_MASK) {
	case MMC_CMD_AC:	cb_flags = CB710_MMC_CMD_AC;	break;
	case MMC_CMD_ADTC:	cb_flags = CB710_MMC_CMD_ADTC;	break;
	case MMC_CMD_BC:	cb_flags = CB710_MMC_CMD_BC;	break;
	case MMC_CMD_BCR:	cb_flags = CB710_MMC_CMD_BCR;	break;
	}

	if (flags & MMC_RSP_BUSY)
		cb_flags |= CB710_MMC_RSP_BUSY;

	cb_flags |= cmd->opcode << CB710_MMC_CMD_CODE_SHIFT;

	if (cmd->data && (cmd->data->flags & MMC_DATA_READ))
		cb_flags |= CB710_MMC_DATA_READ;

	if (flags & MMC_RSP_PRESENT) {
		/* Windows driver set 01 at bits 4,3 except for
		 * MMC_SET_BLOCKLEN where it set 10. Maybe the
		 * hardware can do something special about this
		 * command? The original driver looks buggy/incomplete
		 * anyway so we ignore this for now.
		 *
		 * I assume that 00 here means no response is expected.
		 */
		cb_flags |= CB710_MMC_RSP_PRESENT;

		if (flags & MMC_RSP_136)
			cb_flags |= CB710_MMC_RSP_136;
		if (!(flags & MMC_RSP_CRC))
			cb_flags |= CB710_MMC_RSP_NO_CRC;
	}

	return cb_flags;
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
          int _len_reader0 = 1;
          struct cb710_mmc_reader * reader = (struct cb710_mmc_reader *) malloc(_len_reader0*sizeof(struct cb710_mmc_reader));
          for(int _i0 = 0; _i0 < _len_reader0; _i0++) {
            reader[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__data0 = 1;
          cmd[_i0].data = (struct TYPE_2__ *) malloc(_len_cmd__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__data0; _j0++) {
            cmd[_i0].data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cb710_encode_cmd_flags(reader,cmd);
          printf("%d\n", benchRet); 
          free(reader);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].data);
          }
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_reader0 = 65025;
          struct cb710_mmc_reader * reader = (struct cb710_mmc_reader *) malloc(_len_reader0*sizeof(struct cb710_mmc_reader));
          for(int _i0 = 0; _i0 < _len_reader0; _i0++) {
            reader[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 65025;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__data0 = 1;
          cmd[_i0].data = (struct TYPE_2__ *) malloc(_len_cmd__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__data0; _j0++) {
            cmd[_i0].data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cb710_encode_cmd_flags(reader,cmd);
          printf("%d\n", benchRet); 
          free(reader);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].data);
          }
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_reader0 = 100;
          struct cb710_mmc_reader * reader = (struct cb710_mmc_reader *) malloc(_len_reader0*sizeof(struct cb710_mmc_reader));
          for(int _i0 = 0; _i0 < _len_reader0; _i0++) {
            reader[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 100;
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__data0 = 1;
          cmd[_i0].data = (struct TYPE_2__ *) malloc(_len_cmd__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__data0; _j0++) {
            cmd[_i0].data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cb710_encode_cmd_flags(reader,cmd);
          printf("%d\n", benchRet); 
          free(reader);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].data);
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
