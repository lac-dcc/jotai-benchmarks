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
struct clk_hisi_phase {int phase_num; int* phase_degrees; int* phase_regvals; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int hisi_phase_degrees_to_regval(struct clk_hisi_phase *phase,
					int degrees)
{
	int i;

	for (i = 0; i < phase->phase_num; i++)
		if (phase->phase_degrees[i] == degrees)
			return phase->phase_regvals[i];

	return -EINVAL;
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
          int degrees = 100;
          int _len_phase0 = 1;
          struct clk_hisi_phase * phase = (struct clk_hisi_phase *) malloc(_len_phase0*sizeof(struct clk_hisi_phase));
          for(int _i0 = 0; _i0 < _len_phase0; _i0++) {
            phase[_i0].phase_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phase__i0__phase_degrees0 = 1;
          phase[_i0].phase_degrees = (int *) malloc(_len_phase__i0__phase_degrees0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phase__i0__phase_degrees0; _j0++) {
            phase[_i0].phase_degrees[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phase__i0__phase_regvals0 = 1;
          phase[_i0].phase_regvals = (int *) malloc(_len_phase__i0__phase_regvals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phase__i0__phase_regvals0; _j0++) {
            phase[_i0].phase_regvals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hisi_phase_degrees_to_regval(phase,degrees);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phase0; _aux++) {
          free(phase[_aux].phase_degrees);
          }
          for(int _aux = 0; _aux < _len_phase0; _aux++) {
          free(phase[_aux].phase_regvals);
          }
          free(phase);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
