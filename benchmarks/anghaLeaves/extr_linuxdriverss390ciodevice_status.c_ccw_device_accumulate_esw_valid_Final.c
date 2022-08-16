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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int stctl; int actl; int /*<<< orphan*/  eswf; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;

/* Variables and functions */
 int SCSW_ACTL_SUSPENDED ; 
 int SCSW_STCTL_INTER_STATUS ; 
 int SCSW_STCTL_STATUS_PEND ; 

__attribute__((used)) static int
ccw_device_accumulate_esw_valid(struct irb *irb)
{
	if (!irb->scsw.cmd.eswf &&
	    (irb->scsw.cmd.stctl == SCSW_STCTL_STATUS_PEND))
		return 0;
	if (irb->scsw.cmd.stctl ==
			(SCSW_STCTL_INTER_STATUS|SCSW_STCTL_STATUS_PEND) &&
	    !(irb->scsw.cmd.actl & SCSW_ACTL_SUSPENDED))
		return 0;
	return 1;
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
          int _len_irb0 = 1;
          struct irb * irb = (struct irb *) malloc(_len_irb0*sizeof(struct irb));
          for(int _i0 = 0; _i0 < _len_irb0; _i0++) {
            irb[_i0].scsw.cmd.stctl = ((-2 * (next_i()%2)) + 1) * next_i();
        irb[_i0].scsw.cmd.actl = ((-2 * (next_i()%2)) + 1) * next_i();
        irb[_i0].scsw.cmd.eswf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ccw_device_accumulate_esw_valid(irb);
          printf("%d\n", benchRet); 
          free(irb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
