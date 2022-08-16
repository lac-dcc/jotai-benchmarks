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
struct user64_sigaltstack {int /*<<< orphan*/  ss_sp; int /*<<< orphan*/  ss_size; int /*<<< orphan*/  ss_flags; } ;
struct kern_sigaltstack {int /*<<< orphan*/  ss_sp; int /*<<< orphan*/  ss_size; int /*<<< orphan*/  ss_flags; } ;

/* Variables and functions */

__attribute__((used)) static void
sigaltstack_user64_to_kern(struct user64_sigaltstack *in, struct kern_sigaltstack *out)
{
	out->ss_flags	= in->ss_flags;
	out->ss_size	= in->ss_size;
	out->ss_sp		= in->ss_sp;
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
          struct user64_sigaltstack * in = (struct user64_sigaltstack *) malloc(_len_in0*sizeof(struct user64_sigaltstack));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0].ss_sp = ((-2 * (next_i()%2)) + 1) * next_i();
        in[_i0].ss_size = ((-2 * (next_i()%2)) + 1) * next_i();
        in[_i0].ss_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          struct kern_sigaltstack * out = (struct kern_sigaltstack *) malloc(_len_out0*sizeof(struct kern_sigaltstack));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0].ss_sp = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].ss_size = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].ss_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sigaltstack_user64_to_kern(in,out);
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
