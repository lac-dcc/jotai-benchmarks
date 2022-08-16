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
struct cyapa {scalar_t__ gen; scalar_t__ operational; } ;

/* Variables and functions */
 scalar_t__ CYAPA_GEN3 ; 

__attribute__((used)) static bool cyapa_gen3_irq_cmd_handler(struct cyapa *cyapa)
{
	/* Not gen3 irq command response, skip for continue. */
	if (cyapa->gen != CYAPA_GEN3)
		return true;

	if (cyapa->operational)
		return true;

	/*
	 * Driver in detecting or other interface function processing,
	 * so, stop cyapa_gen3_irq_handler to continue process to
	 * avoid unwanted to error detecting and processing.
	 *
	 * And also, avoid the periodically asserted interrupts to be processed
	 * as touch inputs when gen3 failed to launch into application mode,
	 * which will cause gen3 stays in bootloader mode.
	 */
	return false;
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
          int _len_cyapa0 = 1;
          struct cyapa * cyapa = (struct cyapa *) malloc(_len_cyapa0*sizeof(struct cyapa));
          for(int _i0 = 0; _i0 < _len_cyapa0; _i0++) {
            cyapa[_i0].gen = ((-2 * (next_i()%2)) + 1) * next_i();
        cyapa[_i0].operational = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyapa_gen3_irq_cmd_handler(cyapa);
          printf("%d\n", benchRet); 
          free(cyapa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
