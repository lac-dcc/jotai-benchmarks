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
       0            big-arr\n\
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
struct bmp280_calib {scalar_t__ T3; scalar_t__ T1; scalar_t__ T2; } ;
struct TYPE_2__ {struct bmp280_calib bmp280; } ;
struct bmp280_data {int t_fine; TYPE_1__ calib; } ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static s32 bmp280_compensate_temp(struct bmp280_data *data,
				  s32 adc_temp)
{
	s32 var1, var2;
	struct bmp280_calib *calib = &data->calib.bmp280;

	var1 = (((adc_temp >> 3) - ((s32)calib->T1 << 1)) *
		((s32)calib->T2)) >> 11;
	var2 = (((((adc_temp >> 4) - ((s32)calib->T1)) *
		  ((adc_temp >> 4) - ((s32)calib->T1))) >> 12) *
		((s32)calib->T3)) >> 14;
	data->t_fine = var1 + var2;

	return (data->t_fine * 5 + 128) >> 8;
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

    // big-arr
    case 0:
    {
          int adc_temp = 255;
          int _len_data0 = 1;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data->t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data->calib.bmp280.T3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data->calib.bmp280.T1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data->calib.bmp280.T2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp280_compensate_temp(data,adc_temp);
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
