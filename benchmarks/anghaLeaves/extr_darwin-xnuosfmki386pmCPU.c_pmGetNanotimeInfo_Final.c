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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ generation; int /*<<< orphan*/  shift; int /*<<< orphan*/  scale; int /*<<< orphan*/  ns_base; int /*<<< orphan*/  tsc_base; } ;
typedef  TYPE_1__ pm_rtc_nanotime_t ;
struct TYPE_5__ {scalar_t__ generation; int /*<<< orphan*/  shift; int /*<<< orphan*/  scale; int /*<<< orphan*/  ns_base; int /*<<< orphan*/  tsc_base; } ;

/* Variables and functions */
 TYPE_3__ pal_rtc_nanotime_info ; 

__attribute__((used)) static void
pmGetNanotimeInfo(pm_rtc_nanotime_t *rtc_nanotime)
{
	/*
	 * Make sure that nanotime didn't change while we were reading it.
	 */
	do {
		rtc_nanotime->generation = pal_rtc_nanotime_info.generation; /* must be first */
		rtc_nanotime->tsc_base = pal_rtc_nanotime_info.tsc_base;
		rtc_nanotime->ns_base = pal_rtc_nanotime_info.ns_base;
		rtc_nanotime->scale = pal_rtc_nanotime_info.scale;
		rtc_nanotime->shift = pal_rtc_nanotime_info.shift;
	} while(pal_rtc_nanotime_info.generation != 0
		&& rtc_nanotime->generation != pal_rtc_nanotime_info.generation);
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
          int _len_rtc_nanotime0 = 1;
          struct TYPE_4__ * rtc_nanotime = (struct TYPE_4__ *) malloc(_len_rtc_nanotime0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_rtc_nanotime0; _i0++) {
            rtc_nanotime[_i0].generation = ((-2 * (next_i()%2)) + 1) * next_i();
        rtc_nanotime[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        rtc_nanotime[_i0].scale = ((-2 * (next_i()%2)) + 1) * next_i();
        rtc_nanotime[_i0].ns_base = ((-2 * (next_i()%2)) + 1) * next_i();
        rtc_nanotime[_i0].tsc_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmGetNanotimeInfo(rtc_nanotime);
          free(rtc_nanotime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
