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
typedef  int u8 ;
typedef  int u16 ;
struct bme680_calib {int par_gh3; int par_gh1; int par_gh2; int res_heat_range; int res_heat_val; } ;
struct bme680_data {struct bme680_calib bme680; } ;
typedef  int s32 ;

/* Variables and functions */
 scalar_t__ BME680_AMB_TEMP ; 

__attribute__((used)) static u8 bme680_calc_heater_res(struct bme680_data *data, u16 temp)
{
	struct bme680_calib *calib = &data->bme680;
	s32 var1, var2, var3, var4, var5, heatr_res_x100;
	u8 heatr_res;

	if (temp > 400) /* Cap temperature */
		temp = 400;

	var1 = (((s32) BME680_AMB_TEMP * calib->par_gh3) / 1000) * 256;
	var2 = (calib->par_gh1 + 784) * (((((calib->par_gh2 + 154009) *
						temp * 5) / 100)
						+ 3276800) / 10);
	var3 = var1 + (var2 / 2);
	var4 = (var3 / (calib->res_heat_range + 4));
	var5 = 131 * calib->res_heat_val + 65536;
	heatr_res_x100 = ((var4 / var5) - 250) * 34;
	heatr_res = (heatr_res_x100 + 50) / 100;

	return heatr_res;
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
          int temp = 100;
          int _len_data0 = 1;
          struct bme680_data * data = (struct bme680_data *) malloc(_len_data0*sizeof(struct bme680_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].bme680.par_gh3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_gh1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_gh2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.res_heat_range = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.res_heat_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bme680_calc_heater_res(data,temp);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
