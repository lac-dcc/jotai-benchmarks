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
 int ADAU1977_SAI_CTRL0_FS_128000_192000 ; 
 int ADAU1977_SAI_CTRL0_FS_16000_24000 ; 
 int ADAU1977_SAI_CTRL0_FS_32000_48000 ; 
 int ADAU1977_SAI_CTRL0_FS_64000_96000 ; 
 int ADAU1977_SAI_CTRL0_FS_8000_12000 ; 
 int EINVAL ; 

__attribute__((used)) static int adau1977_lookup_fs(unsigned int rate)
{
	if (rate >= 8000 && rate <= 12000)
		return ADAU1977_SAI_CTRL0_FS_8000_12000;
	else if (rate >= 16000 && rate <= 24000)
		return ADAU1977_SAI_CTRL0_FS_16000_24000;
	else if (rate >= 32000 && rate <= 48000)
		return ADAU1977_SAI_CTRL0_FS_32000_48000;
	else if (rate >= 64000 && rate <= 96000)
		return ADAU1977_SAI_CTRL0_FS_64000_96000;
	else if (rate >= 128000 && rate <= 192000)
		return ADAU1977_SAI_CTRL0_FS_128000_192000;
	else
		return -EINVAL;
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
          unsigned int rate = 100;
          int benchRet = adau1977_lookup_fs(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int rate = 255;
          int benchRet = adau1977_lookup_fs(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int rate = 10;
          int benchRet = adau1977_lookup_fs(rate);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
