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
       3            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint ;
typedef  int s16 ;
struct TYPE_2__ {size_t rate_ofdm; int tx_phy_ctl3; } ;

/* Variables and functions */
 size_t LEGACY_PHYCFG_TABLE_SIZE ; 
 TYPE_1__* legacy_phycfg_table ; 

s16 brcms_c_rate_legacy_phyctl(uint rate)
{
	uint i;
	for (i = 0; i < LEGACY_PHYCFG_TABLE_SIZE; i++)
		if (rate == legacy_phycfg_table[i].rate_ofdm)
			return legacy_phycfg_table[i].tx_phy_ctl3;

	return -1;
}

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
          unsigned long rate = 100;
        
          int benchRet = brcms_c_rate_legacy_phyctl(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rate = 255;
        
          int benchRet = brcms_c_rate_legacy_phyctl(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rate = 10;
        
          int benchRet = brcms_c_rate_legacy_phyctl(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = brcms_c_rate_legacy_phyctl(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
