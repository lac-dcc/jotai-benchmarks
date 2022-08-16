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
typedef  int u32 ;

/* Variables and functions */
 int IPIPEIF_5_1_PACK_12_BIT ; 
 int IPIPEIF_5_1_PACK_16_BIT ; 
 int IPIPEIF_5_1_PACK_8_BIT ; 
 int IPIPEIF_5_1_PACK_8_BIT_A_LAW ; 
#define  MEDIA_BUS_FMT_SBGGR12_1X12 134 
#define  MEDIA_BUS_FMT_SBGGR8_1X8 133 
#define  MEDIA_BUS_FMT_SGRBG10_ALAW8_1X8 132 
#define  MEDIA_BUS_FMT_SGRBG10_DPCM8_1X8 131 
#define  MEDIA_BUS_FMT_SGRBG12_1X12 130 
#define  MEDIA_BUS_FMT_UV8_1X8 129 
#define  MEDIA_BUS_FMT_Y8_1X8 128 

__attribute__((used)) static int
ipipeif_get_pack_mode(u32 in_pix_fmt)
{
	switch (in_pix_fmt) {
	case MEDIA_BUS_FMT_SBGGR8_1X8:
	case MEDIA_BUS_FMT_Y8_1X8:
	case MEDIA_BUS_FMT_SGRBG10_DPCM8_1X8:
	case MEDIA_BUS_FMT_UV8_1X8:
		return IPIPEIF_5_1_PACK_8_BIT;

	case MEDIA_BUS_FMT_SGRBG10_ALAW8_1X8:
		return IPIPEIF_5_1_PACK_8_BIT_A_LAW;

	case MEDIA_BUS_FMT_SGRBG12_1X12:
		return IPIPEIF_5_1_PACK_16_BIT;

	case MEDIA_BUS_FMT_SBGGR12_1X12:
		return IPIPEIF_5_1_PACK_12_BIT;

	default:
		return IPIPEIF_5_1_PACK_16_BIT;
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
          int in_pix_fmt = 100;
          int benchRet = ipipeif_get_pack_mode(in_pix_fmt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int in_pix_fmt = 255;
          int benchRet = ipipeif_get_pack_mode(in_pix_fmt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int in_pix_fmt = 10;
          int benchRet = ipipeif_get_pack_mode(in_pix_fmt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
