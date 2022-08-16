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
struct ds_info {int num_ds_states; struct ds_cap_state* ds_states; scalar_t__ hs_state; } ;
struct ds_cap_state {int /*<<< orphan*/  state; } ;

/* Variables and functions */
 int /*<<< orphan*/  CAP_STATE_UNKNOWN ; 

__attribute__((used)) static void ds_reset(struct ds_info *dp)
{
	int i;

	dp->hs_state = 0;

	for (i = 0; i < dp->num_ds_states; i++) {
		struct ds_cap_state *cp = &dp->ds_states[i];

		cp->state = CAP_STATE_UNKNOWN;
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
          int _len_dp0 = 1;
          struct ds_info * dp = (struct ds_info *) malloc(_len_dp0*sizeof(struct ds_info));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].num_ds_states = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dp__i0__ds_states0 = 1;
          dp[_i0].ds_states = (struct ds_cap_state *) malloc(_len_dp__i0__ds_states0*sizeof(struct ds_cap_state));
          for(int _j0 = 0; _j0 < _len_dp__i0__ds_states0; _j0++) {
            dp[_i0].ds_states->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dp[_i0].hs_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ds_reset(dp);
          for(int _aux = 0; _aux < _len_dp0; _aux++) {
          free(dp[_aux].ds_states);
          }
          free(dp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
