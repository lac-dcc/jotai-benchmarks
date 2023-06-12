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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct db8500_thermal_zone {int trend; } ;
typedef  enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;

/* Variables and functions */

__attribute__((used)) static int db8500_sys_get_trend(struct thermal_zone_device *thermal,
		int trip, enum thermal_trend *trend)
{
	struct db8500_thermal_zone *pzone = thermal->devdata;

	*trend = pzone->trend;

	return 0;
}

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
          int trip = 100;
        
          int _len_thermal0 = 1;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct db8500_thermal_zone *) malloc(_len_thermal__i0__devdata0*sizeof(struct db8500_thermal_zone));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
              thermal[_i0].devdata->trend = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_trend0 = 1;
          enum thermal_trend * trend = (enum thermal_trend *) malloc(_len_trend0*sizeof(enum thermal_trend));
          for(int _i0 = 0; _i0 < _len_trend0; _i0++) {
            trend[_i0] = 0;
          }
        
          int benchRet = db8500_sys_get_trend(thermal,trip,trend);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(trend);
        
        break;
    }
    // big-arr
    case 1:
    {
          int trip = 255;
        
          int _len_thermal0 = 65025;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct db8500_thermal_zone *) malloc(_len_thermal__i0__devdata0*sizeof(struct db8500_thermal_zone));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
              thermal[_i0].devdata->trend = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_trend0 = 65025;
          enum thermal_trend * trend = (enum thermal_trend *) malloc(_len_trend0*sizeof(enum thermal_trend));
          for(int _i0 = 0; _i0 < _len_trend0; _i0++) {
            trend[_i0] = 0;
          }
        
          int benchRet = db8500_sys_get_trend(thermal,trip,trend);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(trend);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int trip = 10;
        
          int _len_thermal0 = 100;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct db8500_thermal_zone *) malloc(_len_thermal__i0__devdata0*sizeof(struct db8500_thermal_zone));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
              thermal[_i0].devdata->trend = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_trend0 = 100;
          enum thermal_trend * trend = (enum thermal_trend *) malloc(_len_trend0*sizeof(enum thermal_trend));
          for(int _i0 = 0; _i0 < _len_trend0; _i0++) {
            trend[_i0] = 0;
          }
        
          int benchRet = db8500_sys_get_trend(thermal,trip,trend);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(trend);
        
        break;
    }
    // empty
    case 3:
    {
          int trip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_thermal0 = 1;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct db8500_thermal_zone *) malloc(_len_thermal__i0__devdata0*sizeof(struct db8500_thermal_zone));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
              thermal[_i0].devdata->trend = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_trend0 = 1;
          enum thermal_trend * trend = (enum thermal_trend *) malloc(_len_trend0*sizeof(enum thermal_trend));
          for(int _i0 = 0; _i0 < _len_trend0; _i0++) {
            trend[_i0] = 0;
          }
        
          int benchRet = db8500_sys_get_trend(thermal,trip,trend);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(trend);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
