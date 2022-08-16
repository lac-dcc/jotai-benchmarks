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
struct selinux_state {TYPE_1__* ss; } ;
struct av_decision {int auditdeny; scalar_t__ flags; int /*<<< orphan*/  seqno; scalar_t__ auditallow; scalar_t__ allowed; } ;
struct TYPE_2__ {int /*<<< orphan*/  latest_granting; } ;

/* Variables and functions */

__attribute__((used)) static void avd_init(struct selinux_state *state, struct av_decision *avd)
{
	avd->allowed = 0;
	avd->auditallow = 0;
	avd->auditdeny = 0xffffffff;
	avd->seqno = state->ss->latest_granting;
	avd->flags = 0;
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
          int _len_state0 = 1;
          struct selinux_state * state = (struct selinux_state *) malloc(_len_state0*sizeof(struct selinux_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__ss0 = 1;
          state[_i0].ss = (struct TYPE_2__ *) malloc(_len_state__i0__ss0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__ss0; _j0++) {
            state[_i0].ss->latest_granting = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_avd0 = 1;
          struct av_decision * avd = (struct av_decision *) malloc(_len_avd0*sizeof(struct av_decision));
          for(int _i0 = 0; _i0 < _len_avd0; _i0++) {
            avd[_i0].auditdeny = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].seqno = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].auditallow = ((-2 * (next_i()%2)) + 1) * next_i();
        avd[_i0].allowed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          avd_init(state,avd);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].ss);
          }
          free(state);
          free(avd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
