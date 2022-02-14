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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int control; } ;
struct TYPE_4__ {TYPE_1__ wregs; } ;
struct sgiseeq_regs {TYPE_2__ rw; } ;
struct sgiseeq_private {int control; scalar_t__ is_edlc; } ;

/* Variables and functions */
 int SEEQ_CTRL_XCNT ; 

__attribute__((used)) static inline void tx_maybe_reset_collisions(struct sgiseeq_private *sp,
					     struct sgiseeq_regs *sregs)
{
	if (sp->is_edlc) {
		sregs->rw.wregs.control = sp->control & ~(SEEQ_CTRL_XCNT);
		sregs->rw.wregs.control = sp->control;
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
          int _len_sp0 = 1;
          struct sgiseeq_private * sp = (struct sgiseeq_private *) malloc(_len_sp0*sizeof(struct sgiseeq_private));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp->control = ((-2 * (next_i()%2)) + 1) * next_i();
        sp->is_edlc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sregs0 = 1;
          struct sgiseeq_regs * sregs = (struct sgiseeq_regs *) malloc(_len_sregs0*sizeof(struct sgiseeq_regs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs->rw.wregs.control = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tx_maybe_reset_collisions(sp,sregs);
          free(sp);
          free(sregs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
