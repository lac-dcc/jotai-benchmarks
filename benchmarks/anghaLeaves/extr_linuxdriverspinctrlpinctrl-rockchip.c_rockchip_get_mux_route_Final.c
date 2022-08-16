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
typedef  int /*<<< orphan*/  u32 ;
struct rockchip_pinctrl {struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int niomux_routes; struct rockchip_mux_route_data* iomux_routes; } ;
struct rockchip_pin_bank {scalar_t__ bank_num; struct rockchip_pinctrl* drvdata; } ;
struct rockchip_mux_route_data {scalar_t__ bank_num; int pin; int func; int /*<<< orphan*/  route_val; int /*<<< orphan*/  route_offset; } ;

/* Variables and functions */

__attribute__((used)) static bool rockchip_get_mux_route(struct rockchip_pin_bank *bank, int pin,
				   int mux, u32 *reg, u32 *value)
{
	struct rockchip_pinctrl *info = bank->drvdata;
	struct rockchip_pin_ctrl *ctrl = info->ctrl;
	struct rockchip_mux_route_data *data;
	int i;

	for (i = 0; i < ctrl->niomux_routes; i++) {
		data = &ctrl->iomux_routes[i];
		if ((data->bank_num == bank->bank_num) &&
		    (data->pin == pin) && (data->func == mux))
			break;
	}

	if (i >= ctrl->niomux_routes)
		return false;

	*reg = data->route_offset;
	*value = data->route_val;

	return true;
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
          int pin = 100;
          int mux = 100;
          int _len_bank0 = 1;
          struct rockchip_pin_bank * bank = (struct rockchip_pin_bank *) malloc(_len_bank0*sizeof(struct rockchip_pin_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            bank[_i0].bank_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__drvdata0 = 1;
          bank[_i0].drvdata = (struct rockchip_pinctrl *) malloc(_len_bank__i0__drvdata0*sizeof(struct rockchip_pinctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata0; _j0++) {
              int _len_bank__i0__drvdata_ctrl0 = 1;
          bank[_i0].drvdata->ctrl = (struct rockchip_pin_ctrl *) malloc(_len_bank__i0__drvdata_ctrl0*sizeof(struct rockchip_pin_ctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_ctrl0; _j0++) {
            bank[_i0].drvdata->ctrl->niomux_routes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__drvdata_ctrl_iomux_routes0 = 1;
          bank[_i0].drvdata->ctrl->iomux_routes = (struct rockchip_mux_route_data *) malloc(_len_bank__i0__drvdata_ctrl_iomux_routes0*sizeof(struct rockchip_mux_route_data));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_ctrl_iomux_routes0; _j0++) {
            bank[_i0].drvdata->ctrl->iomux_routes->bank_num = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].drvdata->ctrl->iomux_routes->pin = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].drvdata->ctrl->iomux_routes->func = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].drvdata->ctrl->iomux_routes->route_val = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].drvdata->ctrl->iomux_routes->route_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_reg0 = 1;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rockchip_get_mux_route(bank,pin,mux,reg,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].drvdata);
          }
          free(bank);
          free(reg);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
