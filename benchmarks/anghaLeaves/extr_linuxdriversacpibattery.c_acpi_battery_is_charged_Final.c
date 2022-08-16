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

/* Type definitions */
struct acpi_battery {scalar_t__ state; scalar_t__ capacity_now; scalar_t__ full_charge_capacity; scalar_t__ design_capacity; } ;

/* Variables and functions */
 scalar_t__ ACPI_BATTERY_VALUE_UNKNOWN ; 

__attribute__((used)) static int acpi_battery_is_charged(struct acpi_battery *battery)
{
	/* charging, discharging or critical low */
	if (battery->state != 0)
		return 0;

	/* battery not reporting charge */
	if (battery->capacity_now == ACPI_BATTERY_VALUE_UNKNOWN ||
	    battery->capacity_now == 0)
		return 0;

	/* good batteries update full_charge as the batteries degrade */
	if (battery->full_charge_capacity == battery->capacity_now)
		return 1;

	/* fallback to using design values for broken batteries */
	if (battery->design_capacity == battery->capacity_now)
		return 1;

	/* we don't do any sort of metric based on percentages */
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
          int _len_battery0 = 1;
          struct acpi_battery * battery = (struct acpi_battery *) malloc(_len_battery0*sizeof(struct acpi_battery));
          for(int _i0 = 0; _i0 < _len_battery0; _i0++) {
            battery[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        battery[_i0].capacity_now = ((-2 * (next_i()%2)) + 1) * next_i();
        battery[_i0].full_charge_capacity = ((-2 * (next_i()%2)) + 1) * next_i();
        battery[_i0].design_capacity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_battery_is_charged(battery);
          printf("%d\n", benchRet); 
          free(battery);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
