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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int as; int ps; int us; scalar_t__ sec; scalar_t__ min; scalar_t__ hour; int day; int month; } ;
typedef  TYPE_1__ npy_datetimestruct ;
typedef  int /*<<< orphan*/  NPY_DATETIMEUNIT ;

/* Variables and functions */
 int /*<<< orphan*/  NPY_FR_D ; 
 int /*<<< orphan*/  NPY_FR_M ; 
 int /*<<< orphan*/  NPY_FR_Y ; 
 int /*<<< orphan*/  NPY_FR_as ; 
 int /*<<< orphan*/  NPY_FR_fs ; 
 int /*<<< orphan*/  NPY_FR_h ; 
 int /*<<< orphan*/  NPY_FR_m ; 
 int /*<<< orphan*/  NPY_FR_ms ; 
 int /*<<< orphan*/  NPY_FR_ns ; 
 int /*<<< orphan*/  NPY_FR_ps ; 
 int /*<<< orphan*/  NPY_FR_s ; 
 int /*<<< orphan*/  NPY_FR_us ; 

__attribute__((used)) static NPY_DATETIMEUNIT
lossless_unit_from_datetimestruct(npy_datetimestruct *dts)
{
    if (dts->as % 1000 != 0) {
        return NPY_FR_as;
    }
    else if (dts->as != 0) {
        return NPY_FR_fs;
    }
    else if (dts->ps % 1000 != 0) {
        return NPY_FR_ps;
    }
    else if (dts->ps != 0) {
        return NPY_FR_ns;
    }
    else if (dts->us % 1000 != 0) {
        return NPY_FR_us;
    }
    else if (dts->us != 0) {
        return NPY_FR_ms;
    }
    else if (dts->sec != 0) {
        return NPY_FR_s;
    }
    else if (dts->min != 0) {
        return NPY_FR_m;
    }
    else if (dts->hour != 0) {
        return NPY_FR_h;
    }
    else if (dts->day != 1) {
        return NPY_FR_D;
    }
    else if (dts->month != 1) {
        return NPY_FR_M;
    }
    else {
        return NPY_FR_Y;
    }
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
          int _len_dts0 = 1;
          struct TYPE_3__ * dts = (struct TYPE_3__ *) malloc(_len_dts0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dts0; _i0++) {
            dts[_i0].as = ((-2 * (next_i()%2)) + 1) * next_i();
        dts[_i0].ps = ((-2 * (next_i()%2)) + 1) * next_i();
        dts[_i0].us = ((-2 * (next_i()%2)) + 1) * next_i();
        dts[_i0].sec = ((-2 * (next_i()%2)) + 1) * next_i();
        dts[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        dts[_i0].hour = ((-2 * (next_i()%2)) + 1) * next_i();
        dts[_i0].day = ((-2 * (next_i()%2)) + 1) * next_i();
        dts[_i0].month = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lossless_unit_from_datetimestruct(dts);
          printf("%d\n", benchRet); 
          free(dts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
