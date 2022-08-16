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
struct pcmcia_low_level {int /*<<< orphan*/  show_timing; int /*<<< orphan*/  set_timing; scalar_t__ get_timing; } ;

/* Variables and functions */
 scalar_t__ sa1100_pcmcia_default_mecr_timing ; 
 int /*<<< orphan*/  sa1100_pcmcia_set_timing ; 
 int /*<<< orphan*/  sa1100_pcmcia_show_timing ; 

void sa11xx_drv_pcmcia_ops(struct pcmcia_low_level *ops)
{
	/*
	 * set default MECR calculation if the board specific
	 * code did not specify one...
	 */
	if (!ops->get_timing)
		ops->get_timing = sa1100_pcmcia_default_mecr_timing;

	/* Provide our SA11x0 specific timing routines. */
	ops->set_timing  = sa1100_pcmcia_set_timing;
	ops->show_timing = sa1100_pcmcia_show_timing;
#ifdef CONFIG_CPU_FREQ
	ops->frequency_change = sa1100_pcmcia_frequency_change;
#endif
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
          int _len_ops0 = 1;
          struct pcmcia_low_level * ops = (struct pcmcia_low_level *) malloc(_len_ops0*sizeof(struct pcmcia_low_level));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].show_timing = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].set_timing = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_timing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sa11xx_drv_pcmcia_ops(ops);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
