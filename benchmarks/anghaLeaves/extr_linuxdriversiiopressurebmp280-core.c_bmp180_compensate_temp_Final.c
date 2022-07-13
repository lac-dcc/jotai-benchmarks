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
struct bmp180_calib {int AC6; int AC5; int MC; int MD; } ;
struct TYPE_2__ {struct bmp180_calib bmp180; } ;
struct bmp280_data {int t_fine; TYPE_1__ calib; } ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static s32 bmp180_compensate_temp(struct bmp280_data *data, s32 adc_temp)
{
	s32 x1, x2;
	struct bmp180_calib *calib = &data->calib.bmp180;

	x1 = ((adc_temp - calib->AC6) * calib->AC5) >> 15;
	x2 = (calib->MC << 11) / (x1 + calib->MD);
	data->t_fine = x1 + x2;

	return (data->t_fine + 8) >> 4;
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
          int adc_temp = 100;
          int _len_data0 = 1;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.MC = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.MD = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp180_compensate_temp(data,adc_temp);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_temp = 255;
          int _len_data0 = 65025;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.MC = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.MD = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp180_compensate_temp(data,adc_temp);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_temp = 10;
          int _len_data0 = 100;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.MC = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.MD = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp180_compensate_temp(data,adc_temp);
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
