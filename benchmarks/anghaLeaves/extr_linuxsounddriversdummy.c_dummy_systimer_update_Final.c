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
struct dummy_systimer_pcm {unsigned long base_time; unsigned long rate; scalar_t__ frac_pos; scalar_t__ frac_buffer_size; unsigned long frac_period_rest; scalar_t__ frac_period_size; int /*<<< orphan*/  elapsed; } ;

/* Variables and functions */
 unsigned long jiffies ; 

__attribute__((used)) static void dummy_systimer_update(struct dummy_systimer_pcm *dpcm)
{
	unsigned long delta;

	delta = jiffies - dpcm->base_time;
	if (!delta)
		return;
	dpcm->base_time += delta;
	delta *= dpcm->rate;
	dpcm->frac_pos += delta;
	while (dpcm->frac_pos >= dpcm->frac_buffer_size)
		dpcm->frac_pos -= dpcm->frac_buffer_size;
	while (dpcm->frac_period_rest <= delta) {
		dpcm->elapsed++;
		dpcm->frac_period_rest += dpcm->frac_period_size;
	}
	dpcm->frac_period_rest -= delta;
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
          int _len_dpcm0 = 1;
          struct dummy_systimer_pcm * dpcm = (struct dummy_systimer_pcm *) malloc(_len_dpcm0*sizeof(struct dummy_systimer_pcm));
          for(int _i0 = 0; _i0 < _len_dpcm0; _i0++) {
            dpcm[_i0].base_time = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].frac_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].frac_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].frac_period_rest = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].frac_period_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].elapsed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dummy_systimer_update(dpcm);
          free(dpcm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
