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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct apm_power_info {int battery_life; int time; int /*<<< orphan*/  battery_flag; int /*<<< orphan*/  battery_status; void* ac_line_status; int /*<<< orphan*/  units; } ;
struct TYPE_2__ {int flags; int charge; int max_charge; scalar_t__ amperage; } ;

/* Variables and functions */
 void* APM_AC_OFFLINE ; 
 void* APM_AC_ONLINE ; 
 int /*<<< orphan*/  APM_BATTERY_FLAG_CHARGING ; 
 int /*<<< orphan*/  APM_BATTERY_FLAG_CRITICAL ; 
 int /*<<< orphan*/  APM_BATTERY_FLAG_HIGH ; 
 int /*<<< orphan*/  APM_BATTERY_FLAG_LOW ; 
 int /*<<< orphan*/  APM_BATTERY_FLAG_UNKNOWN ; 
 int /*<<< orphan*/  APM_BATTERY_STATUS_CHARGING ; 
 int /*<<< orphan*/  APM_BATTERY_STATUS_CRITICAL ; 
 int /*<<< orphan*/  APM_BATTERY_STATUS_HIGH ; 
 int /*<<< orphan*/  APM_BATTERY_STATUS_LOW ; 
 int /*<<< orphan*/  APM_BATTERY_STATUS_UNKNOWN ; 
 int APM_CRITICAL ; 
 int APM_LOW ; 
 int /*<<< orphan*/  APM_UNITS_MINS ; 
 int PMU_BATT_CHARGING ; 
 int PMU_BATT_PRESENT ; 
 unsigned long PMU_BATT_TYPE_MASK ; 
 unsigned long PMU_BATT_TYPE_SMART ; 
 int PMU_PWR_AC_PRESENT ; 
 TYPE_1__* pmu_batteries ; 
 int pmu_battery_count ; 
 int pmu_power_flags ; 

__attribute__((used)) static void pmu_apm_get_power_status(struct apm_power_info *info)
{
	int percentage = -1;
	int batteries = 0;
	int time_units = -1;
	int real_count = 0;
	int i;
	char charging = 0;
	long charge = -1;
	long amperage = 0;
	unsigned long btype = 0;

	info->battery_status = APM_BATTERY_STATUS_UNKNOWN;
	info->battery_flag = APM_BATTERY_FLAG_UNKNOWN;
	info->units = APM_UNITS_MINS;

	if (pmu_power_flags & PMU_PWR_AC_PRESENT)
		info->ac_line_status = APM_AC_ONLINE;
	else
		info->ac_line_status = APM_AC_OFFLINE;

	for (i=0; i<pmu_battery_count; i++) {
		if (pmu_batteries[i].flags & PMU_BATT_PRESENT) {
			batteries++;
			if (percentage < 0)
				percentage = 0;
			if (charge < 0)
				charge = 0;
			percentage += (pmu_batteries[i].charge * 100) /
				pmu_batteries[i].max_charge;
			charge += pmu_batteries[i].charge;
			amperage += pmu_batteries[i].amperage;
			if (btype == 0)
				btype = (pmu_batteries[i].flags & PMU_BATT_TYPE_MASK);
			real_count++;
			if ((pmu_batteries[i].flags & PMU_BATT_CHARGING))
				charging++;
		}
	}
	if (batteries == 0)
		info->ac_line_status = APM_AC_ONLINE;

	if (real_count) {
		if (amperage < 0) {
			if (btype == PMU_BATT_TYPE_SMART)
				time_units = (charge * 59) / (amperage * -1);
			else
				time_units = (charge * 16440) / (amperage * -60);
		}
		percentage /= real_count;
		if (charging > 0) {
			info->battery_status = APM_BATTERY_STATUS_CHARGING;
			info->battery_flag = APM_BATTERY_FLAG_CHARGING;
		} else if (percentage <= APM_CRITICAL) {
			info->battery_status = APM_BATTERY_STATUS_CRITICAL;
			info->battery_flag = APM_BATTERY_FLAG_CRITICAL;
		} else if (percentage <= APM_LOW) {
			info->battery_status = APM_BATTERY_STATUS_LOW;
			info->battery_flag = APM_BATTERY_FLAG_LOW;
		} else {
			info->battery_status = APM_BATTERY_STATUS_HIGH;
			info->battery_flag = APM_BATTERY_FLAG_HIGH;
		}
	}

	info->battery_life = percentage;
	info->time = time_units;
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
            info[_i0].battery_life = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_status = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmu_apm_get_power_status(info);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct apm_power_info * info = (struct apm_power_info *) malloc(_len_info0*sizeof(struct apm_power_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].battery_life = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_status = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmu_apm_get_power_status(info);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct apm_power_info * info = (struct apm_power_info *) malloc(_len_info0*sizeof(struct apm_power_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].battery_life = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].battery_status = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmu_apm_get_power_status(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
