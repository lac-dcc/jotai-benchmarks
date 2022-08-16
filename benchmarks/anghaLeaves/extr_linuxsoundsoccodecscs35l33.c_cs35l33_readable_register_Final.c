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
struct device {int dummy; } ;

/* Variables and functions */
#define  CS35L33_ADC_CTL 169 
#define  CS35L33_ADSP_CTL 168 
#define  CS35L33_AMP_CTL 167 
#define  CS35L33_BST_CTL1 166 
#define  CS35L33_BST_CTL2 165 
#define  CS35L33_BST_CTL4 164 
#define  CS35L33_BST_PEAK_CTL 163 
#define  CS35L33_CLASSD_CTL 162 
#define  CS35L33_CLK_CTL 161 
#define  CS35L33_DAC_CTL 160 
#define  CS35L33_DEVID_AB 159 
#define  CS35L33_DEVID_CD 158 
#define  CS35L33_DEVID_E 157 
#define  CS35L33_DIAG_CTRL_1 156 
#define  CS35L33_DIAG_CTRL_2 155 
#define  CS35L33_DIAG_LOCK 154 
#define  CS35L33_DIG_VOL_CTL 153 
#define  CS35L33_HG_EN 152 
#define  CS35L33_HG_HEAD 151 
#define  CS35L33_HG_MEMLDO_CTL 150 
#define  CS35L33_HG_REL_RATE 149 
#define  CS35L33_INT_MASK_1 148 
#define  CS35L33_INT_MASK_2 147 
#define  CS35L33_INT_STATUS_1 146 
#define  CS35L33_INT_STATUS_2 145 
#define  CS35L33_LDO_DEL 144 
#define  CS35L33_PROTECT_CTL 143 
#define  CS35L33_PWRCTL1 142 
#define  CS35L33_PWRCTL2 141 
#define  CS35L33_REV_ID 140 
#define  CS35L33_RX_ALIVE 139 
#define  CS35L33_RX_AUD 138 
#define  CS35L33_RX_SPLY 137 
#define  CS35L33_TX_EN1 136 
#define  CS35L33_TX_EN2 135 
#define  CS35L33_TX_EN3 134 
#define  CS35L33_TX_EN4 133 
#define  CS35L33_TX_FLAG 132 
#define  CS35L33_TX_IMON 131 
#define  CS35L33_TX_VBSTMON 130 
#define  CS35L33_TX_VMON 129 
#define  CS35L33_TX_VPMON 128 

__attribute__((used)) static bool cs35l33_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case CS35L33_DEVID_AB:
	case CS35L33_DEVID_CD:
	case CS35L33_DEVID_E:
	case CS35L33_REV_ID:
	case CS35L33_PWRCTL1:
	case CS35L33_PWRCTL2:
	case CS35L33_CLK_CTL:
	case CS35L33_BST_PEAK_CTL:
	case CS35L33_PROTECT_CTL:
	case CS35L33_BST_CTL1:
	case CS35L33_BST_CTL2:
	case CS35L33_ADSP_CTL:
	case CS35L33_ADC_CTL:
	case CS35L33_DAC_CTL:
	case CS35L33_DIG_VOL_CTL:
	case CS35L33_CLASSD_CTL:
	case CS35L33_AMP_CTL:
	case CS35L33_INT_MASK_1:
	case CS35L33_INT_MASK_2:
	case CS35L33_INT_STATUS_1:
	case CS35L33_INT_STATUS_2:
	case CS35L33_DIAG_LOCK:
	case CS35L33_DIAG_CTRL_1:
	case CS35L33_DIAG_CTRL_2:
	case CS35L33_HG_MEMLDO_CTL:
	case CS35L33_HG_REL_RATE:
	case CS35L33_LDO_DEL:
	case CS35L33_HG_HEAD:
	case CS35L33_HG_EN:
	case CS35L33_TX_VMON:
	case CS35L33_TX_IMON:
	case CS35L33_TX_VPMON:
	case CS35L33_TX_VBSTMON:
	case CS35L33_TX_FLAG:
	case CS35L33_TX_EN1:
	case CS35L33_TX_EN2:
	case CS35L33_TX_EN3:
	case CS35L33_TX_EN4:
	case CS35L33_RX_AUD:
	case CS35L33_RX_SPLY:
	case CS35L33_RX_ALIVE:
	case CS35L33_BST_CTL4:
		return true;
	default:
		return false;
	}
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
          unsigned int reg = 100;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cs35l33_readable_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cs35l33_readable_register(dev,reg);
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
