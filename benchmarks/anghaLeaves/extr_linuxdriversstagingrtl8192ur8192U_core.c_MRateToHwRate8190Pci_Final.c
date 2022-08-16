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

/* Variables and functions */
 int DESC90_RATE11M ; 
 int DESC90_RATE12M ; 
 int DESC90_RATE18M ; 
 int DESC90_RATE1M ; 
 int DESC90_RATE24M ; 
 int DESC90_RATE2M ; 
 int DESC90_RATE36M ; 
 int DESC90_RATE48M ; 
 int DESC90_RATE54M ; 
 int DESC90_RATE5_5M ; 
 int DESC90_RATE6M ; 
 int DESC90_RATE9M ; 
 int DESC90_RATEMCS0 ; 
 int DESC90_RATEMCS1 ; 
 int DESC90_RATEMCS10 ; 
 int DESC90_RATEMCS11 ; 
 int DESC90_RATEMCS12 ; 
 int DESC90_RATEMCS13 ; 
 int DESC90_RATEMCS14 ; 
 int DESC90_RATEMCS15 ; 
 int DESC90_RATEMCS2 ; 
 int DESC90_RATEMCS3 ; 
 int DESC90_RATEMCS32 ; 
 int DESC90_RATEMCS4 ; 
 int DESC90_RATEMCS5 ; 
 int DESC90_RATEMCS6 ; 
 int DESC90_RATEMCS7 ; 
 int DESC90_RATEMCS8 ; 
 int DESC90_RATEMCS9 ; 
#define  MGN_11M 155 
#define  MGN_12M 154 
#define  MGN_18M 153 
#define  MGN_1M 152 
#define  MGN_24M 151 
#define  MGN_2M 150 
#define  MGN_36M 149 
#define  MGN_48M 148 
#define  MGN_54M 147 
#define  MGN_5_5M 146 
#define  MGN_6M 145 
#define  MGN_9M 144 
#define  MGN_MCS0 143 
#define  MGN_MCS1 142 
#define  MGN_MCS10 141 
#define  MGN_MCS11 140 
#define  MGN_MCS12 139 
#define  MGN_MCS13 138 
#define  MGN_MCS14 137 
#define  MGN_MCS15 136 
#define  MGN_MCS2 135 
#define  MGN_MCS3 134 
#define  MGN_MCS4 133 
#define  MGN_MCS5 132 
#define  MGN_MCS6 131 
#define  MGN_MCS7 130 
#define  MGN_MCS8 129 
#define  MGN_MCS9 128 

__attribute__((used)) static u8 MRateToHwRate8190Pci(u8 rate)
{
	u8  ret = DESC90_RATE1M;

	switch (rate) {
	case MGN_1M:
		ret = DESC90_RATE1M;
		break;
	case MGN_2M:
		ret = DESC90_RATE2M;
		break;
	case MGN_5_5M:
		ret = DESC90_RATE5_5M;
		break;
	case MGN_11M:
		ret = DESC90_RATE11M;
		break;
	case MGN_6M:
		ret = DESC90_RATE6M;
		break;
	case MGN_9M:
		ret = DESC90_RATE9M;
		break;
	case MGN_12M:
		ret = DESC90_RATE12M;
		break;
	case MGN_18M:
		ret = DESC90_RATE18M;
		break;
	case MGN_24M:
		ret = DESC90_RATE24M;
		break;
	case MGN_36M:
		ret = DESC90_RATE36M;
		break;
	case MGN_48M:
		ret = DESC90_RATE48M;
		break;
	case MGN_54M:
		ret = DESC90_RATE54M;
		break;

	/* HT rate since here */
	case MGN_MCS0:
		ret = DESC90_RATEMCS0;
		break;
	case MGN_MCS1:
		ret = DESC90_RATEMCS1;
		break;
	case MGN_MCS2:
		ret = DESC90_RATEMCS2;
		break;
	case MGN_MCS3:
		ret = DESC90_RATEMCS3;
		break;
	case MGN_MCS4:
		ret = DESC90_RATEMCS4;
		break;
	case MGN_MCS5:
		ret = DESC90_RATEMCS5;
		break;
	case MGN_MCS6:
		ret = DESC90_RATEMCS6;
		break;
	case MGN_MCS7:
		ret = DESC90_RATEMCS7;
		break;
	case MGN_MCS8:
		ret = DESC90_RATEMCS8;
		break;
	case MGN_MCS9:
		ret = DESC90_RATEMCS9;
		break;
	case MGN_MCS10:
		ret = DESC90_RATEMCS10;
		break;
	case MGN_MCS11:
		ret = DESC90_RATEMCS11;
		break;
	case MGN_MCS12:
		ret = DESC90_RATEMCS12;
		break;
	case MGN_MCS13:
		ret = DESC90_RATEMCS13;
		break;
	case MGN_MCS14:
		ret = DESC90_RATEMCS14;
		break;
	case MGN_MCS15:
		ret = DESC90_RATEMCS15;
		break;
	case (0x80 | 0x20):
		ret = DESC90_RATEMCS32;
		break;

	default:
		break;
	}
	return ret;
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
          int rate = 100;
          int benchRet = MRateToHwRate8190Pci(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int rate = 255;
          int benchRet = MRateToHwRate8190Pci(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rate = 10;
          int benchRet = MRateToHwRate8190Pci(rate);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
