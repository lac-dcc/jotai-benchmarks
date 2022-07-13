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
typedef  int u32 ;
struct exynos_tmu_data {scalar_t__ soc; int reference_voltage; int gain; } ;

/* Variables and functions */
 int EXYNOS4412_MUX_ADDR_SHIFT ; 
 int EXYNOS4412_MUX_ADDR_VALUE ; 
 int EXYNOS_NOISE_CANCEL_MODE ; 
 int EXYNOS_TMU_BUF_SLOPE_SEL_MASK ; 
 int EXYNOS_TMU_BUF_SLOPE_SEL_SHIFT ; 
 int EXYNOS_TMU_REF_VOLTAGE_MASK ; 
 int EXYNOS_TMU_REF_VOLTAGE_SHIFT ; 
 int EXYNOS_TMU_TRIP_MODE_MASK ; 
 int EXYNOS_TMU_TRIP_MODE_SHIFT ; 
 scalar_t__ SOC_ARCH_EXYNOS3250 ; 
 scalar_t__ SOC_ARCH_EXYNOS4412 ; 

__attribute__((used)) static u32 get_con_reg(struct exynos_tmu_data *data, u32 con)
{
	if (data->soc == SOC_ARCH_EXYNOS4412 ||
	    data->soc == SOC_ARCH_EXYNOS3250)
		con |= (EXYNOS4412_MUX_ADDR_VALUE << EXYNOS4412_MUX_ADDR_SHIFT);

	con &= ~(EXYNOS_TMU_REF_VOLTAGE_MASK << EXYNOS_TMU_REF_VOLTAGE_SHIFT);
	con |= data->reference_voltage << EXYNOS_TMU_REF_VOLTAGE_SHIFT;

	con &= ~(EXYNOS_TMU_BUF_SLOPE_SEL_MASK << EXYNOS_TMU_BUF_SLOPE_SEL_SHIFT);
	con |= (data->gain << EXYNOS_TMU_BUF_SLOPE_SEL_SHIFT);

	con &= ~(EXYNOS_TMU_TRIP_MODE_MASK << EXYNOS_TMU_TRIP_MODE_SHIFT);
	con |= (EXYNOS_NOISE_CANCEL_MODE << EXYNOS_TMU_TRIP_MODE_SHIFT);

	return con;
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
          int con = 100;
          int _len_data0 = 1;
          struct exynos_tmu_data * data = (struct exynos_tmu_data *) malloc(_len_data0*sizeof(struct exynos_tmu_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].soc = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].reference_voltage = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].gain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_con_reg(data,con);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int con = 255;
          int _len_data0 = 65025;
          struct exynos_tmu_data * data = (struct exynos_tmu_data *) malloc(_len_data0*sizeof(struct exynos_tmu_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].soc = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].reference_voltage = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].gain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_con_reg(data,con);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int con = 10;
          int _len_data0 = 100;
          struct exynos_tmu_data * data = (struct exynos_tmu_data *) malloc(_len_data0*sizeof(struct exynos_tmu_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].soc = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].reference_voltage = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].gain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_con_reg(data,con);
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
