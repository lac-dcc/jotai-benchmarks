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
typedef  int u32 ;
struct gb_sdio_host {int card_present; TYPE_1__* mmc; } ;
struct TYPE_2__ {int caps; int caps2; } ;

/* Variables and functions */
 int GB_SDIO_CAP_1_2V_DDR ; 
 int GB_SDIO_CAP_1_8V_DDR ; 
 int GB_SDIO_CAP_4_BIT_DATA ; 
 int GB_SDIO_CAP_8_BIT_DATA ; 
 int GB_SDIO_CAP_DRIVER_TYPE_A ; 
 int GB_SDIO_CAP_DRIVER_TYPE_C ; 
 int GB_SDIO_CAP_DRIVER_TYPE_D ; 
 int GB_SDIO_CAP_ERASE ; 
 int GB_SDIO_CAP_HS200_1_2V ; 
 int GB_SDIO_CAP_HS200_1_8V ; 
 int GB_SDIO_CAP_HS400_1_2V ; 
 int GB_SDIO_CAP_HS400_1_8V ; 
 int GB_SDIO_CAP_MMC_HS ; 
 int GB_SDIO_CAP_NONREMOVABLE ; 
 int GB_SDIO_CAP_POWER_OFF_CARD ; 
 int GB_SDIO_CAP_SD_HS ; 
 int GB_SDIO_CAP_UHS_DDR50 ; 
 int GB_SDIO_CAP_UHS_SDR104 ; 
 int GB_SDIO_CAP_UHS_SDR12 ; 
 int GB_SDIO_CAP_UHS_SDR25 ; 
 int GB_SDIO_CAP_UHS_SDR50 ; 
 int MMC_CAP2_CORE_RUNTIME_PM ; 
 int MMC_CAP2_HS200_1_2V_SDR ; 
 int MMC_CAP2_HS200_1_8V_SDR ; 
 int MMC_CAP2_HS400_1_2V ; 
 int MMC_CAP2_HS400_1_8V ; 
 int MMC_CAP_1_2V_DDR ; 
 int MMC_CAP_1_8V_DDR ; 
 int MMC_CAP_4_BIT_DATA ; 
 int MMC_CAP_8_BIT_DATA ; 
 int MMC_CAP_DRIVER_TYPE_A ; 
 int MMC_CAP_DRIVER_TYPE_C ; 
 int MMC_CAP_DRIVER_TYPE_D ; 
 int MMC_CAP_ERASE ; 
 int MMC_CAP_MMC_HIGHSPEED ; 
 int MMC_CAP_NONREMOVABLE ; 
 int MMC_CAP_POWER_OFF_CARD ; 
 int MMC_CAP_SD_HIGHSPEED ; 
 int MMC_CAP_UHS_DDR50 ; 
 int MMC_CAP_UHS_SDR104 ; 
 int MMC_CAP_UHS_SDR12 ; 
 int MMC_CAP_UHS_SDR25 ; 
 int MMC_CAP_UHS_SDR50 ; 

__attribute__((used)) static void _gb_sdio_set_host_caps(struct gb_sdio_host *host, u32 r)
{
	u32 caps = 0;
	u32 caps2 = 0;

	caps = ((r & GB_SDIO_CAP_NONREMOVABLE) ? MMC_CAP_NONREMOVABLE : 0) |
		((r & GB_SDIO_CAP_4_BIT_DATA) ? MMC_CAP_4_BIT_DATA : 0) |
		((r & GB_SDIO_CAP_8_BIT_DATA) ? MMC_CAP_8_BIT_DATA : 0) |
		((r & GB_SDIO_CAP_MMC_HS) ? MMC_CAP_MMC_HIGHSPEED : 0) |
		((r & GB_SDIO_CAP_SD_HS) ? MMC_CAP_SD_HIGHSPEED : 0) |
		((r & GB_SDIO_CAP_ERASE) ? MMC_CAP_ERASE : 0) |
		((r & GB_SDIO_CAP_1_2V_DDR) ? MMC_CAP_1_2V_DDR : 0) |
		((r & GB_SDIO_CAP_1_8V_DDR) ? MMC_CAP_1_8V_DDR : 0) |
		((r & GB_SDIO_CAP_POWER_OFF_CARD) ? MMC_CAP_POWER_OFF_CARD : 0) |
		((r & GB_SDIO_CAP_UHS_SDR12) ? MMC_CAP_UHS_SDR12 : 0) |
		((r & GB_SDIO_CAP_UHS_SDR25) ? MMC_CAP_UHS_SDR25 : 0) |
		((r & GB_SDIO_CAP_UHS_SDR50) ? MMC_CAP_UHS_SDR50 : 0) |
		((r & GB_SDIO_CAP_UHS_SDR104) ? MMC_CAP_UHS_SDR104 : 0) |
		((r & GB_SDIO_CAP_UHS_DDR50) ? MMC_CAP_UHS_DDR50 : 0) |
		((r & GB_SDIO_CAP_DRIVER_TYPE_A) ? MMC_CAP_DRIVER_TYPE_A : 0) |
		((r & GB_SDIO_CAP_DRIVER_TYPE_C) ? MMC_CAP_DRIVER_TYPE_C : 0) |
		((r & GB_SDIO_CAP_DRIVER_TYPE_D) ? MMC_CAP_DRIVER_TYPE_D : 0);

	caps2 = ((r & GB_SDIO_CAP_HS200_1_2V) ? MMC_CAP2_HS200_1_2V_SDR : 0) |
		((r & GB_SDIO_CAP_HS400_1_2V) ? MMC_CAP2_HS400_1_2V : 0) |
		((r & GB_SDIO_CAP_HS400_1_8V) ? MMC_CAP2_HS400_1_8V : 0) |
		((r & GB_SDIO_CAP_HS200_1_8V) ? MMC_CAP2_HS200_1_8V_SDR : 0);

	host->mmc->caps = caps;
	host->mmc->caps2 = caps2 | MMC_CAP2_CORE_RUNTIME_PM;

	if (caps & MMC_CAP_NONREMOVABLE)
		host->card_present = true;
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
          int r = 100;
          int _len_host0 = 1;
          struct gb_sdio_host * host = (struct gb_sdio_host *) malloc(_len_host0*sizeof(struct gb_sdio_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].card_present = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__mmc0 = 1;
          host[_i0].mmc = (struct TYPE_2__ *) malloc(_len_host__i0__mmc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__mmc0; _j0++) {
            host[_i0].mmc->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].mmc->caps2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _gb_sdio_set_host_caps(host,r);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].mmc);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
