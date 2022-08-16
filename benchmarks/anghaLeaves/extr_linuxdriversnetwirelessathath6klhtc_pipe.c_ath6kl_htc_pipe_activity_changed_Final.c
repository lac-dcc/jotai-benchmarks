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
       1            big-arr-10x\n\
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
struct htc_target {int dummy; } ;
typedef  enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;

/* Variables and functions */

__attribute__((used)) static void ath6kl_htc_pipe_activity_changed(struct htc_target *target,
					     enum htc_endpoint_id ep,
					     bool active)
{
	/* TODO */
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
          enum htc_endpoint_id ep = 100;
          int active = 100;
          int _len_target0 = 1;
          struct htc_target * target = (struct htc_target *) malloc(_len_target0*sizeof(struct htc_target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath6kl_htc_pipe_activity_changed(target,ep,active);
          free(target);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum htc_endpoint_id ep = 10;
          int active = 10;
          int _len_target0 = 100;
          struct htc_target * target = (struct htc_target *) malloc(_len_target0*sizeof(struct htc_target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath6kl_htc_pipe_activity_changed(target,ep,active);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
