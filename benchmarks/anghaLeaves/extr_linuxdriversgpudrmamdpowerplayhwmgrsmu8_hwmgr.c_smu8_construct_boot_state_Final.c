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
typedef  scalar_t__ uint8_t ;
struct TYPE_4__ {int allowGnbSlow; scalar_t__ vce_wm; scalar_t__ display_wm; scalar_t__ numSIMDToPowerDown; scalar_t__ hysteresis_up; scalar_t__ forceNBPstate; scalar_t__ ssDividerIndex; scalar_t__ dsDividerIndex; scalar_t__ vddcIndex; int /*<<< orphan*/  engineClock; } ;
struct TYPE_3__ {scalar_t__ bootup_nb_voltage_index; int /*<<< orphan*/  bootup_engine_clock; } ;
struct smu8_hwmgr {TYPE_2__ boot_power_level; TYPE_1__ sys_info; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;

/* Variables and functions */

__attribute__((used)) static int smu8_construct_boot_state(struct pp_hwmgr *hwmgr)
{
	struct smu8_hwmgr *data = hwmgr->backend;

	data->boot_power_level.engineClock =
				data->sys_info.bootup_engine_clock;

	data->boot_power_level.vddcIndex =
			(uint8_t)data->sys_info.bootup_nb_voltage_index;

	data->boot_power_level.dsDividerIndex = 0;
	data->boot_power_level.ssDividerIndex = 0;
	data->boot_power_level.allowGnbSlow = 1;
	data->boot_power_level.forceNBPstate = 0;
	data->boot_power_level.hysteresis_up = 0;
	data->boot_power_level.numSIMDToPowerDown = 0;
	data->boot_power_level.display_wm = 0;
	data->boot_power_level.vce_wm = 0;

	return 0;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct smu8_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct smu8_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->boot_power_level.allowGnbSlow = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.vce_wm = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.display_wm = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.numSIMDToPowerDown = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.hysteresis_up = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.forceNBPstate = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.ssDividerIndex = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.dsDividerIndex = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.vddcIndex = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->boot_power_level.engineClock = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->sys_info.bootup_nb_voltage_index = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->sys_info.bootup_engine_clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu8_construct_boot_state(hwmgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].backend);
          }
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
