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
 unsigned int CDRATIO_x1 ; 
 unsigned int CDRATIO_x2 ; 
 unsigned int CDRATIO_x4 ; 
 unsigned int CFGWDTH_32 ; 

__attribute__((used)) static unsigned int socfpga_a10_fpga_get_cd_ratio(unsigned int cfg_width,
						  bool encrypt, bool compress)
{
	unsigned int cd_ratio;

	/*
	 * cd ratio is dependent on cfg width and whether the bitstream
	 * is encrypted and/or compressed.
	 *
	 * | width | encr. | compr. | cd ratio |
	 * |  16   |   0   |   0    |     1    |
	 * |  16   |   0   |   1    |     4    |
	 * |  16   |   1   |   0    |     2    |
	 * |  16   |   1   |   1    |     4    |
	 * |  32   |   0   |   0    |     1    |
	 * |  32   |   0   |   1    |     8    |
	 * |  32   |   1   |   0    |     4    |
	 * |  32   |   1   |   1    |     8    |
	 */
	if (!compress && !encrypt)
		return CDRATIO_x1;

	if (compress)
		cd_ratio = CDRATIO_x4;
	else
		cd_ratio = CDRATIO_x2;

	/* If 32 bit, double the cd ratio by incrementing the field  */
	if (cfg_width == CFGWDTH_32)
		cd_ratio += 1;

	return cd_ratio;
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
          unsigned int cfg_width = 100;
          int encrypt = 100;
          int compress = 100;
          unsigned int benchRet = socfpga_a10_fpga_get_cd_ratio(cfg_width,encrypt,compress);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int cfg_width = 255;
          int encrypt = 255;
          int compress = 255;
          unsigned int benchRet = socfpga_a10_fpga_get_cd_ratio(cfg_width,encrypt,compress);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int cfg_width = 10;
          int encrypt = 10;
          int compress = 10;
          unsigned int benchRet = socfpga_a10_fpga_get_cd_ratio(cfg_width,encrypt,compress);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
