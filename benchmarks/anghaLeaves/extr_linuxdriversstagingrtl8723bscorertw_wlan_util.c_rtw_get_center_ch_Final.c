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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 scalar_t__ CHANNEL_WIDTH_40 ; 
 scalar_t__ CHANNEL_WIDTH_80 ; 
 scalar_t__ HAL_PRIME_CHNL_OFFSET_LOWER ; 

u8 rtw_get_center_ch(u8 channel, u8 chnl_bw, u8 chnl_offset)
{
	u8 center_ch = channel;

	if (chnl_bw == CHANNEL_WIDTH_80) {
		if ((channel == 36) || (channel == 40) || (channel == 44) || (channel == 48))
			center_ch = 42;
		if ((channel == 52) || (channel == 56) || (channel == 60) || (channel == 64))
			center_ch = 58;
		if ((channel == 100) || (channel == 104) || (channel == 108) || (channel == 112))
			center_ch = 106;
		if ((channel == 116) || (channel == 120) || (channel == 124) || (channel == 128))
			center_ch = 122;
		if ((channel == 132) || (channel == 136) || (channel == 140) || (channel == 144))
			center_ch = 138;
		if ((channel == 149) || (channel == 153) || (channel == 157) || (channel == 161))
			center_ch = 155;
		else if (channel <= 14)
			center_ch = 7;
	} else if (chnl_bw == CHANNEL_WIDTH_40) {
		if (chnl_offset == HAL_PRIME_CHNL_OFFSET_LOWER)
			center_ch = channel + 2;
		else
			center_ch = channel - 2;
	}

	return center_ch;
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
          long channel = 100;
          long chnl_bw = 100;
          long chnl_offset = 100;
          long benchRet = rtw_get_center_ch(channel,chnl_bw,chnl_offset);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long channel = 255;
          long chnl_bw = 255;
          long chnl_offset = 255;
          long benchRet = rtw_get_center_ch(channel,chnl_bw,chnl_offset);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long channel = 10;
          long chnl_bw = 10;
          long chnl_offset = 10;
          long benchRet = rtw_get_center_ch(channel,chnl_bw,chnl_offset);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
