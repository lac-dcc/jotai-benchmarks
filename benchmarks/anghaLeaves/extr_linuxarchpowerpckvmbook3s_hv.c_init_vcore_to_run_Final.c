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
struct kvmppc_vcore {scalar_t__ tb_offset_applied; scalar_t__ conferring_threads; scalar_t__ napping_threads; scalar_t__ in_guest; scalar_t__ entry_exit_map; } ;

/* Variables and functions */

__attribute__((used)) static void init_vcore_to_run(struct kvmppc_vcore *vc)
{
	vc->entry_exit_map = 0;
	vc->in_guest = 0;
	vc->napping_threads = 0;
	vc->conferring_threads = 0;
	vc->tb_offset_applied = 0;
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
          int _len_vc0 = 1;
          struct kvmppc_vcore * vc = (struct kvmppc_vcore *) malloc(_len_vc0*sizeof(struct kvmppc_vcore));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].tb_offset_applied = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].conferring_threads = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].napping_threads = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].in_guest = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].entry_exit_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_vcore_to_run(vc);
          free(vc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
