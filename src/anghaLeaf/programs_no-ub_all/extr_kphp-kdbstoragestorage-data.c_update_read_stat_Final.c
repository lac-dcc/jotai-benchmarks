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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_3__ {int /*<<< orphan*/  last_fail_time; scalar_t__ sequential_fails; int /*<<< orphan*/  fails; int /*<<< orphan*/  success; } ;
typedef  TYPE_1__ stat_read_t ;

/* Variables and functions */
 int /*<<< orphan*/  now ; 

void update_read_stat (stat_read_t *S, int success) {
  if (success) {
    S->success++;
    S->sequential_fails = 0;
  } else {
    S->fails++;
    S->sequential_fails++;
    S->last_fail_time = now;
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

    // big-arr
    case 0:
    {
          int success = 255;
          int _len_S0 = 1;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S->last_fail_time = ((-2 * (next_i()%2)) + 1) * next_i();
        S->sequential_fails = ((-2 * (next_i()%2)) + 1) * next_i();
        S->fails = ((-2 * (next_i()%2)) + 1) * next_i();
        S->success = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_read_stat(S,success);
          free(S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
