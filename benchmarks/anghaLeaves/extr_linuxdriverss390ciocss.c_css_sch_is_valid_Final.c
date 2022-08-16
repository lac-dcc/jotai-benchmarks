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
struct TYPE_2__ {scalar_t__ st; int /*<<< orphan*/  w; int /*<<< orphan*/  dnv; } ;
struct schib {TYPE_1__ pmcw; } ;

/* Variables and functions */
 scalar_t__ SUBCHANNEL_TYPE_IO ; 
 scalar_t__ SUBCHANNEL_TYPE_MSG ; 

int css_sch_is_valid(struct schib *schib)
{
	if ((schib->pmcw.st == SUBCHANNEL_TYPE_IO) && !schib->pmcw.dnv)
		return 0;
	if ((schib->pmcw.st == SUBCHANNEL_TYPE_MSG) && !schib->pmcw.w)
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
          int _len_schib0 = 1;
          struct schib * schib = (struct schib *) malloc(_len_schib0*sizeof(struct schib));
          for(int _i0 = 0; _i0 < _len_schib0; _i0++) {
            schib[_i0].pmcw.st = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.w = ((-2 * (next_i()%2)) + 1) * next_i();
        schib[_i0].pmcw.dnv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = css_sch_is_valid(schib);
          printf("%d\n", benchRet); 
          free(schib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
