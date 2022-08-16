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
typedef  int u8 ;
typedef  enum hdmi_aud_channel_type { ____Placeholder_hdmi_aud_channel_type } hdmi_aud_channel_type ;

/* Variables and functions */
#define  HDMI_AUD_CHAN_TYPE_1_0 182 
#define  HDMI_AUD_CHAN_TYPE_1_1 181 
#define  HDMI_AUD_CHAN_TYPE_2_0 180 
#define  HDMI_AUD_CHAN_TYPE_2_1 179 
#define  HDMI_AUD_CHAN_TYPE_3_0 178 
#define  HDMI_AUD_CHAN_TYPE_3_0_LRS 177 
#define  HDMI_AUD_CHAN_TYPE_3_1 176 
#define  HDMI_AUD_CHAN_TYPE_3_1_LRS 175 
#define  HDMI_AUD_CHAN_TYPE_4_0 174 
#define  HDMI_AUD_CHAN_TYPE_4_0_CLRS 173 
#define  HDMI_AUD_CHAN_TYPE_4_1 172 
#define  HDMI_AUD_CHAN_TYPE_4_1_CLRS 171 
#define  HDMI_AUD_CHAN_TYPE_5_0 170 
#define  HDMI_AUD_CHAN_TYPE_5_1 169 
#define  HDMI_AUD_CHAN_TYPE_6_0 168 
#define  HDMI_AUD_CHAN_TYPE_6_0_CH 167 
#define  HDMI_AUD_CHAN_TYPE_6_0_CHR 166 
#define  HDMI_AUD_CHAN_TYPE_6_0_CS 165 
#define  HDMI_AUD_CHAN_TYPE_6_0_OH 164 
#define  HDMI_AUD_CHAN_TYPE_6_1 163 
#define  HDMI_AUD_CHAN_TYPE_6_1_CH 162 
#define  HDMI_AUD_CHAN_TYPE_6_1_CHR 161 
#define  HDMI_AUD_CHAN_TYPE_6_1_CS 160 
#define  HDMI_AUD_CHAN_TYPE_6_1_OH 159 
#define  HDMI_AUD_CHAN_TYPE_7_0 158 
#define  HDMI_AUD_CHAN_TYPE_7_0_CH_CHR 157 
#define  HDMI_AUD_CHAN_TYPE_7_0_CH_OH 156 
#define  HDMI_AUD_CHAN_TYPE_7_0_CS_CH 155 
#define  HDMI_AUD_CHAN_TYPE_7_0_CS_CHR 154 
#define  HDMI_AUD_CHAN_TYPE_7_0_CS_OH 153 
#define  HDMI_AUD_CHAN_TYPE_7_0_LC_RC 152 
#define  HDMI_AUD_CHAN_TYPE_7_0_LHS_RHS 151 
#define  HDMI_AUD_CHAN_TYPE_7_0_LH_RH 150 
#define  HDMI_AUD_CHAN_TYPE_7_0_LSD_RSD 149 
#define  HDMI_AUD_CHAN_TYPE_7_0_LSR_RSR 148 
#define  HDMI_AUD_CHAN_TYPE_7_0_LSS_RSS 147 
#define  HDMI_AUD_CHAN_TYPE_7_0_LSS_RSS_LSR_RSR 146 
#define  HDMI_AUD_CHAN_TYPE_7_0_LW_RW 145 
#define  HDMI_AUD_CHAN_TYPE_7_0_OH_CHR 144 
#define  HDMI_AUD_CHAN_TYPE_7_1 143 
#define  HDMI_AUD_CHAN_TYPE_7_1_CH_CHR 142 
#define  HDMI_AUD_CHAN_TYPE_7_1_CH_OH 141 
#define  HDMI_AUD_CHAN_TYPE_7_1_CS_CH 140 
#define  HDMI_AUD_CHAN_TYPE_7_1_CS_CHR 139 
#define  HDMI_AUD_CHAN_TYPE_7_1_CS_OH 138 
#define  HDMI_AUD_CHAN_TYPE_7_1_LC_RC 137 
#define  HDMI_AUD_CHAN_TYPE_7_1_LHS_RHS 136 
#define  HDMI_AUD_CHAN_TYPE_7_1_LH_RH 135 
#define  HDMI_AUD_CHAN_TYPE_7_1_LSD_RSD 134 
#define  HDMI_AUD_CHAN_TYPE_7_1_LSR_RSR 133 
#define  HDMI_AUD_CHAN_TYPE_7_1_LSS_RSS 132 
#define  HDMI_AUD_CHAN_TYPE_7_1_LSS_RSS_LSR_RSR 131 
#define  HDMI_AUD_CHAN_TYPE_7_1_LW_RW 130 
#define  HDMI_AUD_CHAN_TYPE_7_1_OH_CHR 129 
#define  HDMI_AUD_CHAN_TYPE_8_0_LH_RH_CS 128 

