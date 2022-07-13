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

/* Type definitions */
typedef  int u16 ;
struct exynos_tmu_data {scalar_t__ cal_type; int temp_error1; int temp_error2; } ;

/* Variables and functions */
 int EXYNOS_FIRST_POINT_TRIM ; 
 int EXYNOS_SECOND_POINT_TRIM ; 
 scalar_t__ TYPE_ONE_POINT_TRIMMING ; 

__attribute__((used)) static int code_to_temp(struct exynos_tmu_data *data, u16 temp_code)
{
	if (data->cal_type == TYPE_ONE_POINT_TRIMMING)
		return temp_code - data->temp_error1 + EXYNOS_FIRST_POINT_TRIM;

	return (temp_code - data->temp_error1) *
		(EXYNOS_SECOND_POINT_TRIM - EXYNOS_FIRST_POINT_TRIM) /
		(data->temp_error2 - data->temp_error1) +
		EXYNOS_FIRST_POINT_TRIM;
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
          int temp_code = 100;
          int _len_data0 = 1;
          struct exynos_tmu_data * data = (struct exynos_tmu_data *) malloc(_len_data0*sizeof(struct exynos_tmu_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].cal_type = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_error1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_error2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = code_to_temp(data,temp_code);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int temp_code = 255;
          int _len_data0 = 65025;
          struct exynos_tmu_data * data = (struct exynos_tmu_data *) malloc(_len_data0*sizeof(struct exynos_tmu_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].cal_type = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_error1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_error2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = code_to_temp(data,temp_code);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int temp_code = 10;
          int _len_data0 = 100;
          struct exynos_tmu_data * data = (struct exynos_tmu_data *) malloc(_len_data0*sizeof(struct exynos_tmu_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].cal_type = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_error1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].temp_error2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = code_to_temp(data,temp_code);
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
