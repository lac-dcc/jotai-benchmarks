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
struct sdma_engine {TYPE_1__* script_addrs; } ;
struct sdma_channel {int pc_from_device; int pc_to_device; int device_to_device; int pc_to_pc; struct sdma_engine* sdma; } ;
typedef  enum sdma_peripheral_type { ____Placeholder_sdma_peripheral_type } sdma_peripheral_type ;
struct TYPE_2__ {int ap_2_ap_addr; int bp_2_ap_addr; int ap_2_bp_addr; int firi_2_mcu_addr; int mcu_2_firi_addr; int uart_2_mcu_addr; int mcu_2_app_addr; int uartsh_2_mcu_addr; int mcu_2_shp_addr; int ata_2_mcu_addr; int mcu_2_ata_addr; int app_2_mcu_addr; int ssish_2_mcu_addr; int mcu_2_ssish_addr; int shp_2_mcu_addr; int asrc_2_mcu_addr; int per_2_per_addr; int mshc_2_mcu_addr; int mcu_2_mshc_addr; int dptc_dvfs_addr; int spdif_2_mcu_addr; int mcu_2_spdif_addr; int ext_mem_2_ipu_addr; } ;

/* Variables and functions */
#define  IMX_DMATYPE_ASRC 150 
#define  IMX_DMATYPE_ASRC_SP 149 
#define  IMX_DMATYPE_ATA 148 
#define  IMX_DMATYPE_CCM 147 
#define  IMX_DMATYPE_CSPI 146 
#define  IMX_DMATYPE_CSPI_SP 145 
#define  IMX_DMATYPE_DSP 144 
#define  IMX_DMATYPE_ESAI 143 
#define  IMX_DMATYPE_EXT 142 
#define  IMX_DMATYPE_FIRI 141 
#define  IMX_DMATYPE_IPU_MEMORY 140 
#define  IMX_DMATYPE_MEMORY 139 
#define  IMX_DMATYPE_MMC 138 
#define  IMX_DMATYPE_MSHC 137 
#define  IMX_DMATYPE_MSHC_SP 136 
#define  IMX_DMATYPE_SAI 135 
#define  IMX_DMATYPE_SDHC 134 
#define  IMX_DMATYPE_SPDIF 133 
#define  IMX_DMATYPE_SSI 132 
#define  IMX_DMATYPE_SSI_DUAL 131 
#define  IMX_DMATYPE_SSI_SP 130 
#define  IMX_DMATYPE_UART 129 
#define  IMX_DMATYPE_UART_SP 128 

__attribute__((used)) static void sdma_get_pc(struct sdma_channel *sdmac,
		enum sdma_peripheral_type peripheral_type)
{
	struct sdma_engine *sdma = sdmac->sdma;
	int per_2_emi = 0, emi_2_per = 0;
	/*
	 * These are needed once we start to support transfers between
	 * two peripherals or memory-to-memory transfers
	 */
	int per_2_per = 0, emi_2_emi = 0;

	sdmac->pc_from_device = 0;
	sdmac->pc_to_device = 0;
	sdmac->device_to_device = 0;
	sdmac->pc_to_pc = 0;

