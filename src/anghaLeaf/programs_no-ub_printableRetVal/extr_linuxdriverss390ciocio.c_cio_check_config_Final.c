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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_4__ {scalar_t__ intparm; scalar_t__ mbi; scalar_t__ isc; scalar_t__ ena; scalar_t__ mme; scalar_t__ mp; scalar_t__ csense; scalar_t__ mbfc; scalar_t__ mba; } ;
struct subchannel {TYPE_2__ config; } ;
struct TYPE_3__ {scalar_t__ intparm; scalar_t__ mbi; scalar_t__ isc; scalar_t__ ena; scalar_t__ mme; scalar_t__ mp; scalar_t__ csense; scalar_t__ mbfc; } ;
struct schib {scalar_t__ mba; TYPE_1__ pmcw; } ;

/* Variables and functions */

__attribute__((used)) static int cio_check_config(struct subchannel *sch, struct schib *schib)
{
	return (schib->pmcw.intparm == sch->config.intparm) &&
		(schib->pmcw.mbi == sch->config.mbi) &&
		(schib->pmcw.isc == sch->config.isc) &&
		(schib->pmcw.ena == sch->config.ena) &&
		(schib->pmcw.mme == sch->config.mme) &&
		(schib->pmcw.mp == sch->config.mp) &&
		(schib->pmcw.csense == sch->config.csense) &&
		(schib->pmcw.mbfc == sch->config.mbfc) &&
		(!sch->config.mbfc || (schib->mba == sch->config.mba));
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

    // big-arr
    case 0:
    {
          int _len_sch0 = 1;
          struct subchannel * sch = (struct subchannel *) malloc(_len_sch0*sizeof(struct subchannel));
          for(int _i0 = 0; _i0 < _len_sch0; _i0++) {
            sch->config.intparm = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.mbi = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.isc = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.ena = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.mme = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.mp = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.csense = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.mbfc = ((-2 * (next_i()%2)) + 1) * next_i();
        sch->config.mba = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_schib0 = 1;
          struct schib * schib = (struct schib *) malloc(_len_schib0*sizeof(struct schib));
          for(int _i0 = 0; _i0 < _len_schib0; _i0++) {
            schib->mba = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.intparm = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.mbi = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.isc = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.ena = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.mme = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.mp = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.csense = ((-2 * (next_i()%2)) + 1) * next_i();
        schib->pmcw.mbfc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cio_check_config(sch,schib);
          printf("%d\n", benchRet); 
          free(sch);
          free(schib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
