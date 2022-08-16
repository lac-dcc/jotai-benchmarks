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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int core_time_unit; int average_en; int /*<<< orphan*/  avg_num; int /*<<< orphan*/  clk_pre_div; } ;
struct imx7d_adc {TYPE_1__ adc_feature; } ;

/* Variables and functions */
 int /*<<< orphan*/  IMX7D_ADC_ANALOG_CLK_PRE_DIV_4 ; 
 int /*<<< orphan*/  IMX7D_ADC_AVERAGE_NUM_32 ; 

__attribute__((used)) static void imx7d_adc_feature_config(struct imx7d_adc *info)
{
	info->adc_feature.clk_pre_div = IMX7D_ADC_ANALOG_CLK_PRE_DIV_4;
	info->adc_feature.avg_num = IMX7D_ADC_AVERAGE_NUM_32;
	info->adc_feature.core_time_unit = 1;
	info->adc_feature.average_en = true;
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
          int _len_info0 = 1;
          struct imx7d_adc * info = (struct imx7d_adc *) malloc(_len_info0*sizeof(struct imx7d_adc));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].adc_feature.core_time_unit = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].adc_feature.average_en = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].adc_feature.avg_num = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].adc_feature.clk_pre_div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          imx7d_adc_feature_config(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
