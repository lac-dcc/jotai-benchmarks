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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint16_t ;
struct TYPE_3__ {int opcode; int len; int /*<<< orphan*/  arg1; } ;
typedef  TYPE_1__ ipfw_insn ;
typedef  enum ipfw_opcodes { ____Placeholder_ipfw_opcodes } ipfw_opcodes ;

/* Variables and functions */
 int F_NOT ; 
 int F_OR ; 

__attribute__((used)) static void
fill_cmd(ipfw_insn *cmd, enum ipfw_opcodes opcode, uint16_t arg)
{
	cmd->opcode = opcode;
	cmd->len =  ((cmd->len) & (F_NOT | F_OR)) | 1;
	cmd->arg1 = arg;
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
          enum ipfw_opcodes opcode = 0;
          int arg = 100;
          int _len_cmd0 = 1;
          struct TYPE_3__ * cmd = (struct TYPE_3__ *) malloc(_len_cmd0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].arg1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_cmd(cmd,opcode,arg);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
