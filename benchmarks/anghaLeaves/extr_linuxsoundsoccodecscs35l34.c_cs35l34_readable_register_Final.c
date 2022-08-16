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
#define  CS35L34_ADSP_CLK_CTL 197 
#define  CS35L34_ADSP_I2S_CTL 196 
#define  CS35L34_ADSP_TDM_CTL 195 
#define  CS35L34_AMP_ANLG_GAIN_CTL 194 
#define  CS35L34_AMP_DIG_VOL 193 
#define  CS35L34_AMP_DIG_VOL_CTL 192 
#define  CS35L34_AMP_INP_DRV_CTL 191 
#define  CS35L34_AMP_KEEP_ALIVE_CTL 190 
#define  CS35L34_BST_CONV_COEF_1 189 
#define  CS35L34_BST_CONV_COEF_2 188 
#define  CS35L34_BST_CONV_SLOPE_COMP 187 
#define  CS35L34_BST_CONV_SW_FREQ 186 
#define  CS35L34_BST_CVTR_V_CTL 185 
#define  CS35L34_BST_PEAK_I 184 
#define  CS35L34_BST_RAMP_CTL 183 
#define  CS35L34_CLASS_H_CTL 182 
#define  CS35L34_CLASS_H_FET_DRIVE_CTL 181 
#define  CS35L34_CLASS_H_HEADRM_CTL 180 
#define  CS35L34_CLASS_H_RELEASE_RATE 179 
#define  CS35L34_CLASS_H_STATUS 178 
#define  CS35L34_DEVID_AB 177 
#define  CS35L34_DEVID_CD 176 
#define  CS35L34_DEVID_E 175 
#define  CS35L34_DIAG_MODE_CTL_1 174 
#define  CS35L34_DIAG_MODE_CTL_2 173 
#define  CS35L34_DIAG_MODE_REG_LOCK 172 
#define  CS35L34_FAB_ID 171 
#define  CS35L34_INT_MASK_1 170 
#define  CS35L34_INT_MASK_2 169 
#define  CS35L34_INT_MASK_3 168 
#define  CS35L34_INT_MASK_4 167 
#define  CS35L34_INT_STATUS_1 166 
#define  CS35L34_INT_STATUS_2 165 
#define  CS35L34_INT_STATUS_3 164 
#define  CS35L34_INT_STATUS_4 163 
#define  CS35L34_MCLK_CTL 162 
#define  CS35L34_MULT_DEV_SYNCH1 161 
#define  CS35L34_MULT_DEV_SYNCH2 160 
#define  CS35L34_OTP_TRIM_STATUS 159 
#define  CS35L34_PRED_BROWNOUT_RATE_CTL 158 
#define  CS35L34_PRED_BROWNOUT_THRESH 157 
#define  CS35L34_PRED_BROWNOUT_VOL_CTL 156 
#define  CS35L34_PRED_BRWNOUT_ATT_STATUS 155 
#define  CS35L34_PRED_MAN_SAFE_VPI_CTL 154 
#define  CS35L34_PRED_MAX_ATTEN_SPK_LOAD 153 
#define  CS35L34_PRED_WAIT_CTL 152 
#define  CS35L34_PRED_ZVP_INIT_IMP_CTL 151 
#define  CS35L34_PROTECT_CTL 150 
#define  CS35L34_PROT_RELEASE_CTL 149 
#define  CS35L34_PWRCTL1 148 
#define  CS35L34_PWRCTL2 147 
#define  CS35L34_PWRCTL3 146 
#define  CS35L34_REV_ID 145 
#define  CS35L34_SPKR_MON_CTL 144 
#define  CS35L34_TDM_RX_CTL_1_AUDIN 143 
#define  CS35L34_TDM_RX_CTL_3_ALIVE 142 
#define  CS35L34_TDM_TX_CTL_1_VMON 141 
#define  CS35L34_TDM_TX_CTL_2_IMON 140 
#define  CS35L34_TDM_TX_CTL_3_VPMON 139 
#define  CS35L34_TDM_TX_CTL_4_VBSTMON 138 
#define  CS35L34_TDM_TX_CTL_5_FLAG1 137 
#define  CS35L34_TDM_TX_CTL_6_FLAG2 136 
#define  CS35L34_TDM_TX_SLOT_EN_1 135 
#define  CS35L34_TDM_TX_SLOT_EN_2 134 
#define  CS35L34_TDM_TX_SLOT_EN_3 133 
#define  CS35L34_TDM_TX_SLOT_EN_4 132 
#define  CS35L34_VPBR_ATTEN_STATUS 131 
#define  CS35L34_VPBR_CTL 130 
#define  CS35L34_VPBR_TIMING_CTL 129 
#define  CS35L34_VPBR_VOL_CTL 128 

