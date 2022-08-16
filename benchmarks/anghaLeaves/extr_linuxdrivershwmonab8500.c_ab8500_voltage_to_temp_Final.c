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
struct abx500_res_to_temp {int resist; int temp; } ;
struct ab8500_gpadc_cfg {int tbl_sz; int vcc; int r_up; struct abx500_res_to_temp* temp_tbl; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int ab8500_voltage_to_temp(struct ab8500_gpadc_cfg *cfg,
		int v_ntc, int *temp)
{
	int r_ntc, i = 0, tbl_sz = cfg->tbl_sz;
	const struct abx500_res_to_temp *tbl = cfg->temp_tbl;

	if (cfg->vcc < 0 || v_ntc >= cfg->vcc)
		return -EINVAL;

	r_ntc = v_ntc * cfg->r_up / (cfg->vcc - v_ntc);
	if (r_ntc > tbl[0].resist || r_ntc < tbl[tbl_sz - 1].resist)
		return -EINVAL;

	while (!(r_ntc <= tbl[i].resist && r_ntc > tbl[i + 1].resist) &&
			i < tbl_sz - 2)
		i++;

	/* return milli-Celsius */
	*temp = tbl[i].temp * 1000 + ((tbl[i + 1].temp - tbl[i].temp) * 1000 *
		(r_ntc - tbl[i].resist)) / (tbl[i + 1].resist - tbl[i].resist);

	return 0;
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
          int v_ntc = 100;
          int _len_cfg0 = 1;
          struct ab8500_gpadc_cfg * cfg = (struct ab8500_gpadc_cfg *) malloc(_len_cfg0*sizeof(struct ab8500_gpadc_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].tbl_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].vcc = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].r_up = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cfg__i0__temp_tbl0 = 1;
          cfg[_i0].temp_tbl = (struct abx500_res_to_temp *) malloc(_len_cfg__i0__temp_tbl0*sizeof(struct abx500_res_to_temp));
          for(int _j0 = 0; _j0 < _len_cfg__i0__temp_tbl0; _j0++) {
            cfg[_i0].temp_tbl->resist = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].temp_tbl->temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_temp0 = 1;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ab8500_voltage_to_temp(cfg,v_ntc,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].temp_tbl);
          }
          free(cfg);
          free(temp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
