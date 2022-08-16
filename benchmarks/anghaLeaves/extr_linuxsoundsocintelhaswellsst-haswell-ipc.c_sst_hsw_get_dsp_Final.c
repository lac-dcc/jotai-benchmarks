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
struct sst_hsw {struct sst_dsp* dsp; } ;
struct sst_dsp {int dummy; } ;

/* Variables and functions */

struct sst_dsp *sst_hsw_get_dsp(struct sst_hsw *hsw)
{
	return hsw->dsp;
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
          int _len_hsw0 = 1;
          struct sst_hsw * hsw = (struct sst_hsw *) malloc(_len_hsw0*sizeof(struct sst_hsw));
          for(int _i0 = 0; _i0 < _len_hsw0; _i0++) {
              int _len_hsw__i0__dsp0 = 1;
          hsw[_i0].dsp = (struct sst_dsp *) malloc(_len_hsw__i0__dsp0*sizeof(struct sst_dsp));
          for(int _j0 = 0; _j0 < _len_hsw__i0__dsp0; _j0++) {
            hsw[_i0].dsp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sst_dsp * benchRet = sst_hsw_get_dsp(hsw);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hsw0; _aux++) {
          free(hsw[_aux].dsp);
          }
          free(hsw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
