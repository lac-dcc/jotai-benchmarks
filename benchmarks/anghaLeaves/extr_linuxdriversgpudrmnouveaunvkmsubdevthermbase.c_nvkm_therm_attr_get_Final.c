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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {int temp; int hysteresis; } ;
struct TYPE_10__ {int temp; int hysteresis; } ;
struct TYPE_9__ {int temp; int hysteresis; } ;
struct TYPE_8__ {int temp; int hysteresis; } ;
struct TYPE_12__ {TYPE_4__ thrs_shutdown; TYPE_3__ thrs_critical; TYPE_2__ thrs_down_clock; TYPE_1__ thrs_fan_boost; } ;
struct nvkm_therm {int mode; TYPE_5__ bios_sensor; TYPE_7__* fan; } ;
typedef  enum nvkm_therm_attr_type { ____Placeholder_nvkm_therm_attr_type } nvkm_therm_attr_type ;
struct TYPE_13__ {int min_duty; int max_duty; } ;
struct TYPE_14__ {TYPE_6__ bios; } ;

/* Variables and functions */
 int EINVAL ; 
#define  NVKM_THERM_ATTR_FAN_MAX_DUTY 138 
#define  NVKM_THERM_ATTR_FAN_MIN_DUTY 137 
#define  NVKM_THERM_ATTR_FAN_MODE 136 
#define  NVKM_THERM_ATTR_THRS_CRITICAL 135 
#define  NVKM_THERM_ATTR_THRS_CRITICAL_HYST 134 
#define  NVKM_THERM_ATTR_THRS_DOWN_CLK 133 
#define  NVKM_THERM_ATTR_THRS_DOWN_CLK_HYST 132 
#define  NVKM_THERM_ATTR_THRS_FAN_BOOST 131 
#define  NVKM_THERM_ATTR_THRS_FAN_BOOST_HYST 130 
#define  NVKM_THERM_ATTR_THRS_SHUTDOWN 129 
#define  NVKM_THERM_ATTR_THRS_SHUTDOWN_HYST 128 

int
nvkm_therm_attr_get(struct nvkm_therm *therm, enum nvkm_therm_attr_type type)
{
	switch (type) {
	case NVKM_THERM_ATTR_FAN_MIN_DUTY:
		return therm->fan->bios.min_duty;
	case NVKM_THERM_ATTR_FAN_MAX_DUTY:
		return therm->fan->bios.max_duty;
	case NVKM_THERM_ATTR_FAN_MODE:
		return therm->mode;
	case NVKM_THERM_ATTR_THRS_FAN_BOOST:
		return therm->bios_sensor.thrs_fan_boost.temp;
	case NVKM_THERM_ATTR_THRS_FAN_BOOST_HYST:
		return therm->bios_sensor.thrs_fan_boost.hysteresis;
	case NVKM_THERM_ATTR_THRS_DOWN_CLK:
		return therm->bios_sensor.thrs_down_clock.temp;
	case NVKM_THERM_ATTR_THRS_DOWN_CLK_HYST:
		return therm->bios_sensor.thrs_down_clock.hysteresis;
	case NVKM_THERM_ATTR_THRS_CRITICAL:
		return therm->bios_sensor.thrs_critical.temp;
	case NVKM_THERM_ATTR_THRS_CRITICAL_HYST:
		return therm->bios_sensor.thrs_critical.hysteresis;
	case NVKM_THERM_ATTR_THRS_SHUTDOWN:
		return therm->bios_sensor.thrs_shutdown.temp;
	case NVKM_THERM_ATTR_THRS_SHUTDOWN_HYST:
		return therm->bios_sensor.thrs_shutdown.hysteresis;
	}

	return -EINVAL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          enum nvkm_therm_attr_type type = 0;
        
          int _len_therm0 = 65025;
          struct nvkm_therm * therm = (struct nvkm_therm *) malloc(_len_therm0*sizeof(struct nvkm_therm));
          for(int _i0 = 0; _i0 < _len_therm0; _i0++) {
              therm[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_shutdown.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_shutdown.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_critical.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_critical.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_down_clock.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_down_clock.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_fan_boost.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_fan_boost.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          int _len_therm__i0__fan0 = 1;
          therm[_i0].fan = (struct TYPE_14__ *) malloc(_len_therm__i0__fan0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_therm__i0__fan0; _j0++) {
              therm[_i0].fan->bios.min_duty = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].fan->bios.max_duty = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = nvkm_therm_attr_get(therm,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_therm0; _aux++) {
          free(therm[_aux].fan);
          }
          free(therm);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum nvkm_therm_attr_type type = 0;
        
          int _len_therm0 = 100;
          struct nvkm_therm * therm = (struct nvkm_therm *) malloc(_len_therm0*sizeof(struct nvkm_therm));
          for(int _i0 = 0; _i0 < _len_therm0; _i0++) {
              therm[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_shutdown.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_shutdown.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_critical.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_critical.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_down_clock.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_down_clock.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_fan_boost.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_fan_boost.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          int _len_therm__i0__fan0 = 1;
          therm[_i0].fan = (struct TYPE_14__ *) malloc(_len_therm__i0__fan0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_therm__i0__fan0; _j0++) {
              therm[_i0].fan->bios.min_duty = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].fan->bios.max_duty = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = nvkm_therm_attr_get(therm,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_therm0; _aux++) {
          free(therm[_aux].fan);
          }
          free(therm);
        
        break;
    }
    // empty
    case 2:
    {
          enum nvkm_therm_attr_type type = 0;
        
          int _len_therm0 = 1;
          struct nvkm_therm * therm = (struct nvkm_therm *) malloc(_len_therm0*sizeof(struct nvkm_therm));
          for(int _i0 = 0; _i0 < _len_therm0; _i0++) {
              therm[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_shutdown.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_shutdown.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_critical.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_critical.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_down_clock.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_down_clock.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
          therm[_i0].bios_sensor.thrs_fan_boost.temp = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].bios_sensor.thrs_fan_boost.hysteresis = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          int _len_therm__i0__fan0 = 1;
          therm[_i0].fan = (struct TYPE_14__ *) malloc(_len_therm__i0__fan0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_therm__i0__fan0; _j0++) {
              therm[_i0].fan->bios.min_duty = ((-2 * (next_i()%2)) + 1) * next_i();
          therm[_i0].fan->bios.max_duty = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = nvkm_therm_attr_get(therm,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_therm0; _aux++) {
          free(therm[_aux].fan);
          }
          free(therm);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
