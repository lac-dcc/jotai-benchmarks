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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct sun4i_usb_phy_data {scalar_t__ id_det_irq; scalar_t__ vbus_det_irq; TYPE_1__* phys; scalar_t__ vbus_power_supply; TYPE_2__* cfg; scalar_t__ vbus_det_gpio; scalar_t__ id_det_gpio; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ regulator_on; } ;

/* Variables and functions */
 scalar_t__ sun6i_a31_phy ; 
 scalar_t__ sun8i_a33_phy ; 

__attribute__((used)) static bool sun4i_usb_phy0_poll(struct sun4i_usb_phy_data *data)
{
	if ((data->id_det_gpio && data->id_det_irq <= 0) ||
	    (data->vbus_det_gpio && data->vbus_det_irq <= 0))
		return true;

	/*
	 * The A31/A23/A33 companion pmics (AXP221/AXP223) do not
	 * generate vbus change interrupts when the board is driving
	 * vbus using the N_VBUSEN pin on the pmic, so we must poll
	 * when using the pmic for vbus-det _and_ we're driving vbus.
	 */
	if ((data->cfg->type == sun6i_a31_phy ||
	     data->cfg->type == sun8i_a33_phy) &&
	    data->vbus_power_supply && data->phys[0].regulator_on)
		return true;

	return false;
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
          int _len_data0 = 1;
          struct sun4i_usb_phy_data * data = (struct sun4i_usb_phy_data *) malloc(_len_data0*sizeof(struct sun4i_usb_phy_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].id_det_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].vbus_det_irq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__phys0 = 1;
          data[_i0].phys = (struct TYPE_3__ *) malloc(_len_data__i0__phys0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__phys0; _j0++) {
            data[_i0].phys->regulator_on = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        data[_i0].vbus_power_supply = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__cfg0 = 1;
          data[_i0].cfg = (struct TYPE_4__ *) malloc(_len_data__i0__cfg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__cfg0; _j0++) {
            data[_i0].cfg->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        data[_i0].vbus_det_gpio = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].id_det_gpio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sun4i_usb_phy0_poll(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].phys);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].cfg);
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
