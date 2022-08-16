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
struct nvkm_therm {TYPE_1__* fan; } ;
struct TYPE_4__ {int min_duty; int max_duty; } ;
struct TYPE_3__ {TYPE_2__ bios; } ;

/* Variables and functions */

__attribute__((used)) static void
nvkm_therm_fan_safety_checks(struct nvkm_therm *therm)
{
	if (therm->fan->bios.min_duty > 100)
		therm->fan->bios.min_duty = 100;
	if (therm->fan->bios.max_duty > 100)
		therm->fan->bios.max_duty = 100;

	if (therm->fan->bios.min_duty > therm->fan->bios.max_duty)
		therm->fan->bios.min_duty = therm->fan->bios.max_duty;
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
          int _len_therm0 = 1;
          struct nvkm_therm * therm = (struct nvkm_therm *) malloc(_len_therm0*sizeof(struct nvkm_therm));
          for(int _i0 = 0; _i0 < _len_therm0; _i0++) {
              int _len_therm__i0__fan0 = 1;
          therm[_i0].fan = (struct TYPE_3__ *) malloc(_len_therm__i0__fan0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_therm__i0__fan0; _j0++) {
            therm[_i0].fan->bios.min_duty = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].fan->bios.max_duty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nvkm_therm_fan_safety_checks(therm);
          for(int _aux = 0; _aux < _len_therm0; _aux++) {
          free(therm[_aux].fan);
          }
          free(therm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
