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

/* Variables and functions */
 unsigned char RATR_INX_WIRELESS_B ; 
 unsigned char RATR_INX_WIRELESS_G ; 
 unsigned char RATR_INX_WIRELESS_GB ; 
 unsigned char RATR_INX_WIRELESS_N ; 
 unsigned char RATR_INX_WIRELESS_NG ; 
 unsigned char RATR_INX_WIRELESS_NGB ; 
#define  WIRELESS_11A 136 
#define  WIRELESS_11A_5N 135 
#define  WIRELESS_11B 134 
#define  WIRELESS_11BG 133 
#define  WIRELESS_11BG_24N 132 
#define  WIRELESS_11G 131 
#define  WIRELESS_11G_24N 130 
#define  WIRELESS_11_24N 129 
#define  WIRELESS_11_5N 128 

unsigned char networktype_to_raid(unsigned char network_type)
{
	switch (network_type) {
	case WIRELESS_11B:
		return RATR_INX_WIRELESS_B;
	case WIRELESS_11A:
	case WIRELESS_11G:
		return RATR_INX_WIRELESS_G;
	case WIRELESS_11BG:
		return RATR_INX_WIRELESS_GB;
	case WIRELESS_11_24N:
	case WIRELESS_11_5N:
		return RATR_INX_WIRELESS_N;
	case WIRELESS_11A_5N:
	case WIRELESS_11G_24N:
		return  RATR_INX_WIRELESS_NG;
	case WIRELESS_11BG_24N:
		return RATR_INX_WIRELESS_NGB;
	default:
		return RATR_INX_WIRELESS_GB;
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
          unsigned char network_type = 100;
          unsigned char benchRet = networktype_to_raid(network_type);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char network_type = 255;
          unsigned char benchRet = networktype_to_raid(network_type);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char network_type = 10;
          unsigned char benchRet = networktype_to_raid(network_type);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