	switch (peripheral_type) {
	case IMX_DMATYPE_MEMORY:
		emi_2_emi = sdma->script_addrs->ap_2_ap_addr;
		break;
	case IMX_DMATYPE_DSP:
		emi_2_per = sdma->script_addrs->bp_2_ap_addr;
		per_2_emi = sdma->script_addrs->ap_2_bp_addr;
		break;
	case IMX_DMATYPE_FIRI:
		per_2_emi = sdma->script_addrs->firi_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_firi_addr;
		break;
	case IMX_DMATYPE_UART:
		per_2_emi = sdma->script_addrs->uart_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_app_addr;
		break;
	case IMX_DMATYPE_UART_SP:
		per_2_emi = sdma->script_addrs->uartsh_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_shp_addr;
		break;
	case IMX_DMATYPE_ATA:
		per_2_emi = sdma->script_addrs->ata_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_ata_addr;
		break;
	case IMX_DMATYPE_CSPI:
	case IMX_DMATYPE_EXT:
	case IMX_DMATYPE_SSI:
	case IMX_DMATYPE_SAI:
		per_2_emi = sdma->script_addrs->app_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_app_addr;
		break;
	case IMX_DMATYPE_SSI_DUAL:
		per_2_emi = sdma->script_addrs->ssish_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_ssish_addr;
		break;
	case IMX_DMATYPE_SSI_SP:
	case IMX_DMATYPE_MMC:
	case IMX_DMATYPE_SDHC:
	case IMX_DMATYPE_CSPI_SP:
	case IMX_DMATYPE_ESAI:
	case IMX_DMATYPE_MSHC_SP:
		per_2_emi = sdma->script_addrs->shp_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_shp_addr;
		break;
	case IMX_DMATYPE_ASRC:
		per_2_emi = sdma->script_addrs->asrc_2_mcu_addr;
		emi_2_per = sdma->script_addrs->asrc_2_mcu_addr;
		per_2_per = sdma->script_addrs->per_2_per_addr;
		break;
	case IMX_DMATYPE_ASRC_SP:
		per_2_emi = sdma->script_addrs->shp_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_shp_addr;
		per_2_per = sdma->script_addrs->per_2_per_addr;
		break;
	case IMX_DMATYPE_MSHC:
		per_2_emi = sdma->script_addrs->mshc_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_mshc_addr;
		break;
	case IMX_DMATYPE_CCM:
		per_2_emi = sdma->script_addrs->dptc_dvfs_addr;
		break;
	case IMX_DMATYPE_SPDIF:
		per_2_emi = sdma->script_addrs->spdif_2_mcu_addr;
		emi_2_per = sdma->script_addrs->mcu_2_spdif_addr;
		break;
	case IMX_DMATYPE_IPU_MEMORY:
		emi_2_per = sdma->script_addrs->ext_mem_2_ipu_addr;
		break;
	default:
		break;
	}

	sdmac->pc_from_device = per_2_emi;
	sdmac->pc_to_device = emi_2_per;
	sdmac->device_to_device = per_2_per;
	sdmac->pc_to_pc = emi_2_emi;
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
          enum sdma_peripheral_type peripheral_type = 0;
          int _len_sdmac0 = 1;
          struct sdma_channel * sdmac = (struct sdma_channel *) malloc(_len_sdmac0*sizeof(struct sdma_channel));
          for(int _i0 = 0; _i0 < _len_sdmac0; _i0++) {
            sdmac[_i0].pc_from_device = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].pc_to_device = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].device_to_device = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].pc_to_pc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdmac__i0__sdma0 = 1;
          sdmac[_i0].sdma = (struct sdma_engine *) malloc(_len_sdmac__i0__sdma0*sizeof(struct sdma_engine));
          for(int _j0 = 0; _j0 < _len_sdmac__i0__sdma0; _j0++) {
              int _len_sdmac__i0__sdma_script_addrs0 = 1;
          sdmac[_i0].sdma->script_addrs = (struct TYPE_2__ *) malloc(_len_sdmac__i0__sdma_script_addrs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdmac__i0__sdma_script_addrs0; _j0++) {
            sdmac[_i0].sdma->script_addrs->ap_2_ap_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->bp_2_ap_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->ap_2_bp_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->firi_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mcu_2_firi_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->uart_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mcu_2_app_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->uartsh_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mcu_2_shp_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->ata_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mcu_2_ata_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->app_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->ssish_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mcu_2_ssish_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->shp_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->asrc_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->per_2_per_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mshc_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mcu_2_mshc_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->dptc_dvfs_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->spdif_2_mcu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->mcu_2_spdif_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sdmac[_i0].sdma->script_addrs->ext_mem_2_ipu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          sdma_get_pc(sdmac,peripheral_type);
          for(int _aux = 0; _aux < _len_sdmac0; _aux++) {
          free(sdmac[_aux].sdma);
          }
          free(sdmac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
