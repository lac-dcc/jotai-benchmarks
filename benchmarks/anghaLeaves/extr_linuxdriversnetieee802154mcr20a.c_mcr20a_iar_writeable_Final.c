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
#define  IAR_ACKDELAY 198 
#define  IAR_AGC_THR1 197 
#define  IAR_AGC_THR2 196 
#define  IAR_ANT_AGC_CTRL 195 
#define  IAR_ANT_PAD_CTRL 194 
#define  IAR_ATT_RSSI1 193 
#define  IAR_ATT_RSSI2 192 
#define  IAR_BSM_CTRL 191 
#define  IAR_CCA1_ED_OFFSET_COMP 190 
#define  IAR_CCA1_THRESH 189 
#define  IAR_CCA2_CORR_PEAKS 188 
#define  IAR_CCA2_CORR_THRESH 187 
#define  IAR_CCA_CTRL 186 
#define  IAR_CHF_CC1 185 
#define  IAR_CHF_CC2 184 
#define  IAR_CHF_CCL 183 
#define  IAR_CHF_IBUF 182 
#define  IAR_CHF_IL 181 
#define  IAR_CHF_IRIN 180 
#define  IAR_CHF_IROUT 179 
#define  IAR_CHF_PMA_GAIN 178 
#define  IAR_CHF_QBUF 177 
#define  IAR_CHF_QL 176 
#define  IAR_CHF_QRIN 175 
#define  IAR_CHF_QROUT 174 
#define  IAR_CORR_NVAL 173 
#define  IAR_DUAL_PAN_CTRL 172 
#define  IAR_DUAL_PAN_DWELL 171 
#define  IAR_LQI_OFFSET_COMP 170 
#define  IAR_MACLONGADDRS0_0 169 
#define  IAR_MACLONGADDRS0_16 168 
#define  IAR_MACLONGADDRS0_24 167 
#define  IAR_MACLONGADDRS0_32 166 
#define  IAR_MACLONGADDRS0_40 165 
#define  IAR_MACLONGADDRS0_48 164 
#define  IAR_MACLONGADDRS0_56 163 
#define  IAR_MACLONGADDRS0_8 162 
#define  IAR_MACLONGADDRS1_0 161 
#define  IAR_MACLONGADDRS1_16 160 
#define  IAR_MACLONGADDRS1_24 159 
#define  IAR_MACLONGADDRS1_32 158 
#define  IAR_MACLONGADDRS1_40 157 
#define  IAR_MACLONGADDRS1_48 156 
#define  IAR_MACLONGADDRS1_56 155 
#define  IAR_MACLONGADDRS1_8 154 
#define  IAR_MACPANID0_LSB 153 
#define  IAR_MACPANID0_MSB 152 
#define  IAR_MACPANID1_LSB 151 
#define  IAR_MACPANID1_MSB 150 
#define  IAR_MACSHORTADDRS0_LSB 149 
#define  IAR_MACSHORTADDRS0_MSB 148 
#define  IAR_MACSHORTADDRS1_LSB 147 
#define  IAR_MACSHORTADDRS1_MSB 146 
#define  IAR_MISC_PAD_CTRL 145 
#define  IAR_PA_CAL 144 
#define  IAR_PA_TUNING 143 
#define  IAR_PLL_FRAC1_LSB 142 
#define  IAR_PLL_FRAC1_MSB 141 
#define  IAR_PLL_INT1 140 
#define  IAR_PMC_LP_TRIM 139 
#define  IAR_RNG 138 
#define  IAR_RSSI_OFFSET 137 
#define  IAR_RX_FRAME_FILTER 136 
#define  IAR_RX_WTR_MARK 135 
#define  IAR_SOFT_RESET 134 
#define  IAR_TMR_PRESCALE 133 
#define  IAR_TXDELAY 132 
#define  IAR_VCO_CTRL1 131 
#define  IAR_VCO_CTRL2 130 
#define  IAR_XTAL_CTRL 129 
#define  IAR_XTAL_TRIM 128 

__attribute__((used)) static bool
mcr20a_iar_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case IAR_XTAL_TRIM:
	case IAR_PMC_LP_TRIM:
	case IAR_MACPANID0_LSB:
	case IAR_MACPANID0_MSB:
	case IAR_MACSHORTADDRS0_LSB:
	case IAR_MACSHORTADDRS0_MSB:
	case IAR_MACLONGADDRS0_0:
	case IAR_MACLONGADDRS0_8:
	case IAR_MACLONGADDRS0_16:
	case IAR_MACLONGADDRS0_24:
	case IAR_MACLONGADDRS0_32:
	case IAR_MACLONGADDRS0_40:
	case IAR_MACLONGADDRS0_48:
	case IAR_MACLONGADDRS0_56:
	case IAR_RX_FRAME_FILTER:
	case IAR_PLL_INT1:
	case IAR_PLL_FRAC1_LSB:
	case IAR_PLL_FRAC1_MSB:
	case IAR_MACPANID1_LSB:
	case IAR_MACPANID1_MSB:
	case IAR_MACSHORTADDRS1_LSB:
	case IAR_MACSHORTADDRS1_MSB:
	case IAR_MACLONGADDRS1_0:
	case IAR_MACLONGADDRS1_8:
	case IAR_MACLONGADDRS1_16:
	case IAR_MACLONGADDRS1_24:
	case IAR_MACLONGADDRS1_32:
	case IAR_MACLONGADDRS1_40:
	case IAR_MACLONGADDRS1_48:
	case IAR_MACLONGADDRS1_56:
	case IAR_DUAL_PAN_CTRL:
	case IAR_DUAL_PAN_DWELL:
	case IAR_CCA1_THRESH:
	case IAR_CCA1_ED_OFFSET_COMP:
	case IAR_LQI_OFFSET_COMP:
	case IAR_CCA_CTRL:
	case IAR_CCA2_CORR_PEAKS:
	case IAR_CCA2_CORR_THRESH:
	case IAR_TMR_PRESCALE:
	case IAR_ANT_PAD_CTRL:
	case IAR_MISC_PAD_CTRL:
	case IAR_BSM_CTRL:
	case IAR_RNG:
	case IAR_RX_WTR_MARK:
	case IAR_SOFT_RESET:
	case IAR_TXDELAY:
	case IAR_ACKDELAY:
	case IAR_CORR_NVAL:
	case IAR_ANT_AGC_CTRL:
	case IAR_AGC_THR1:
	case IAR_AGC_THR2:
	case IAR_PA_CAL:
	case IAR_ATT_RSSI1:
	case IAR_ATT_RSSI2:
	case IAR_RSSI_OFFSET:
	case IAR_XTAL_CTRL:
	case IAR_CHF_PMA_GAIN:
	case IAR_CHF_IBUF:
	case IAR_CHF_QBUF:
	case IAR_CHF_IRIN:
	case IAR_CHF_QRIN:
	case IAR_CHF_IL:
	case IAR_CHF_QL:
	case IAR_CHF_CC1:
	case IAR_CHF_CCL:
	case IAR_CHF_CC2:
	case IAR_CHF_IROUT:
	case IAR_CHF_QROUT:
	case IAR_PA_TUNING:
	case IAR_VCO_CTRL1:
	case IAR_VCO_CTRL2:
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
          int benchRet = mcr20a_iar_writeable(dev,reg);
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
          int benchRet = mcr20a_iar_writeable(dev,reg);
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
