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
struct vsp1_dl_ext_cmd {TYPE_1__* cmds; int /*<<< orphan*/  data_dma; int /*<<< orphan*/  flags; int /*<<< orphan*/  opcode; } ;
struct TYPE_2__ {scalar_t__ reserved; int /*<<< orphan*/  address_set; int /*<<< orphan*/  flags; int /*<<< orphan*/  opcode; } ;

/* Variables and functions */

__attribute__((used)) static void vsp1_dl_ext_cmd_fill_header(struct vsp1_dl_ext_cmd *cmd)
{
	cmd->cmds[0].opcode = cmd->opcode;
	cmd->cmds[0].flags = cmd->flags;
	cmd->cmds[0].address_set = cmd->data_dma;
	cmd->cmds[0].reserved = 0;
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
          struct vsp1_dl_ext_cmd * cmd = (struct vsp1_dl_ext_cmd *) malloc(_len_cmd0*sizeof(struct vsp1_dl_ext_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__cmds0 = 1;
          cmd[_i0].cmds = (struct TYPE_2__ *) malloc(_len_cmd__i0__cmds0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__cmds0; _j0++) {
            cmd[_i0].cmds->reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].cmds->address_set = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].cmds->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].cmds->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].data_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vsp1_dl_ext_cmd_fill_header(cmd);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].cmds);
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
