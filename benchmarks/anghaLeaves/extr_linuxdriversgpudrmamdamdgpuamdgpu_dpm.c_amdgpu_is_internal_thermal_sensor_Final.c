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
typedef  enum amdgpu_int_thermal_type { ____Placeholder_amdgpu_int_thermal_type } amdgpu_int_thermal_type ;

/* Variables and functions */
#define  THERMAL_TYPE_ADT7473_WITH_INTERNAL 140 
#define  THERMAL_TYPE_CI 139 
#define  THERMAL_TYPE_EMC2103_WITH_INTERNAL 138 
#define  THERMAL_TYPE_EVERGREEN 137 
#define  THERMAL_TYPE_EXTERNAL 136 
#define  THERMAL_TYPE_EXTERNAL_GPIO 135 
#define  THERMAL_TYPE_KV 134 
#define  THERMAL_TYPE_NI 133 
#define  THERMAL_TYPE_NONE 132 
#define  THERMAL_TYPE_RV6XX 131 
#define  THERMAL_TYPE_RV770 130 
#define  THERMAL_TYPE_SI 129 
#define  THERMAL_TYPE_SUMO 128 

bool amdgpu_is_internal_thermal_sensor(enum amdgpu_int_thermal_type sensor)
{
	switch (sensor) {
	case THERMAL_TYPE_RV6XX:
	case THERMAL_TYPE_RV770:
	case THERMAL_TYPE_EVERGREEN:
	case THERMAL_TYPE_SUMO:
	case THERMAL_TYPE_NI:
	case THERMAL_TYPE_SI:
	case THERMAL_TYPE_CI:
	case THERMAL_TYPE_KV:
		return true;
	case THERMAL_TYPE_ADT7473_WITH_INTERNAL:
	case THERMAL_TYPE_EMC2103_WITH_INTERNAL:
		return false; /* need special handling */
	case THERMAL_TYPE_NONE:
	case THERMAL_TYPE_EXTERNAL:
	case THERMAL_TYPE_EXTERNAL_GPIO:
	default:
		return false;
	}
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
          enum amdgpu_int_thermal_type sensor = 100;
          int benchRet = amdgpu_is_internal_thermal_sensor(sensor);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum amdgpu_int_thermal_type sensor = 255;
          int benchRet = amdgpu_is_internal_thermal_sensor(sensor);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum amdgpu_int_thermal_type sensor = 10;
          int benchRet = amdgpu_is_internal_thermal_sensor(sensor);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
