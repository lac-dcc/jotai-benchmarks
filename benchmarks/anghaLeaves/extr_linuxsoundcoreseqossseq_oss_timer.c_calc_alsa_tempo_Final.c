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
struct seq_oss_timer {int tempo; int oss_tempo; int /*<<< orphan*/  oss_timebase; int /*<<< orphan*/  ppq; } ;

/* Variables and functions */

__attribute__((used)) static void
calc_alsa_tempo(struct seq_oss_timer *timer)
{
	timer->tempo = (60 * 1000000) / timer->oss_tempo;
	timer->ppq = timer->oss_timebase;
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
          int _len_timer0 = 1;
          struct seq_oss_timer * timer = (struct seq_oss_timer *) malloc(_len_timer0*sizeof(struct seq_oss_timer));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
            timer[_i0].tempo = ((-2 * (next_i()%2)) + 1) * next_i();
        timer[_i0].oss_tempo = ((-2 * (next_i()%2)) + 1) * next_i();
        timer[_i0].oss_timebase = ((-2 * (next_i()%2)) + 1) * next_i();
        timer[_i0].ppq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_alsa_tempo(timer);
          free(timer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
