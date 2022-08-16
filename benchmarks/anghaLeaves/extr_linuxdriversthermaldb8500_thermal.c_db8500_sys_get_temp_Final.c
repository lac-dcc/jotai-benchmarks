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
struct thermal_zone_device {struct db8500_thermal_zone* devdata; } ;
struct db8500_thermal_zone {int cur_temp_pseudo; } ;

/* Variables and functions */

__attribute__((used)) static int db8500_sys_get_temp(struct thermal_zone_device *thermal, int *temp)
{
	struct db8500_thermal_zone *pzone = thermal->devdata;

	/*
	 * TODO: There is no PRCMU interface to get temperature data currently,
	 * so a pseudo temperature is returned , it works for thermal framework
	 * and this will be fixed when the PRCMU interface is available.
	 */
	*temp = pzone->cur_temp_pseudo;

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
          int _len_thermal0 = 1;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct db8500_thermal_zone *) malloc(_len_thermal__i0__devdata0*sizeof(struct db8500_thermal_zone));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
            thermal[_i0].devdata->cur_temp_pseudo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_temp0 = 1;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = db8500_sys_get_temp(thermal,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(temp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
