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
struct ath5k_ani_state {scalar_t__ listen_time; scalar_t__ cck_errors; scalar_t__ ofdm_errors; scalar_t__ last_listen; scalar_t__ last_cck_errors; scalar_t__ last_ofdm_errors; } ;

/* Variables and functions */

__attribute__((used)) static void
ath5k_ani_period_restart(struct ath5k_ani_state *as)
{
	/* keep last values for debugging */
	as->last_ofdm_errors = as->ofdm_errors;
	as->last_cck_errors = as->cck_errors;
	as->last_listen = as->listen_time;

	as->ofdm_errors = 0;
	as->cck_errors = 0;
	as->listen_time = 0;
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
          int _len_as0 = 1;
          struct ath5k_ani_state * as = (struct ath5k_ani_state *) malloc(_len_as0*sizeof(struct ath5k_ani_state));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].listen_time = ((-2 * (next_i()%2)) + 1) * next_i();
        as[_i0].cck_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        as[_i0].ofdm_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        as[_i0].last_listen = ((-2 * (next_i()%2)) + 1) * next_i();
        as[_i0].last_cck_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        as[_i0].last_ofdm_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_ani_period_restart(as);
          free(as);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
