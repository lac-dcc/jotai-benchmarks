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

/* Type definitions */
struct thermal_zone_device {struct soc_sensor_entry* devdata; } ;
struct soc_sensor_entry {int mode; } ;
typedef  enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;

/* Variables and functions */

__attribute__((used)) static int sys_get_mode(struct thermal_zone_device *tzd,
				enum thermal_device_mode *mode)
{
	struct soc_sensor_entry *aux_entry = tzd->devdata;
	*mode = aux_entry->mode;
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
          int _len_tzd0 = 1;
          struct thermal_zone_device * tzd = (struct thermal_zone_device *) malloc(_len_tzd0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tzd0; _i0++) {
              int _len_tzd__i0__devdata0 = 1;
          tzd[_i0].devdata = (struct soc_sensor_entry *) malloc(_len_tzd__i0__devdata0*sizeof(struct soc_sensor_entry));
          for(int _j0 = 0; _j0 < _len_tzd__i0__devdata0; _j0++) {
            tzd[_i0].devdata->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mode0 = 1;
          enum thermal_device_mode * mode = (enum thermal_device_mode *) malloc(_len_mode0*sizeof(enum thermal_device_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
          int benchRet = sys_get_mode(tzd,mode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tzd0; _aux++) {
          free(tzd[_aux].devdata);
          }
          free(tzd);
          free(mode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tzd0 = 65025;
          struct thermal_zone_device * tzd = (struct thermal_zone_device *) malloc(_len_tzd0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tzd0; _i0++) {
              int _len_tzd__i0__devdata0 = 1;
          tzd[_i0].devdata = (struct soc_sensor_entry *) malloc(_len_tzd__i0__devdata0*sizeof(struct soc_sensor_entry));
          for(int _j0 = 0; _j0 < _len_tzd__i0__devdata0; _j0++) {
            tzd[_i0].devdata->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mode0 = 65025;
          enum thermal_device_mode * mode = (enum thermal_device_mode *) malloc(_len_mode0*sizeof(enum thermal_device_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
          int benchRet = sys_get_mode(tzd,mode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tzd0; _aux++) {
          free(tzd[_aux].devdata);
          }
          free(tzd);
          free(mode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tzd0 = 100;
          struct thermal_zone_device * tzd = (struct thermal_zone_device *) malloc(_len_tzd0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tzd0; _i0++) {
              int _len_tzd__i0__devdata0 = 1;
          tzd[_i0].devdata = (struct soc_sensor_entry *) malloc(_len_tzd__i0__devdata0*sizeof(struct soc_sensor_entry));
          for(int _j0 = 0; _j0 < _len_tzd__i0__devdata0; _j0++) {
            tzd[_i0].devdata->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mode0 = 100;
          enum thermal_device_mode * mode = (enum thermal_device_mode *) malloc(_len_mode0*sizeof(enum thermal_device_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
          int benchRet = sys_get_mode(tzd,mode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tzd0; _aux++) {
          free(tzd[_aux].devdata);
          }
          free(tzd);
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
