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
struct rpi_poe_fan_ctx {int rpi_poe_fan_max_state; unsigned long* rpi_poe_fan_cooling_levels; int rpi_poe_fan_state; } ;

/* Variables and functions */

__attribute__((used)) static void rpi_poe_fan_update_state(struct rpi_poe_fan_ctx *ctx,
				     unsigned long pwm)
{
	int i;

	for (i = 0; i < ctx->rpi_poe_fan_max_state; ++i)
		if (pwm < ctx->rpi_poe_fan_cooling_levels[i + 1])
			break;

	ctx->rpi_poe_fan_state = i;
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
          unsigned long pwm = 100;
          int _len_ctx0 = 1;
          struct rpi_poe_fan_ctx * ctx = (struct rpi_poe_fan_ctx *) malloc(_len_ctx0*sizeof(struct rpi_poe_fan_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].rpi_poe_fan_max_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__rpi_poe_fan_cooling_levels0 = 1;
          ctx[_i0].rpi_poe_fan_cooling_levels = (unsigned long *) malloc(_len_ctx__i0__rpi_poe_fan_cooling_levels0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__rpi_poe_fan_cooling_levels0; _j0++) {
            ctx[_i0].rpi_poe_fan_cooling_levels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].rpi_poe_fan_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rpi_poe_fan_update_state(ctx,pwm);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].rpi_poe_fan_cooling_levels);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
