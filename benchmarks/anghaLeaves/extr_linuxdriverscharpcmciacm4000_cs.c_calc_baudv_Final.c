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

__attribute__((used)) static unsigned int calc_baudv(unsigned char fidi)
{
	unsigned int wcrcf, wbrcf, fi_rfu, di_rfu;

	fi_rfu = 372;
	di_rfu = 1;

	/* FI */
	switch ((fidi >> 4) & 0x0F) {
	case 0x00:
		wcrcf = 372;
		break;
	case 0x01:
		wcrcf = 372;
		break;
	case 0x02:
		wcrcf = 558;
		break;
	case 0x03:
		wcrcf = 744;
		break;
	case 0x04:
		wcrcf = 1116;
		break;
	case 0x05:
		wcrcf = 1488;
		break;
	case 0x06:
		wcrcf = 1860;
		break;
	case 0x07:
		wcrcf = fi_rfu;
		break;
	case 0x08:
		wcrcf = fi_rfu;
		break;
	case 0x09:
		wcrcf = 512;
		break;
	case 0x0A:
		wcrcf = 768;
		break;
	case 0x0B:
		wcrcf = 1024;
		break;
	case 0x0C:
		wcrcf = 1536;
		break;
	case 0x0D:
		wcrcf = 2048;
		break;
	default:
		wcrcf = fi_rfu;
		break;
	}

	/* DI */
	switch (fidi & 0x0F) {
	case 0x00:
		wbrcf = di_rfu;
		break;
	case 0x01:
		wbrcf = 1;
		break;
	case 0x02:
		wbrcf = 2;
		break;
	case 0x03:
		wbrcf = 4;
		break;
	case 0x04:
		wbrcf = 8;
		break;
	case 0x05:
		wbrcf = 16;
		break;
	case 0x06:
		wbrcf = 32;
		break;
	case 0x07:
		wbrcf = di_rfu;
		break;
	case 0x08:
		wbrcf = 12;
		break;
	case 0x09:
		wbrcf = 20;
		break;
	default:
		wbrcf = di_rfu;
		break;
	}

	return (wcrcf / wbrcf);
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
          unsigned char fidi = 100;
          unsigned int benchRet = calc_baudv(fidi);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char fidi = 255;
          unsigned int benchRet = calc_baudv(fidi);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char fidi = 10;
          unsigned int benchRet = calc_baudv(fidi);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
