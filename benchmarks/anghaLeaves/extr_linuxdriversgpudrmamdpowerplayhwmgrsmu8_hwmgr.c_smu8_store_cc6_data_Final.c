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
typedef  scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ cpu_pstate_separation_time; int cpu_cc6_disable; int cpu_pstate_disable; int nb_pstate_switch_disable; int cc6_setting_changed; } ;
struct smu8_hwmgr {TYPE_1__ cc6_settings; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;

/* Variables and functions */

__attribute__((used)) static int smu8_store_cc6_data(struct pp_hwmgr *hwmgr, uint32_t separation_time,
			bool cc6_disable, bool pstate_disable, bool pstate_switch_disable)
{
	struct smu8_hwmgr *hw_data = hwmgr->backend;

	if (separation_time !=
	    hw_data->cc6_settings.cpu_pstate_separation_time ||
	    cc6_disable != hw_data->cc6_settings.cpu_cc6_disable ||
	    pstate_disable != hw_data->cc6_settings.cpu_pstate_disable ||
	    pstate_switch_disable != hw_data->cc6_settings.nb_pstate_switch_disable) {

		hw_data->cc6_settings.cc6_setting_changed = true;

		hw_data->cc6_settings.cpu_pstate_separation_time =
			separation_time;
		hw_data->cc6_settings.cpu_cc6_disable =
			cc6_disable;
		hw_data->cc6_settings.cpu_pstate_disable =
			pstate_disable;
		hw_data->cc6_settings.nb_pstate_switch_disable =
			pstate_switch_disable;

	}

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
          long separation_time = 100;
          int cc6_disable = 100;
          int pstate_disable = 100;
          int pstate_switch_disable = 100;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct smu8_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct smu8_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->cc6_settings.cpu_pstate_separation_time = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->cc6_settings.cpu_cc6_disable = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->cc6_settings.cpu_pstate_disable = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->cc6_settings.nb_pstate_switch_disable = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->cc6_settings.cc6_setting_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu8_store_cc6_data(hwmgr,separation_time,cc6_disable,pstate_disable,pstate_switch_disable);
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
