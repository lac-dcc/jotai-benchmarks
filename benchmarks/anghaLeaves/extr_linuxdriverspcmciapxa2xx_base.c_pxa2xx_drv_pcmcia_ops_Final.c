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
       1            big-arr-10x\n\
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
struct pcmcia_low_level {int /*<<< orphan*/  set_timing; } ;

/* Variables and functions */
 int /*<<< orphan*/  pxa2xx_pcmcia_set_timing ; 

void pxa2xx_drv_pcmcia_ops(struct pcmcia_low_level *ops)
{
	/* Provide our PXA2xx specific timing routines. */
	ops->set_timing  = pxa2xx_pcmcia_set_timing;
#ifdef CONFIG_CPU_FREQ
	ops->frequency_change = pxa2xx_pcmcia_frequency_change;
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
            ops[_i0].set_timing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pxa2xx_drv_pcmcia_ops(ops);
          free(ops);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ops0 = 100;
          struct pcmcia_low_level * ops = (struct pcmcia_low_level *) malloc(_len_ops0*sizeof(struct pcmcia_low_level));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].set_timing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pxa2xx_drv_pcmcia_ops(ops);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
