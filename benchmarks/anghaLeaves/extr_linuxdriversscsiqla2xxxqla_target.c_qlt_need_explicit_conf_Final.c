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
struct qla_tgt_cmd {int conf_compl_supported; TYPE_1__* qpair; } ;
struct TYPE_2__ {scalar_t__ enable_explicit_conf; scalar_t__ enable_class_2; } ;

/* Variables and functions */

__attribute__((used)) static inline int qlt_need_explicit_conf(struct qla_tgt_cmd *cmd,
    int sending_sense)
{
	if (cmd->qpair->enable_class_2)
		return 0;

	if (sending_sense)
		return cmd->conf_compl_supported;
	else
		return cmd->qpair->enable_explicit_conf &&
                    cmd->conf_compl_supported;
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
          int sending_sense = 100;
          int _len_cmd0 = 1;
          struct qla_tgt_cmd * cmd = (struct qla_tgt_cmd *) malloc(_len_cmd0*sizeof(struct qla_tgt_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].conf_compl_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__qpair0 = 1;
          cmd[_i0].qpair = (struct TYPE_2__ *) malloc(_len_cmd__i0__qpair0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__qpair0; _j0++) {
            cmd[_i0].qpair->enable_explicit_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].qpair->enable_class_2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlt_need_explicit_conf(cmd,sending_sense);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].qpair);
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
