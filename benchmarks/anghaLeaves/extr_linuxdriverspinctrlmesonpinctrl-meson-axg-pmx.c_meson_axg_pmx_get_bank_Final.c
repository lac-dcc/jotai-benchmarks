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
struct meson_pmx_bank {unsigned int first; unsigned int last; } ;
struct meson_pinctrl {TYPE_1__* data; } ;
struct meson_axg_pmx_data {int num_pmx_banks; struct meson_pmx_bank* pmx_banks; } ;
struct TYPE_2__ {struct meson_axg_pmx_data* pmx_data; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int meson_axg_pmx_get_bank(struct meson_pinctrl *pc,
			unsigned int pin,
			struct meson_pmx_bank **bank)
{
	int i;
	struct meson_axg_pmx_data *pmx = pc->data->pmx_data;

	for (i = 0; i < pmx->num_pmx_banks; i++)
		if (pin >= pmx->pmx_banks[i].first &&
				pin <= pmx->pmx_banks[i].last) {
			*bank = &pmx->pmx_banks[i];
			return 0;
		}

	return -EINVAL;
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
          unsigned int pin = 100;
          int _len_pc0 = 1;
          struct meson_pinctrl * pc = (struct meson_pinctrl *) malloc(_len_pc0*sizeof(struct meson_pinctrl));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
              int _len_pc__i0__data0 = 1;
          pc[_i0].data = (struct TYPE_2__ *) malloc(_len_pc__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pc__i0__data0; _j0++) {
              int _len_pc__i0__data_pmx_data0 = 1;
          pc[_i0].data->pmx_data = (struct meson_axg_pmx_data *) malloc(_len_pc__i0__data_pmx_data0*sizeof(struct meson_axg_pmx_data));
          for(int _j0 = 0; _j0 < _len_pc__i0__data_pmx_data0; _j0++) {
            pc[_i0].data->pmx_data->num_pmx_banks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pc__i0__data_pmx_data_pmx_banks0 = 1;
          pc[_i0].data->pmx_data->pmx_banks = (struct meson_pmx_bank *) malloc(_len_pc__i0__data_pmx_data_pmx_banks0*sizeof(struct meson_pmx_bank));
          for(int _j0 = 0; _j0 < _len_pc__i0__data_pmx_data_pmx_banks0; _j0++) {
            pc[_i0].data->pmx_data->pmx_banks->first = ((-2 * (next_i()%2)) + 1) * next_i();
        pc[_i0].data->pmx_data->pmx_banks->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_bank0 = 1;
          struct meson_pmx_bank ** bank = (struct meson_pmx_bank **) malloc(_len_bank0*sizeof(struct meson_pmx_bank *));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            int _len_bank1 = 1;
            bank[_i0] = (struct meson_pmx_bank *) malloc(_len_bank1*sizeof(struct meson_pmx_bank));
            for(int _i1 = 0; _i1 < _len_bank1; _i1++) {
              bank[_i0][_i1].first = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0][_i1].last = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = meson_axg_pmx_get_bank(pc,pin,bank);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].data);
          }
          free(pc);
          for(int i1 = 0; i1 < _len_bank0; i1++) {
            int _len_bank1 = 1;
              free(bank[i1]);
          }
          free(bank);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
