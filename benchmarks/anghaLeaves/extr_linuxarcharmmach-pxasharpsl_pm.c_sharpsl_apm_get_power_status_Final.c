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
struct apm_power_info {int battery_status; int battery_flag; int /*<<< orphan*/  battery_life; int /*<<< orphan*/  ac_line_status; } ;
struct TYPE_3__ {int mainbat_status; int /*<<< orphan*/  mainbat_percent; int /*<<< orphan*/  ac_status; } ;
struct TYPE_4__ {scalar_t__ charge_mode; TYPE_1__ battstat; } ;

/* Variables and functions */
 int APM_BATTERY_STATUS_CHARGING ; 
 scalar_t__ CHRG_ON ; 
 TYPE_2__ sharpsl_pm ; 

__attribute__((used)) static void sharpsl_apm_get_power_status(struct apm_power_info *info)
{
	info->ac_line_status = sharpsl_pm.battstat.ac_status;

	if (sharpsl_pm.charge_mode == CHRG_ON)
		info->battery_status = APM_BATTERY_STATUS_CHARGING;
	else
		info->battery_status = sharpsl_pm.battstat.mainbat_status;

	info->battery_flag = (1 << info->battery_status);
	info->battery_life = sharpsl_pm.battstat.mainbat_percent;
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
          int _len_info0 = 1;
          struct apm_power_info * info = (struct apm_power_info *) malloc(_len_info0*sizeof(struct apm_power_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].battery_status = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_life = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].ac_line_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sharpsl_apm_get_power_status(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
