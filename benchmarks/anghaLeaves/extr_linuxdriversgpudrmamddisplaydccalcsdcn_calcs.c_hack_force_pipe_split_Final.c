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
struct dcn_bw_internal_vars {float* max_dppclk; } ;

/* Variables and functions */

__attribute__((used)) static void hack_force_pipe_split(struct dcn_bw_internal_vars *v,
		unsigned int pixel_rate_khz)
{
	float pixel_rate_mhz = pixel_rate_khz / 1000;

	/*
	 * force enabling pipe split by lower dpp clock for DPM0 to just
	 * below the specify pixel_rate, so bw calc would split pipe.
	 */
	if (pixel_rate_mhz < v->max_dppclk[0])
		v->max_dppclk[0] = pixel_rate_mhz;
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
          unsigned int pixel_rate_khz = 100;
          int _len_v0 = 1;
          struct dcn_bw_internal_vars * v = (struct dcn_bw_internal_vars *) malloc(_len_v0*sizeof(struct dcn_bw_internal_vars));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              int _len_v__i0__max_dppclk0 = 1;
          v[_i0].max_dppclk = (float *) malloc(_len_v__i0__max_dppclk0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_v__i0__max_dppclk0; _j0++) {
            v[_i0].max_dppclk[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          hack_force_pipe_split(v,pixel_rate_khz);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].max_dppclk);
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
