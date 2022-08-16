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
       1            big-arr-10x\n\
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
struct pm8001_hba_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int pm8001_get_phy_settings_info(struct pm8001_hba_info *pm8001_ha)
{

#ifdef PM8001_READ_VPD
	/*OPTION ROM FLASH read for the SPC cards */
	DECLARE_COMPLETION_ONSTACK(completion);
	struct pm8001_ioctl_payload payload;
	int rc;

	pm8001_ha->nvmd_completion = &completion;
	/* SAS ADDRESS read from flash / EEPROM */
	payload.minor_function = 6;
	payload.offset = 0;
	payload.length = 4096;
	payload.func_specific = kzalloc(4096, GFP_KERNEL);
	if (!payload.func_specific)
		return -ENOMEM;
	/* Read phy setting values from flash */
	rc = PM8001_CHIP_DISP->get_nvmd_req(pm8001_ha, &payload);
	if (rc) {
		kfree(payload.func_specific);
		PM8001_INIT_DBG(pm8001_ha, pm8001_printk("nvmd failed\n"));
		return -ENOMEM;
	}
	wait_for_completion(&completion);
	pm8001_set_phy_profile(pm8001_ha, sizeof(u8), payload.func_specific);
	kfree(payload.func_specific);
#endif
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
          int _len_pm8001_ha0 = 1;
          struct pm8001_hba_info * pm8001_ha = (struct pm8001_hba_info *) malloc(_len_pm8001_ha0*sizeof(struct pm8001_hba_info));
          for(int _i0 = 0; _i0 < _len_pm8001_ha0; _i0++) {
            pm8001_ha[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pm8001_get_phy_settings_info(pm8001_ha);
          printf("%d\n", benchRet); 
          free(pm8001_ha);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pm8001_ha0 = 100;
          struct pm8001_hba_info * pm8001_ha = (struct pm8001_hba_info *) malloc(_len_pm8001_ha0*sizeof(struct pm8001_hba_info));
          for(int _i0 = 0; _i0 < _len_pm8001_ha0; _i0++) {
            pm8001_ha[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pm8001_get_phy_settings_info(pm8001_ha);
          printf("%d\n", benchRet); 
          free(pm8001_ha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