__attribute__((used)) static u8 mtk_hdmi_aud_get_chnl_count(enum hdmi_aud_channel_type channel_type)
{
	switch (channel_type) {
	case HDMI_AUD_CHAN_TYPE_1_0:
	case HDMI_AUD_CHAN_TYPE_1_1:
	case HDMI_AUD_CHAN_TYPE_2_0:
		return 2;
	case HDMI_AUD_CHAN_TYPE_2_1:
	case HDMI_AUD_CHAN_TYPE_3_0:
		return 3;
	case HDMI_AUD_CHAN_TYPE_3_1:
	case HDMI_AUD_CHAN_TYPE_4_0:
	case HDMI_AUD_CHAN_TYPE_3_0_LRS:
		return 4;
	case HDMI_AUD_CHAN_TYPE_4_1:
	case HDMI_AUD_CHAN_TYPE_5_0:
	case HDMI_AUD_CHAN_TYPE_3_1_LRS:
	case HDMI_AUD_CHAN_TYPE_4_0_CLRS:
		return 5;
	case HDMI_AUD_CHAN_TYPE_5_1:
	case HDMI_AUD_CHAN_TYPE_6_0:
	case HDMI_AUD_CHAN_TYPE_4_1_CLRS:
	case HDMI_AUD_CHAN_TYPE_6_0_CS:
	case HDMI_AUD_CHAN_TYPE_6_0_CH:
	case HDMI_AUD_CHAN_TYPE_6_0_OH:
	case HDMI_AUD_CHAN_TYPE_6_0_CHR:
		return 6;
	case HDMI_AUD_CHAN_TYPE_6_1:
	case HDMI_AUD_CHAN_TYPE_6_1_CS:
	case HDMI_AUD_CHAN_TYPE_6_1_CH:
	case HDMI_AUD_CHAN_TYPE_6_1_OH:
	case HDMI_AUD_CHAN_TYPE_6_1_CHR:
	case HDMI_AUD_CHAN_TYPE_7_0:
	case HDMI_AUD_CHAN_TYPE_7_0_LH_RH:
	case HDMI_AUD_CHAN_TYPE_7_0_LSR_RSR:
	case HDMI_AUD_CHAN_TYPE_7_0_LC_RC:
	case HDMI_AUD_CHAN_TYPE_7_0_LW_RW:
	case HDMI_AUD_CHAN_TYPE_7_0_LSD_RSD:
	case HDMI_AUD_CHAN_TYPE_7_0_LSS_RSS:
	case HDMI_AUD_CHAN_TYPE_7_0_LHS_RHS:
	case HDMI_AUD_CHAN_TYPE_7_0_CS_CH:
	case HDMI_AUD_CHAN_TYPE_7_0_CS_OH:
	case HDMI_AUD_CHAN_TYPE_7_0_CS_CHR:
	case HDMI_AUD_CHAN_TYPE_7_0_CH_OH:
	case HDMI_AUD_CHAN_TYPE_7_0_CH_CHR:
	case HDMI_AUD_CHAN_TYPE_7_0_OH_CHR:
	case HDMI_AUD_CHAN_TYPE_7_0_LSS_RSS_LSR_RSR:
	case HDMI_AUD_CHAN_TYPE_8_0_LH_RH_CS:
		return 7;
	case HDMI_AUD_CHAN_TYPE_7_1:
	case HDMI_AUD_CHAN_TYPE_7_1_LH_RH:
	case HDMI_AUD_CHAN_TYPE_7_1_LSR_RSR:
	case HDMI_AUD_CHAN_TYPE_7_1_LC_RC:
	case HDMI_AUD_CHAN_TYPE_7_1_LW_RW:
	case HDMI_AUD_CHAN_TYPE_7_1_LSD_RSD:
	case HDMI_AUD_CHAN_TYPE_7_1_LSS_RSS:
	case HDMI_AUD_CHAN_TYPE_7_1_LHS_RHS:
	case HDMI_AUD_CHAN_TYPE_7_1_CS_CH:
	case HDMI_AUD_CHAN_TYPE_7_1_CS_OH:
	case HDMI_AUD_CHAN_TYPE_7_1_CS_CHR:
	case HDMI_AUD_CHAN_TYPE_7_1_CH_OH:
	case HDMI_AUD_CHAN_TYPE_7_1_CH_CHR:
	case HDMI_AUD_CHAN_TYPE_7_1_OH_CHR:
	case HDMI_AUD_CHAN_TYPE_7_1_LSS_RSS_LSR_RSR:
		return 8;
	default:
		return 2;
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
          enum hdmi_aud_channel_type channel_type = 0;
          int benchRet = mtk_hdmi_aud_get_chnl_count(channel_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
