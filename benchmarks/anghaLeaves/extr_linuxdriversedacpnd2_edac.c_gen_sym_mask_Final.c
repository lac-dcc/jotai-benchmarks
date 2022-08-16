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
struct b_cr_slice_channel_hash {int sym_slice0_channel_enabled; int sym_slice1_channel_enabled; scalar_t__ enable_pmi_dual_data_mode; scalar_t__ ch_1_disabled; int /*<<< orphan*/  slice_1_disabled; int /*<<< orphan*/  slice_0_mem_disabled; } ;

/* Variables and functions */

__attribute__((used)) static int gen_sym_mask(struct b_cr_slice_channel_hash *p)
{
	int mask = 0;

	if (!p->slice_0_mem_disabled)
		mask |= p->sym_slice0_channel_enabled;

	if (!p->slice_1_disabled)
		mask |= p->sym_slice1_channel_enabled << 2;

	if (p->ch_1_disabled || p->enable_pmi_dual_data_mode)
		mask &= 0x5;

	return mask;
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
          int _len_p0 = 1;
          struct b_cr_slice_channel_hash * p = (struct b_cr_slice_channel_hash *) malloc(_len_p0*sizeof(struct b_cr_slice_channel_hash));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].sym_slice0_channel_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].sym_slice1_channel_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].enable_pmi_dual_data_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ch_1_disabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].slice_1_disabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].slice_0_mem_disabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gen_sym_mask(p);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
