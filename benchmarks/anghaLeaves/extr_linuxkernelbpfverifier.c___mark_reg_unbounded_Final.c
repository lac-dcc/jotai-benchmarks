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
struct bpf_reg_state {int /*<<< orphan*/  umax_value; scalar_t__ umin_value; int /*<<< orphan*/  smax_value; int /*<<< orphan*/  smin_value; } ;

/* Variables and functions */
 int /*<<< orphan*/  S64_MAX ; 
 int /*<<< orphan*/  S64_MIN ; 
 int /*<<< orphan*/  U64_MAX ; 

__attribute__((used)) static void __mark_reg_unbounded(struct bpf_reg_state *reg)
{
	reg->smin_value = S64_MIN;
	reg->smax_value = S64_MAX;
	reg->umin_value = 0;
	reg->umax_value = U64_MAX;
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
          int _len_reg0 = 1;
          struct bpf_reg_state * reg = (struct bpf_reg_state *) malloc(_len_reg0*sizeof(struct bpf_reg_state));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].umax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].umin_value = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].smax_value = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].smin_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __mark_reg_unbounded(reg);
          free(reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
