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
typedef  int /*<<< orphan*/  u32 ;
struct mmc_command {int flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  CMD_CFG_NO_RESP ; 
 int /*<<< orphan*/  CMD_CFG_R1B ; 
 int /*<<< orphan*/  CMD_CFG_RESP_128 ; 
 int /*<<< orphan*/  CMD_CFG_RESP_NOCRC ; 
 int /*<<< orphan*/  CMD_CFG_RESP_NUM ; 
 int MMC_RSP_136 ; 
 int MMC_RSP_BUSY ; 
 int MMC_RSP_CRC ; 
 int MMC_RSP_PRESENT ; 

__attribute__((used)) static void meson_mmc_set_response_bits(struct mmc_command *cmd, u32 *cmd_cfg)
{
	if (cmd->flags & MMC_RSP_PRESENT) {
		if (cmd->flags & MMC_RSP_136)
			*cmd_cfg |= CMD_CFG_RESP_128;
		*cmd_cfg |= CMD_CFG_RESP_NUM;

		if (!(cmd->flags & MMC_RSP_CRC))
			*cmd_cfg |= CMD_CFG_RESP_NOCRC;

		if (cmd->flags & MMC_RSP_BUSY)
			*cmd_cfg |= CMD_CFG_R1B;
	} else {
		*cmd_cfg |= CMD_CFG_NO_RESP;
	}
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
          struct mmc_command * cmd = (struct mmc_command *) malloc(_len_cmd0*sizeof(struct mmc_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd_cfg0 = 1;
          int * cmd_cfg = (int *) malloc(_len_cmd_cfg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cmd_cfg0; _i0++) {
            cmd_cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          meson_mmc_set_response_bits(cmd,cmd_cfg);
          free(cmd);
          free(cmd_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
