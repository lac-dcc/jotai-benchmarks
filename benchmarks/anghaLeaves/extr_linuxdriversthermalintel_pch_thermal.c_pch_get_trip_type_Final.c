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
struct thermal_zone_device {struct pch_thermal_device* devdata; } ;
struct pch_thermal_device {int crt_trip_id; int hot_trip_id; int psv_trip_id; } ;
typedef  enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;

/* Variables and functions */
 int EINVAL ; 
 int THERMAL_TRIP_CRITICAL ; 
 int THERMAL_TRIP_HOT ; 
 int THERMAL_TRIP_PASSIVE ; 

__attribute__((used)) static int pch_get_trip_type(struct thermal_zone_device *tzd, int trip,
			     enum thermal_trip_type *type)
{
	struct pch_thermal_device *ptd = tzd->devdata;

	if (ptd->crt_trip_id == trip)
		*type = THERMAL_TRIP_CRITICAL;
	else if (ptd->hot_trip_id == trip)
		*type = THERMAL_TRIP_HOT;
	else if (ptd->psv_trip_id == trip)
		*type = THERMAL_TRIP_PASSIVE;
	else
		return -EINVAL;

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
          int trip = 100;
          int _len_tzd0 = 1;
          struct thermal_zone_device * tzd = (struct thermal_zone_device *) malloc(_len_tzd0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tzd0; _i0++) {
              int _len_tzd__i0__devdata0 = 1;
          tzd[_i0].devdata = (struct pch_thermal_device *) malloc(_len_tzd__i0__devdata0*sizeof(struct pch_thermal_device));
          for(int _j0 = 0; _j0 < _len_tzd__i0__devdata0; _j0++) {
            tzd[_i0].devdata->crt_trip_id = ((-2 * (next_i()%2)) + 1) * next_i();
        tzd[_i0].devdata->hot_trip_id = ((-2 * (next_i()%2)) + 1) * next_i();
        tzd[_i0].devdata->psv_trip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_type0 = 1;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
          int benchRet = pch_get_trip_type(tzd,trip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tzd0; _aux++) {
          free(tzd[_aux].devdata);
          }
          free(tzd);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
