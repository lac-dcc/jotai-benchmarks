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
struct TYPE_2__ {scalar_t__ dig_T3; scalar_t__ dig_T1; scalar_t__ dig_T2; } ;
typedef  int BME280_S32_t ;

/* Variables and functions */
 TYPE_1__ bme280_data ; 
 int bme280_t_fine ; 

__attribute__((used)) static BME280_S32_t bme280_compensate_T(BME280_S32_t adc_T) {
	BME280_S32_t var1, var2, T;
	var1  = ((((adc_T>>3) - ((BME280_S32_t)bme280_data.dig_T1<<1))) * ((BME280_S32_t)bme280_data.dig_T2)) >> 11;
	var2  = (((((adc_T>>4) - ((BME280_S32_t)bme280_data.dig_T1)) * ((adc_T>>4) - ((BME280_S32_t)bme280_data.dig_T1))) >> 12) *
		((BME280_S32_t)bme280_data.dig_T3)) >> 14;
	bme280_t_fine = var1 + var2;
	T  = (bme280_t_fine * 5 + 128) >> 8;
	return T;
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
          int adc_T = 100;
          int benchRet = bme280_compensate_T(adc_T);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_T = 255;
          int benchRet = bme280_compensate_T(adc_T);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_T = 10;
          int benchRet = bme280_compensate_T(adc_T);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
