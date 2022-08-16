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
struct se_cmd {int alua_nonop_delay; int /*<<< orphan*/  se_cmd_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  SCF_ALUA_NON_OPTIMIZED ; 

__attribute__((used)) static inline void core_alua_state_nonoptimized(
	struct se_cmd *cmd,
	unsigned char *cdb,
	int nonop_delay_msecs)
{
	/*
	 * Set SCF_ALUA_NON_OPTIMIZED here, this value will be checked
	 * later to determine if processing of this cmd needs to be
	 * temporarily delayed for the Active/NonOptimized primary access state.
	 */
	cmd->se_cmd_flags |= SCF_ALUA_NON_OPTIMIZED;
	cmd->alua_nonop_delay = nonop_delay_msecs;
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
          int nonop_delay_msecs = 100;
          int _len_cmd0 = 1;
          struct se_cmd * cmd = (struct se_cmd *) malloc(_len_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].alua_nonop_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].se_cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cdb0 = 1;
          unsigned char * cdb = (unsigned char *) malloc(_len_cdb0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_cdb0; _i0++) {
            cdb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          core_alua_state_nonoptimized(cmd,cdb,nonop_delay_msecs);
          free(cmd);
          free(cdb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
