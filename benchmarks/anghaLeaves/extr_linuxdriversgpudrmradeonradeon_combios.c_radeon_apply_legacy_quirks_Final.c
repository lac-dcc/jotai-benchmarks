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
struct radeon_i2c_bus_rec {scalar_t__ mask_clk_reg; } ;
struct radeon_hpd {int dummy; } ;
struct drm_device {TYPE_1__* pdev; } ;
typedef  enum radeon_combios_connector { ____Placeholder_radeon_combios_connector } radeon_combios_connector ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;

/* Variables and functions */
 int CONNECTOR_CRT_LEGACY ; 
 int CONNECTOR_DVI_I_LEGACY ; 
 scalar_t__ RADEON_GPIO_CRT2_DDC ; 

__attribute__((used)) static bool radeon_apply_legacy_quirks(struct drm_device *dev,
				       int bios_index,
				       enum radeon_combios_connector
				       *legacy_connector,
				       struct radeon_i2c_bus_rec *ddc_i2c,
				       struct radeon_hpd *hpd)
{

	/* Certain IBM chipset RN50s have a BIOS reporting two VGAs,
	   one with VGA DDC and one with CRT2 DDC. - kill the CRT2 DDC one */
	if (dev->pdev->device == 0x515e &&
	    dev->pdev->subsystem_vendor == 0x1014) {
		if (*legacy_connector == CONNECTOR_CRT_LEGACY &&
		    ddc_i2c->mask_clk_reg == RADEON_GPIO_CRT2_DDC)
			return false;
	}

	/* X300 card with extra non-existent DVI port */
	if (dev->pdev->device == 0x5B60 &&
	    dev->pdev->subsystem_vendor == 0x17af &&
	    dev->pdev->subsystem_device == 0x201e && bios_index == 2) {
		if (*legacy_connector == CONNECTOR_DVI_I_LEGACY)
			return false;
	}

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
          int bios_index = 100;
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__pdev0 = 1;
          dev[_i0].pdev = (struct TYPE_2__ *) malloc(_len_dev__i0__pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__pdev0; _j0++) {
            dev[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].pdev->subsystem_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].pdev->subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_legacy_connector0 = 1;
          enum radeon_combios_connector * legacy_connector = (enum radeon_combios_connector *) malloc(_len_legacy_connector0*sizeof(enum radeon_combios_connector));
          for(int _i0 = 0; _i0 < _len_legacy_connector0; _i0++) {
            legacy_connector[_i0] = 0;
          }
          int _len_ddc_i2c0 = 1;
          struct radeon_i2c_bus_rec * ddc_i2c = (struct radeon_i2c_bus_rec *) malloc(_len_ddc_i2c0*sizeof(struct radeon_i2c_bus_rec));
          for(int _i0 = 0; _i0 < _len_ddc_i2c0; _i0++) {
            ddc_i2c[_i0].mask_clk_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hpd0 = 1;
          struct radeon_hpd * hpd = (struct radeon_hpd *) malloc(_len_hpd0*sizeof(struct radeon_hpd));
          for(int _i0 = 0; _i0 < _len_hpd0; _i0++) {
            hpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = radeon_apply_legacy_quirks(dev,bios_index,legacy_connector,ddc_i2c,hpd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].pdev);
          }
          free(dev);
          free(legacy_connector);
          free(ddc_i2c);
          free(hpd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
