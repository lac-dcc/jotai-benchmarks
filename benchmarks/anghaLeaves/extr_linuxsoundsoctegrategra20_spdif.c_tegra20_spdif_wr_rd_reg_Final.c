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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct device {int dummy; } ;

/* Variables and functions */
#define  TEGRA20_SPDIF_CH_STA_RX_A 147 
#define  TEGRA20_SPDIF_CH_STA_RX_B 146 
#define  TEGRA20_SPDIF_CH_STA_RX_C 145 
#define  TEGRA20_SPDIF_CH_STA_RX_D 144 
#define  TEGRA20_SPDIF_CH_STA_RX_E 143 
#define  TEGRA20_SPDIF_CH_STA_RX_F 142 
#define  TEGRA20_SPDIF_CH_STA_TX_A 141 
#define  TEGRA20_SPDIF_CH_STA_TX_B 140 
#define  TEGRA20_SPDIF_CH_STA_TX_C 139 
#define  TEGRA20_SPDIF_CH_STA_TX_D 138 
#define  TEGRA20_SPDIF_CH_STA_TX_E 137 
#define  TEGRA20_SPDIF_CH_STA_TX_F 136 
#define  TEGRA20_SPDIF_CTRL 135 
#define  TEGRA20_SPDIF_DATA_FIFO_CSR 134 
#define  TEGRA20_SPDIF_DATA_IN 133 
#define  TEGRA20_SPDIF_DATA_OUT 132 
#define  TEGRA20_SPDIF_STATUS 131 
#define  TEGRA20_SPDIF_STROBE_CTRL 130 
#define  TEGRA20_SPDIF_USR_DAT_TX_A 129 
#define  TEGRA20_SPDIF_USR_STA_RX_A 128 

__attribute__((used)) static bool tegra20_spdif_wr_rd_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case TEGRA20_SPDIF_CTRL:
	case TEGRA20_SPDIF_STATUS:
	case TEGRA20_SPDIF_STROBE_CTRL:
	case TEGRA20_SPDIF_DATA_FIFO_CSR:
	case TEGRA20_SPDIF_DATA_OUT:
	case TEGRA20_SPDIF_DATA_IN:
	case TEGRA20_SPDIF_CH_STA_RX_A:
	case TEGRA20_SPDIF_CH_STA_RX_B:
	case TEGRA20_SPDIF_CH_STA_RX_C:
	case TEGRA20_SPDIF_CH_STA_RX_D:
	case TEGRA20_SPDIF_CH_STA_RX_E:
	case TEGRA20_SPDIF_CH_STA_RX_F:
	case TEGRA20_SPDIF_CH_STA_TX_A:
	case TEGRA20_SPDIF_CH_STA_TX_B:
	case TEGRA20_SPDIF_CH_STA_TX_C:
	case TEGRA20_SPDIF_CH_STA_TX_D:
	case TEGRA20_SPDIF_CH_STA_TX_E:
	case TEGRA20_SPDIF_CH_STA_TX_F:
	case TEGRA20_SPDIF_USR_STA_RX_A:
	case TEGRA20_SPDIF_USR_DAT_TX_A:
		return true;
	default:
		return false;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = 100;
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tegra20_spdif_wr_rd_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = 255;
        
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tegra20_spdif_wr_rd_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = 10;
        
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tegra20_spdif_wr_rd_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tegra20_spdif_wr_rd_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
