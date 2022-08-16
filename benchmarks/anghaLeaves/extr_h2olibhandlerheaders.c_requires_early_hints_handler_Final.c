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
struct st_headers_filter_t {TYPE_1__* cmds; } ;
struct TYPE_2__ {scalar_t__ cmd; scalar_t__ when; } ;
typedef  TYPE_1__ h2o_headers_command_t ;

/* Variables and functions */
 scalar_t__ H2O_HEADERS_CMD_NULL ; 
 scalar_t__ H2O_HEADERS_CMD_UNSET ; 
 scalar_t__ H2O_HEADERS_CMD_WHEN_FINAL ; 

__attribute__((used)) static int requires_early_hints_handler(struct st_headers_filter_t *self)
{
    h2o_headers_command_t *cmd;
    for (cmd = self->cmds; cmd->cmd != H2O_HEADERS_CMD_NULL; ++cmd) {
        if (cmd->cmd != H2O_HEADERS_CMD_UNSET && cmd->when != H2O_HEADERS_CMD_WHEN_FINAL)
            return 1;
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
          int _len_self0 = 1;
          struct st_headers_filter_t * self = (struct st_headers_filter_t *) malloc(_len_self0*sizeof(struct st_headers_filter_t));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__cmds0 = 1;
          self[_i0].cmds = (struct TYPE_2__ *) malloc(_len_self__i0__cmds0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_self__i0__cmds0; _j0++) {
            self[_i0].cmds->cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].cmds->when = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = requires_early_hints_handler(self);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].cmds);
          }
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
