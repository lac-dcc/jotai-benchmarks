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
struct thermal_zone_device {int dummy; } ;
typedef  enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;

/* Variables and functions */
 int IMX_TRIP_PASSIVE ; 
 int THERMAL_TRIP_CRITICAL ; 
 int THERMAL_TRIP_PASSIVE ; 

__attribute__((used)) static int imx_get_trip_type(struct thermal_zone_device *tz, int trip,
			     enum thermal_trip_type *type)
{
	*type = (trip == IMX_TRIP_PASSIVE) ? THERMAL_TRIP_PASSIVE :
					     THERMAL_TRIP_CRITICAL;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int trip = 100;
        
          int _len_tz0 = 1;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              tz[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_type0 = 1;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
        
          int benchRet = imx_get_trip_type(tz,trip,type);
          printf("%d\n", benchRet); 
          free(tz);
          free(type);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int trip = 255;
        
          int _len_tz0 = 65025;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              tz[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_type0 = 65025;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
        
          int benchRet = imx_get_trip_type(tz,trip,type);
          printf("%d\n", benchRet); 
          free(tz);
          free(type);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int trip = 10;
        
          int _len_tz0 = 100;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              tz[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_type0 = 100;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
        
          int benchRet = imx_get_trip_type(tz,trip,type);
          printf("%d\n", benchRet); 
          free(tz);
          free(type);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int trip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_tz0 = 1;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              tz[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_type0 = 1;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
        
          int benchRet = imx_get_trip_type(tz,trip,type);
          printf("%d\n", benchRet); 
          free(tz);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
