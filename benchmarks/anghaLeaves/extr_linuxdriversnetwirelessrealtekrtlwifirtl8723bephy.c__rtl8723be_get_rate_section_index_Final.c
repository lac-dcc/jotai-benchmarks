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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */
#define  RTXAGC_A_CCK1_MCS32 142 
#define  RTXAGC_A_MCS03_MCS00 141 
#define  RTXAGC_A_MCS07_MCS04 140 
#define  RTXAGC_A_MCS11_MCS08 139 
#define  RTXAGC_A_MCS15_MCS12 138 
#define  RTXAGC_A_RATE18_06 137 
#define  RTXAGC_A_RATE54_24 136 
#define  RTXAGC_B_CCK11_A_CCK2_11 135 
#define  RTXAGC_B_CCK1_55_MCS32 134 
#define  RTXAGC_B_MCS03_MCS00 133 
#define  RTXAGC_B_MCS07_MCS04 132 
#define  RTXAGC_B_MCS11_MCS08 131 
#define  RTXAGC_B_MCS15_MCS12 130 
#define  RTXAGC_B_RATE18_06 129 
#define  RTXAGC_B_RATE54_24 128 

__attribute__((used)) static u8 _rtl8723be_get_rate_section_index(u32 regaddr)
{
	u8 index = 0;

	switch (regaddr) {
	case RTXAGC_A_RATE18_06:
		index = 0;
	break;
	case RTXAGC_A_RATE54_24:
		index = 1;
	break;
	case RTXAGC_A_CCK1_MCS32:
		index = 2;
	break;
	case RTXAGC_B_CCK11_A_CCK2_11:
		index = 3;
	break;
	case RTXAGC_A_MCS03_MCS00:
		index = 4;
	break;
	case RTXAGC_A_MCS07_MCS04:
		index = 5;
	break;
	case RTXAGC_A_MCS11_MCS08:
		index = 6;
	break;
	case RTXAGC_A_MCS15_MCS12:
		index = 7;
	break;
	case RTXAGC_B_RATE18_06:
		index = 0;
	break;
	case RTXAGC_B_RATE54_24:
		index = 1;
	break;
	case RTXAGC_B_CCK1_55_MCS32:
		index = 2;
	break;
	case RTXAGC_B_MCS03_MCS00:
		index = 4;
	break;
	case RTXAGC_B_MCS07_MCS04:
		index = 5;
	break;
	case RTXAGC_B_MCS11_MCS08:
		index = 6;
	break;
	case RTXAGC_B_MCS15_MCS12:
		index = 7;
	break;
	default:
		regaddr &= 0xFFF;
		if (regaddr >= 0xC20 && regaddr <= 0xC4C)
			index = (u8)((regaddr - 0xC20) / 4);
		else if (regaddr >= 0xE20 && regaddr <= 0xE4C)
			index = (u8)((regaddr - 0xE20) / 4);
		break;
	};
	return index;
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
          int regaddr = 100;
          int benchRet = _rtl8723be_get_rate_section_index(regaddr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int regaddr = 255;
          int benchRet = _rtl8723be_get_rate_section_index(regaddr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int regaddr = 10;
          int benchRet = _rtl8723be_get_rate_section_index(regaddr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
