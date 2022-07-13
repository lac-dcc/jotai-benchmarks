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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ dig_H1; scalar_t__ dig_H2; scalar_t__ dig_H3; scalar_t__ dig_H6; scalar_t__ dig_H5; scalar_t__ dig_H4; } ;
typedef  int /*<<< orphan*/  BME280_U32_t ;
typedef  int BME280_S32_t ;

/* Variables and functions */
 TYPE_1__ bme280_data ; 
 int bme280_t_fine ; 

__attribute__((used)) static BME280_U32_t bme280_compensate_H(BME280_S32_t adc_H) {
	BME280_S32_t v_x1_u32r;

	v_x1_u32r = (bme280_t_fine - ((BME280_S32_t)76800));
	v_x1_u32r = (((((adc_H << 14) - (((BME280_S32_t)bme280_data.dig_H4) << 20) - (((BME280_S32_t)bme280_data.dig_H5) * v_x1_u32r)) +
		((BME280_S32_t)16384)) >> 15) * (((((((v_x1_u32r * ((BME280_S32_t)bme280_data.dig_H6)) >> 10) * (((v_x1_u32r *
		((BME280_S32_t)bme280_data.dig_H3)) >> 11) + ((BME280_S32_t)32768))) >> 10) + ((BME280_S32_t)2097152)) *
		((BME280_S32_t)bme280_data.dig_H2) + 8192) >> 14));
	v_x1_u32r = (v_x1_u32r - (((((v_x1_u32r >> 15) * (v_x1_u32r >> 15)) >> 7) * ((BME280_S32_t)bme280_data.dig_H1)) >> 4));
	v_x1_u32r = (v_x1_u32r < 0 ? 0 : v_x1_u32r);
	v_x1_u32r = (v_x1_u32r > 419430400 ? 419430400 : v_x1_u32r);
	v_x1_u32r = v_x1_u32r>>12;
	return (BME280_U32_t)((v_x1_u32r * 1000)>>10);
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
          int adc_H = 100;
          int benchRet = bme280_compensate_H(adc_H);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_H = 255;
          int benchRet = bme280_compensate_H(adc_H);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_H = 10;
          int benchRet = bme280_compensate_H(adc_H);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
