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
typedef  scalar_t__ u32 ;

/* Variables and functions */
#define  AUD_SAMPLE_RATE_176_4 134 
 scalar_t__ AUD_SAMPLE_RATE_176_4_DP_1_62_MAUD_VAL ; 
 scalar_t__ AUD_SAMPLE_RATE_176_4_DP_2_7_MAUD_VAL ; 
#define  AUD_SAMPLE_RATE_32 133 
 scalar_t__ AUD_SAMPLE_RATE_32_DP_1_62_MAUD_VAL ; 
 scalar_t__ AUD_SAMPLE_RATE_32_DP_2_7_MAUD_VAL ; 
#define  AUD_SAMPLE_RATE_44_1 132 
 scalar_t__ AUD_SAMPLE_RATE_44_1_DP_1_62_MAUD_VAL ; 
 scalar_t__ AUD_SAMPLE_RATE_44_1_DP_2_7_MAUD_VAL ; 
#define  AUD_SAMPLE_RATE_48 131 
 scalar_t__ AUD_SAMPLE_RATE_48_DP_1_62_MAUD_VAL ; 
 scalar_t__ AUD_SAMPLE_RATE_48_DP_2_7_MAUD_VAL ; 
#define  AUD_SAMPLE_RATE_88_2 130 
 scalar_t__ AUD_SAMPLE_RATE_88_2_DP_1_62_MAUD_VAL ; 
 scalar_t__ AUD_SAMPLE_RATE_88_2_DP_2_7_MAUD_VAL ; 
#define  AUD_SAMPLE_RATE_96 129 
 scalar_t__ AUD_SAMPLE_RATE_96_DP_1_62_MAUD_VAL ; 
 scalar_t__ AUD_SAMPLE_RATE_96_DP_2_7_MAUD_VAL ; 
 scalar_t__ DP_1_62_GHZ ; 
 scalar_t__ DP_2_7_GHZ ; 
 scalar_t__ EINVAL ; 
#define  HAD_MAX_RATE 128 
 scalar_t__ HAD_MAX_RATE_DP_1_62_MAUD_VAL ; 
 scalar_t__ HAD_MAX_RATE_DP_2_7_MAUD_VAL ; 

__attribute__((used)) static int had_calculate_maud_value(u32 aud_samp_freq, u32 link_rate)
{
	u32 maud_val;

	/* Select maud according to DP 1.2 spec */
	if (link_rate == DP_2_7_GHZ) {
		switch (aud_samp_freq) {
		case AUD_SAMPLE_RATE_32:
			maud_val = AUD_SAMPLE_RATE_32_DP_2_7_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_44_1:
			maud_val = AUD_SAMPLE_RATE_44_1_DP_2_7_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_48:
			maud_val = AUD_SAMPLE_RATE_48_DP_2_7_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_88_2:
			maud_val = AUD_SAMPLE_RATE_88_2_DP_2_7_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_96:
			maud_val = AUD_SAMPLE_RATE_96_DP_2_7_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_176_4:
			maud_val = AUD_SAMPLE_RATE_176_4_DP_2_7_MAUD_VAL;
			break;

		case HAD_MAX_RATE:
			maud_val = HAD_MAX_RATE_DP_2_7_MAUD_VAL;
			break;

		default:
			maud_val = -EINVAL;
			break;
		}
	} else if (link_rate == DP_1_62_GHZ) {
		switch (aud_samp_freq) {
		case AUD_SAMPLE_RATE_32:
			maud_val = AUD_SAMPLE_RATE_32_DP_1_62_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_44_1:
			maud_val = AUD_SAMPLE_RATE_44_1_DP_1_62_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_48:
			maud_val = AUD_SAMPLE_RATE_48_DP_1_62_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_88_2:
			maud_val = AUD_SAMPLE_RATE_88_2_DP_1_62_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_96:
			maud_val = AUD_SAMPLE_RATE_96_DP_1_62_MAUD_VAL;
			break;

		case AUD_SAMPLE_RATE_176_4:
			maud_val = AUD_SAMPLE_RATE_176_4_DP_1_62_MAUD_VAL;
			break;

		case HAD_MAX_RATE:
			maud_val = HAD_MAX_RATE_DP_1_62_MAUD_VAL;
			break;

		default:
			maud_val = -EINVAL;
			break;
		}
	} else
		maud_val = -EINVAL;

	return maud_val;
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
          long aud_samp_freq = 100;
          long link_rate = 100;
          int benchRet = had_calculate_maud_value(aud_samp_freq,link_rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long aud_samp_freq = 255;
          long link_rate = 255;
          int benchRet = had_calculate_maud_value(aud_samp_freq,link_rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long aud_samp_freq = 10;
          long link_rate = 10;
          int benchRet = had_calculate_maud_value(aud_samp_freq,link_rate);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
