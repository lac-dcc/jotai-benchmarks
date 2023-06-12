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
       0            empty\n\
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
struct w83627ehf_data {int /*<<< orphan*/ * reg_temp_config; int /*<<< orphan*/ * reg_temp_hyst; int /*<<< orphan*/ * reg_temp_over; int /*<<< orphan*/ * reg_temp; } ;

/* Variables and functions */
 int /*<<< orphan*/ * W83627EHF_REG_TEMP ; 
 int /*<<< orphan*/ * W83627EHF_REG_TEMP_CONFIG ; 
 int /*<<< orphan*/ * W83627EHF_REG_TEMP_HYST ; 
 int /*<<< orphan*/ * W83627EHF_REG_TEMP_OVER ; 

__attribute__((used)) static void
w83627ehf_set_temp_reg_ehf(struct w83627ehf_data *data, int n_temp)
{
	int i;

	for (i = 0; i < n_temp; i++) {
		data->reg_temp[i] = W83627EHF_REG_TEMP[i];
		data->reg_temp_over[i] = W83627EHF_REG_TEMP_OVER[i];
		data->reg_temp_hyst[i] = W83627EHF_REG_TEMP_HYST[i];
		data->reg_temp_config[i] = W83627EHF_REG_TEMP_CONFIG[i];
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int n_temp = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_data0 = 1;
          struct w83627ehf_data * data = (struct w83627ehf_data *) malloc(_len_data0*sizeof(struct w83627ehf_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__reg_temp_config0 = 1;
          data[_i0].reg_temp_config = (int *) malloc(_len_data__i0__reg_temp_config0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__reg_temp_config0; _j0++) {
            data[_i0].reg_temp_config[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__reg_temp_hyst0 = 1;
          data[_i0].reg_temp_hyst = (int *) malloc(_len_data__i0__reg_temp_hyst0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__reg_temp_hyst0; _j0++) {
            data[_i0].reg_temp_hyst[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__reg_temp_over0 = 1;
          data[_i0].reg_temp_over = (int *) malloc(_len_data__i0__reg_temp_over0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__reg_temp_over0; _j0++) {
            data[_i0].reg_temp_over[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__reg_temp0 = 1;
          data[_i0].reg_temp = (int *) malloc(_len_data__i0__reg_temp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__reg_temp0; _j0++) {
            data[_i0].reg_temp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          w83627ehf_set_temp_reg_ehf(data,n_temp);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].reg_temp_config);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].reg_temp_hyst);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].reg_temp_over);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].reg_temp);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
