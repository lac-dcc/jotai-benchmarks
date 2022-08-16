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
struct TYPE_4__ {int /*<<< orphan*/  mba; scalar_t__ mbfc; int /*<<< orphan*/  csense; int /*<<< orphan*/  mp; int /*<<< orphan*/  mme; int /*<<< orphan*/  ena; int /*<<< orphan*/  isc; int /*<<< orphan*/  mbi; int /*<<< orphan*/  intparm; } ;
struct subchannel {TYPE_2__ config; } ;
struct TYPE_3__ {scalar_t__ mbfc; int /*<<< orphan*/  csense; int /*<<< orphan*/  mp; int /*<<< orphan*/  mme; int /*<<< orphan*/  ena; int /*<<< orphan*/  isc; int /*<<< orphan*/  mbi; int /*<<< orphan*/  intparm; } ;
struct schib {int /*<<< orphan*/  mba; TYPE_1__ pmcw; } ;

/* Variables and functions */

__attribute__((used)) static void cio_apply_config(struct subchannel *sch, struct schib *schib)
{
	schib->pmcw.intparm = sch->config.intparm;
	schib->pmcw.mbi = sch->config.mbi;
	schib->pmcw.isc = sch->config.isc;
	schib->pmcw.ena = sch->config.ena;
	schib->pmcw.mme = sch->config.mme;
	schib->pmcw.mp = sch->config.mp;
	schib->pmcw.csense = sch->config.csense;
	schib->pmcw.mbfc = sch->config.mbfc;
	if (sch->config.mbfc)
		schib->mba = sch->config.mba;
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
          int _len_sch0 = 1;
          struct subchannel * sch = (struct subchannel *) malloc(_len_sch0*sizeof(struct subchannel));
          for(int _i0 = 0; _i0 < _len_sch0; _i0++) {
            sch[_i0].config.mba = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.mbfc = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.csense = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.mp = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.mme = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.ena = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.isc = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.mbi = ((-2 * (next_i()%2)) + 1) * next_i();
        sch[_i0].config.intparm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_schib0 = 1;
          struct schib * schib = (struct schib *) malloc(_len_schib0*sizeof(struct schib));
          for(int _i0 = 0; _i0 < _len_schib0; _i0++) {
            schib[_i0].mba = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.mbfc = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.csense = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.mp = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.mme = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.ena = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.isc = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.mbi = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.intparm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cio_apply_config(sch,schib);
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
