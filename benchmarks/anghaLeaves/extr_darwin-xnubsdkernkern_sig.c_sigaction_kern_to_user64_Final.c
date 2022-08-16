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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  __sa_handler; } ;
struct user64_sigaction {int /*<<< orphan*/  sa_flags; int /*<<< orphan*/  sa_mask; TYPE_1__ __sigaction_u; } ;
struct TYPE_4__ {int /*<<< orphan*/  __sa_handler; } ;
struct kern_sigaction {int /*<<< orphan*/  sa_flags; int /*<<< orphan*/  sa_mask; TYPE_2__ __sigaction_u; } ;

/* Variables and functions */

__attribute__((used)) static void
sigaction_kern_to_user64(struct kern_sigaction *in, struct user64_sigaction *out)
{
	/* This assumes 32 bit __sa_handler is of type sig_t */
	out->__sigaction_u.__sa_handler = in->__sigaction_u.__sa_handler;
	out->sa_mask = in->sa_mask;
	out->sa_flags = in->sa_flags;
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
          int _len_in0 = 1;
          struct kern_sigaction * in = (struct kern_sigaction *) malloc(_len_in0*sizeof(struct kern_sigaction));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0].sa_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        in[_i0].sa_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        in[_i0].__sigaction_u.__sa_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          struct user64_sigaction * out = (struct user64_sigaction *) malloc(_len_out0*sizeof(struct user64_sigaction));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0].sa_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].sa_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].__sigaction_u.__sa_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sigaction_kern_to_user64(in,out);
          free(in);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