__attribute__((used)) static bool cs35l34_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case	CS35L34_DEVID_AB:
	case	CS35L34_DEVID_CD:
	case	CS35L34_DEVID_E:
	case	CS35L34_FAB_ID:
	case	CS35L34_REV_ID:
	case	CS35L34_PWRCTL1:
	case	CS35L34_PWRCTL2:
	case	CS35L34_PWRCTL3:
	case	CS35L34_ADSP_CLK_CTL:
	case	CS35L34_MCLK_CTL:
	case	CS35L34_AMP_INP_DRV_CTL:
	case	CS35L34_AMP_DIG_VOL_CTL:
	case	CS35L34_AMP_DIG_VOL:
	case	CS35L34_AMP_ANLG_GAIN_CTL:
	case	CS35L34_PROTECT_CTL:
	case	CS35L34_AMP_KEEP_ALIVE_CTL:
	case	CS35L34_BST_CVTR_V_CTL:
	case	CS35L34_BST_PEAK_I:
	case	CS35L34_BST_RAMP_CTL:
	case	CS35L34_BST_CONV_COEF_1:
	case	CS35L34_BST_CONV_COEF_2:
	case	CS35L34_BST_CONV_SLOPE_COMP:
	case	CS35L34_BST_CONV_SW_FREQ:
	case	CS35L34_CLASS_H_CTL:
	case	CS35L34_CLASS_H_HEADRM_CTL:
	case	CS35L34_CLASS_H_RELEASE_RATE:
	case	CS35L34_CLASS_H_FET_DRIVE_CTL:
	case	CS35L34_CLASS_H_STATUS:
	case	CS35L34_VPBR_CTL:
	case	CS35L34_VPBR_VOL_CTL:
	case	CS35L34_VPBR_TIMING_CTL:
	case	CS35L34_PRED_MAX_ATTEN_SPK_LOAD:
	case	CS35L34_PRED_BROWNOUT_THRESH:
	case	CS35L34_PRED_BROWNOUT_VOL_CTL:
	case	CS35L34_PRED_BROWNOUT_RATE_CTL:
	case	CS35L34_PRED_WAIT_CTL:
	case	CS35L34_PRED_ZVP_INIT_IMP_CTL:
	case	CS35L34_PRED_MAN_SAFE_VPI_CTL:
	case	CS35L34_VPBR_ATTEN_STATUS:
	case	CS35L34_PRED_BRWNOUT_ATT_STATUS:
	case	CS35L34_SPKR_MON_CTL:
	case	CS35L34_ADSP_I2S_CTL:
	case	CS35L34_ADSP_TDM_CTL:
	case	CS35L34_TDM_TX_CTL_1_VMON:
	case	CS35L34_TDM_TX_CTL_2_IMON:
	case	CS35L34_TDM_TX_CTL_3_VPMON:
	case	CS35L34_TDM_TX_CTL_4_VBSTMON:
	case	CS35L34_TDM_TX_CTL_5_FLAG1:
	case	CS35L34_TDM_TX_CTL_6_FLAG2:
	case	CS35L34_TDM_TX_SLOT_EN_1:
	case	CS35L34_TDM_TX_SLOT_EN_2:
	case	CS35L34_TDM_TX_SLOT_EN_3:
	case	CS35L34_TDM_TX_SLOT_EN_4:
	case	CS35L34_TDM_RX_CTL_1_AUDIN:
	case	CS35L34_TDM_RX_CTL_3_ALIVE:
	case	CS35L34_MULT_DEV_SYNCH1:
	case	CS35L34_MULT_DEV_SYNCH2:
	case	CS35L34_PROT_RELEASE_CTL:
	case	CS35L34_DIAG_MODE_REG_LOCK:
	case	CS35L34_DIAG_MODE_CTL_1:
	case	CS35L34_DIAG_MODE_CTL_2:
	case	CS35L34_INT_MASK_1:
	case	CS35L34_INT_MASK_2:
	case	CS35L34_INT_MASK_3:
	case	CS35L34_INT_MASK_4:
	case	CS35L34_INT_STATUS_1:
	case	CS35L34_INT_STATUS_2:
	case	CS35L34_INT_STATUS_3:
	case	CS35L34_INT_STATUS_4:
	case	CS35L34_OTP_TRIM_STATUS:
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
          int benchRet = cs35l34_readable_register(dev,reg);
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
          int benchRet = cs35l34_readable_register(dev,reg);
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
