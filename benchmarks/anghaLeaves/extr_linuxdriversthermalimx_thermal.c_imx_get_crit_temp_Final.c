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

/* Type definitions */
struct thermal_zone_device {struct imx_thermal_data* devdata; } ;
struct imx_thermal_data {int temp_critical; } ;

/* Variables and functions */

__attribute__((used)) static int imx_get_crit_temp(struct thermal_zone_device *tz, int *temp)
{
	struct imx_thermal_data *data = tz->devdata;

	*temp = data->temp_critical;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_tz0 = 65025;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__devdata0 = 1;
          tz[_i0].devdata = (struct imx_thermal_data *) malloc(_len_tz__i0__devdata0*sizeof(struct imx_thermal_data));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata0; _j0++) {
              tz[_i0].devdata->temp_critical = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_temp0 = 65025;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = imx_get_crit_temp(tz,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].devdata);
          }
          free(tz);
          free(temp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_tz0 = 100;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__devdata0 = 1;
          tz[_i0].devdata = (struct imx_thermal_data *) malloc(_len_tz__i0__devdata0*sizeof(struct imx_thermal_data));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata0; _j0++) {
              tz[_i0].devdata->temp_critical = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_temp0 = 100;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = imx_get_crit_temp(tz,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].devdata);
          }
          free(tz);
          free(temp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_tz0 = 1;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__devdata0 = 1;
          tz[_i0].devdata = (struct imx_thermal_data *) malloc(_len_tz__i0__devdata0*sizeof(struct imx_thermal_data));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata0; _j0++) {
              tz[_i0].devdata->temp_critical = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_temp0 = 1;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = imx_get_crit_temp(tz,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].devdata);
          }
          free(tz);
          free(temp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
