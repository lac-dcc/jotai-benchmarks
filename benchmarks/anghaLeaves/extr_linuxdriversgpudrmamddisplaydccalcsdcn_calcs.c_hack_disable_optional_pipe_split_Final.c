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
struct dcn_bw_internal_vars {int /*<<< orphan*/  max_dppclk_vmin0p65; int /*<<< orphan*/ * max_dispclk; } ;

/* Variables and functions */

__attribute__((used)) static void hack_disable_optional_pipe_split(struct dcn_bw_internal_vars *v)
{
	/*
	 * disable optional pipe split by lower dispclk bounding box
	 * at DPM0
	 */
	v->max_dispclk[0] = v->max_dppclk_vmin0p65;
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
          int _len_v0 = 1;
          struct dcn_bw_internal_vars * v = (struct dcn_bw_internal_vars *) malloc(_len_v0*sizeof(struct dcn_bw_internal_vars));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].max_dppclk_vmin0p65 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__max_dispclk0 = 1;
          v[_i0].max_dispclk = (int *) malloc(_len_v__i0__max_dispclk0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_v__i0__max_dispclk0; _j0++) {
            v[_i0].max_dispclk[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hack_disable_optional_pipe_split(v);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].max_dispclk);
          }
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
