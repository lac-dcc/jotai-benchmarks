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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {char lastwhat; char lastdigit; scalar_t__ count; scalar_t__ size; } ;
struct dsp {TYPE_1__ dtmf; } ;

/* Variables and functions */

void dsp_dtmf_goertzel_init(struct dsp *dsp)
{
	dsp->dtmf.size = 0;
	dsp->dtmf.lastwhat = '\0';
	dsp->dtmf.lastdigit = '\0';
	dsp->dtmf.count = 0;
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
          int _len_dsp0 = 1;
          struct dsp * dsp = (struct dsp *) malloc(_len_dsp0*sizeof(struct dsp));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
            dsp[_i0].dtmf.lastwhat = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp[_i0].dtmf.lastdigit = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp[_i0].dtmf.count = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp[_i0].dtmf.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsp_dtmf_goertzel_init(dsp);
          free(dsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
