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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int temp; int hysteresis; } ;
struct TYPE_8__ {int temp; int hysteresis; } ;
struct TYPE_7__ {int temp; int hysteresis; } ;
struct TYPE_6__ {int temp; int hysteresis; } ;
struct TYPE_10__ {TYPE_4__ thrs_shutdown; TYPE_3__ thrs_critical; TYPE_2__ thrs_down_clock; TYPE_1__ thrs_fan_boost; scalar_t__ offset_constant; } ;
struct nvkm_therm {TYPE_5__ bios_sensor; } ;

/* Variables and functions */

__attribute__((used)) static void
nvkm_therm_temp_set_defaults(struct nvkm_therm *therm)
{
	therm->bios_sensor.offset_constant = 0;

	therm->bios_sensor.thrs_fan_boost.temp = 90;
	therm->bios_sensor.thrs_fan_boost.hysteresis = 3;

	therm->bios_sensor.thrs_down_clock.temp = 95;
	therm->bios_sensor.thrs_down_clock.hysteresis = 3;

	therm->bios_sensor.thrs_critical.temp = 105;
	therm->bios_sensor.thrs_critical.hysteresis = 5;

	therm->bios_sensor.thrs_shutdown.temp = 135;
	therm->bios_sensor.thrs_shutdown.hysteresis = 5; /*not that it matters */
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
            therm[_i0].bios_sensor.thrs_shutdown.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.thrs_shutdown.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.thrs_critical.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.thrs_critical.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.thrs_down_clock.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.thrs_down_clock.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.thrs_fan_boost.temp = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.thrs_fan_boost.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        therm[_i0].bios_sensor.offset_constant = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvkm_therm_temp_set_defaults(therm);
          free(therm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
