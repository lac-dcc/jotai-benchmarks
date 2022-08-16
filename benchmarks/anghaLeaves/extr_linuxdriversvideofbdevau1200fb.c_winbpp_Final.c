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
 unsigned int LCD_WINCTRL1_FRM ; 
#define  LCD_WINCTRL1_FRM_12BPP 141 
#define  LCD_WINCTRL1_FRM_16BPP556 140 
#define  LCD_WINCTRL1_FRM_16BPP565 139 
#define  LCD_WINCTRL1_FRM_16BPP655 138 
#define  LCD_WINCTRL1_FRM_16BPPA1555 137 
#define  LCD_WINCTRL1_FRM_16BPPA5551 136 
#define  LCD_WINCTRL1_FRM_16BPPI1555 135 
#define  LCD_WINCTRL1_FRM_16BPPI5551 134 
#define  LCD_WINCTRL1_FRM_1BPP 133 
#define  LCD_WINCTRL1_FRM_24BPP 132 
#define  LCD_WINCTRL1_FRM_2BPP 131 
#define  LCD_WINCTRL1_FRM_32BPP 130 
#define  LCD_WINCTRL1_FRM_4BPP 129 
#define  LCD_WINCTRL1_FRM_8BPP 128 

__attribute__((used)) static int winbpp (unsigned int winctrl1)
{
	int bits = 0;

	/* how many bits are needed for each pixel format */
	switch (winctrl1 & LCD_WINCTRL1_FRM) {
	case LCD_WINCTRL1_FRM_1BPP:
		bits = 1;
		break;
	case LCD_WINCTRL1_FRM_2BPP:
		bits = 2;
		break;
	case LCD_WINCTRL1_FRM_4BPP:
		bits = 4;
		break;
	case LCD_WINCTRL1_FRM_8BPP:
		bits = 8;
		break;
	case LCD_WINCTRL1_FRM_12BPP:
	case LCD_WINCTRL1_FRM_16BPP655:
	case LCD_WINCTRL1_FRM_16BPP565:
	case LCD_WINCTRL1_FRM_16BPP556:
	case LCD_WINCTRL1_FRM_16BPPI1555:
	case LCD_WINCTRL1_FRM_16BPPI5551:
	case LCD_WINCTRL1_FRM_16BPPA1555:
	case LCD_WINCTRL1_FRM_16BPPA5551:
		bits = 16;
		break;
	case LCD_WINCTRL1_FRM_24BPP:
	case LCD_WINCTRL1_FRM_32BPP:
		bits = 32;
		break;
	}

	return bits;
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
          unsigned int winctrl1 = 100;
          int benchRet = winbpp(winctrl1);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int winctrl1 = 255;
          int benchRet = winbpp(winctrl1);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int winctrl1 = 10;
          int benchRet = winbpp(winctrl1);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
