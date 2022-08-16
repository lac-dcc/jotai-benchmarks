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
typedef  int uint16 ;

/* Variables and functions */
#define  PHOTOMETRIC_CFA 140 
#define  PHOTOMETRIC_CIELAB 139 
#define  PHOTOMETRIC_ICCLAB 138 
#define  PHOTOMETRIC_ITULAB 137 
#define  PHOTOMETRIC_LOGL 136 
#define  PHOTOMETRIC_LOGLUV 135 
#define  PHOTOMETRIC_MASK 134 
#define  PHOTOMETRIC_MINISBLACK 133 
#define  PHOTOMETRIC_MINISWHITE 132 
#define  PHOTOMETRIC_PALETTE 131 
#define  PHOTOMETRIC_RGB 130 
#define  PHOTOMETRIC_SEPARATED 129 
#define  PHOTOMETRIC_YCBCR 128 

__attribute__((used)) static int _TIFFGetMaxColorChannels( uint16 photometric )
{
    switch (photometric) {
	case PHOTOMETRIC_PALETTE:
	case PHOTOMETRIC_MINISWHITE:
	case PHOTOMETRIC_MINISBLACK:
            return 1;
	case PHOTOMETRIC_YCBCR:
	case PHOTOMETRIC_RGB:
	case PHOTOMETRIC_CIELAB:
	case PHOTOMETRIC_LOGLUV:
	case PHOTOMETRIC_ITULAB:
	case PHOTOMETRIC_ICCLAB:
            return 3;
	case PHOTOMETRIC_SEPARATED:
	case PHOTOMETRIC_MASK:
            return 4;
	case PHOTOMETRIC_LOGL:
	case PHOTOMETRIC_CFA:
	default:
            return 0;
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
          int photometric = 100;
          int benchRet = _TIFFGetMaxColorChannels(photometric);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int photometric = 255;
          int benchRet = _TIFFGetMaxColorChannels(photometric);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int photometric = 10;
          int benchRet = _TIFFGetMaxColorChannels(photometric);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
