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
struct lm3530_platform_data {scalar_t__ als_vmax; int als_vmin; int als_avrg_time; int als_input_mode; int als1_resistor_sel; int als2_resistor_sel; } ;
struct lm3530_als_data {int* zones; int config; int imp_sel; } ;

/* Variables and functions */
 int LED_FULL ; 
 int LM3530_ALS1_IMP_SHIFT ; 
 int LM3530_ALS2_IMP_SHIFT ; 
 int LM3530_ALS_AVG_TIME_SHIFT ; 
 int LM3530_ALS_OFFSET_mV ; 
 int LM3530_ALS_SEL_SHIFT ; 
 int LM3530_ALS_WINDOW_mV ; 
 int LM3530_ALS_ZB_MAX ; 
 int LM3530_ENABLE_ALS ; 

__attribute__((used)) static void lm3530_als_configure(struct lm3530_platform_data *pdata,
				struct lm3530_als_data *als)
{
	int i;
	u32 als_vmin, als_vmax, als_vstep;

	if (pdata->als_vmax == 0) {
		pdata->als_vmin = 0;
		pdata->als_vmax = LM3530_ALS_WINDOW_mV;
	}

	als_vmin = pdata->als_vmin;
	als_vmax = pdata->als_vmax;

	if ((als_vmax - als_vmin) > LM3530_ALS_WINDOW_mV)
		pdata->als_vmax = als_vmax = als_vmin + LM3530_ALS_WINDOW_mV;

	/* n zone boundary makes n+1 zones */
	als_vstep = (als_vmax - als_vmin) / (LM3530_ALS_ZB_MAX + 1);

	for (i = 0; i < LM3530_ALS_ZB_MAX; i++)
		als->zones[i] = (((als_vmin + LM3530_ALS_OFFSET_mV) +
			als_vstep + (i * als_vstep)) * LED_FULL) / 1000;

	als->config =
		(pdata->als_avrg_time << LM3530_ALS_AVG_TIME_SHIFT) |
		(LM3530_ENABLE_ALS) |
		(pdata->als_input_mode << LM3530_ALS_SEL_SHIFT);

	als->imp_sel =
		(pdata->als1_resistor_sel << LM3530_ALS1_IMP_SHIFT) |
		(pdata->als2_resistor_sel << LM3530_ALS2_IMP_SHIFT);
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
          int _len_pdata0 = 1;
          struct lm3530_platform_data * pdata = (struct lm3530_platform_data *) malloc(_len_pdata0*sizeof(struct lm3530_platform_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].als_vmax = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_vmin = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_avrg_time = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_input_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als1_resistor_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als2_resistor_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_als0 = 1;
          struct lm3530_als_data * als = (struct lm3530_als_data *) malloc(_len_als0*sizeof(struct lm3530_als_data));
          for(int _i0 = 0; _i0 < _len_als0; _i0++) {
              int _len_als__i0__zones0 = 1;
          als[_i0].zones = (int *) malloc(_len_als__i0__zones0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_als__i0__zones0; _j0++) {
            als[_i0].zones[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        als[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        als[_i0].imp_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lm3530_als_configure(pdata,als);
          free(pdata);
          for(int _aux = 0; _aux < _len_als0; _aux++) {
          free(als[_aux].zones);
          }
          free(als);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pdata0 = 65025;
          struct lm3530_platform_data * pdata = (struct lm3530_platform_data *) malloc(_len_pdata0*sizeof(struct lm3530_platform_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].als_vmax = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_vmin = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_avrg_time = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_input_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als1_resistor_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als2_resistor_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_als0 = 65025;
          struct lm3530_als_data * als = (struct lm3530_als_data *) malloc(_len_als0*sizeof(struct lm3530_als_data));
          for(int _i0 = 0; _i0 < _len_als0; _i0++) {
              int _len_als__i0__zones0 = 1;
          als[_i0].zones = (int *) malloc(_len_als__i0__zones0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_als__i0__zones0; _j0++) {
            als[_i0].zones[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        als[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        als[_i0].imp_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lm3530_als_configure(pdata,als);
          free(pdata);
          for(int _aux = 0; _aux < _len_als0; _aux++) {
          free(als[_aux].zones);
          }
          free(als);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pdata0 = 100;
          struct lm3530_platform_data * pdata = (struct lm3530_platform_data *) malloc(_len_pdata0*sizeof(struct lm3530_platform_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].als_vmax = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_vmin = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_avrg_time = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als_input_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als1_resistor_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].als2_resistor_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_als0 = 100;
          struct lm3530_als_data * als = (struct lm3530_als_data *) malloc(_len_als0*sizeof(struct lm3530_als_data));
          for(int _i0 = 0; _i0 < _len_als0; _i0++) {
              int _len_als__i0__zones0 = 1;
          als[_i0].zones = (int *) malloc(_len_als__i0__zones0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_als__i0__zones0; _j0++) {
            als[_i0].zones[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        als[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        als[_i0].imp_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lm3530_als_configure(pdata,als);
          free(pdata);
          for(int _aux = 0; _aux < _len_als0; _aux++) {
          free(als[_aux].zones);
          }
          free(als);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
