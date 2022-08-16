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
struct acpi_battery {TYPE_2__* device; } ;
struct TYPE_3__ {int battery_present; } ;
struct TYPE_4__ {TYPE_1__ status; } ;

/* Variables and functions */

__attribute__((used)) static inline int acpi_battery_present(struct acpi_battery *battery)
{
	return battery->device->status.battery_present;
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
              int _len_battery__i0__device0 = 1;
          battery[_i0].device = (struct TYPE_4__ *) malloc(_len_battery__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_battery__i0__device0; _j0++) {
            battery[_i0].device->status.battery_present = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acpi_battery_present(battery);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_battery0; _aux++) {
          free(battery[_aux].device);
          }
          free(battery);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
