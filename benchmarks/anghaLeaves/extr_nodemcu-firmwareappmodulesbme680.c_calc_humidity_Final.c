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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int var4 ;
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int uint16_t ;
typedef  int int32_t ;
struct TYPE_2__ {scalar_t__ par_h7; scalar_t__ par_h6; scalar_t__ par_h5; scalar_t__ par_h4; scalar_t__ par_h2; scalar_t__ par_h3; scalar_t__ par_h1; scalar_t__ t_fine; } ;

/* Variables and functions */
 TYPE_1__ bme680_data ; 

__attribute__((used)) static uint32_t calc_humidity(uint16_t hum_adc)
{
	int32_t var1;
	int32_t var2;
	int32_t var3;
	int32_t var4;
	int32_t var5;
	int32_t var6;
	int32_t temp_scaled;
	int32_t calc_hum;

	temp_scaled = (((int32_t) bme680_data.t_fine * 5) + 128) / 256;
	var1 = (int32_t) (hum_adc - ((int32_t) ((int32_t) bme680_data.par_h1 * 16)))
	        - (((temp_scaled * (int32_t) bme680_data.par_h3) / ((int32_t) 100)) / 2);
	var2 = ((int32_t) bme680_data.par_h2
	        * (((temp_scaled * (int32_t) bme680_data.par_h4) / ((int32_t) 100))
	                + (((temp_scaled * ((temp_scaled * (int32_t) bme680_data.par_h5) / ((int32_t) 100))) / 64)
	                        / ((int32_t) 100)) + (int32_t) (1 * 16384))) / 1024;
	var3 = var1 * var2;
	var4 = (int32_t) bme680_data.par_h6 * 128;
	var4 = ((var4) + ((temp_scaled * (int32_t) bme680_data.par_h7) / ((int32_t) 100))) / 16;
	var5 = ((var3 / 16384) * (var3 / 16384)) / 1024;
	var6 = (var4 * var5) / 2;
	calc_hum = (((var3 + var6) / 1024) * ((int32_t) 1000)) / 4096;

	if (calc_hum > 100000) /* Cap at 100%rH */
		calc_hum = 100000;
	else if (calc_hum < 0)
		calc_hum = 0;

	return (uint32_t) calc_hum;
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
          int hum_adc = 100;
          int benchRet = calc_humidity(hum_adc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hum_adc = 255;
          int benchRet = calc_humidity(hum_adc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hum_adc = 10;
          int benchRet = calc_humidity(hum_adc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
