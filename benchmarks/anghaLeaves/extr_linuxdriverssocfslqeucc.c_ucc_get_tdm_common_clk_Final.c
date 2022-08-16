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
typedef  enum qe_clock { ____Placeholder_qe_clock } qe_clock ;

/* Variables and functions */
 int EINVAL ; 
#define  QE_BRG12 135 
#define  QE_BRG13 134 
#define  QE_BRG3 133 
#define  QE_BRG4 132 
#define  QE_CLK1 131 
#define  QE_CLK2 130 
#define  QE_CLK23 129 
#define  QE_CLK24 128 

__attribute__((used)) static int ucc_get_tdm_common_clk(u32 tdm_num, enum qe_clock clock)
{
	int clock_bits = -EINVAL;

	/*
	 * for TDM[0, 1, 2, 3], TX and RX use  common
	 * clock source BRG3,4 and CLK1,2
	 * for TDM[4, 5, 6, 7], TX and RX use  common
	 * clock source BRG12,13 and CLK23,24
	 */
	switch (tdm_num) {
	case 0:
	case 1:
	case 2:
	case 3:
		switch (clock) {
		case QE_BRG3:
			clock_bits = 1;
			break;
		case QE_BRG4:
			clock_bits = 2;
			break;
		case QE_CLK1:
			clock_bits = 4;
			break;
		case QE_CLK2:
			clock_bits = 5;
			break;
		default:
			break;
		}
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		switch (clock) {
		case QE_BRG12:
			clock_bits = 1;
			break;
		case QE_BRG13:
			clock_bits = 2;
			break;
		case QE_CLK23:
			clock_bits = 4;
			break;
		case QE_CLK24:
			clock_bits = 5;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}

	return clock_bits;
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
          int tdm_num = 100;
          enum qe_clock clock = 0;
          int benchRet = ucc_get_tdm_common_clk(tdm_num,clock);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tdm_num = 255;
          enum qe_clock clock = 0;
          int benchRet = ucc_get_tdm_common_clk(tdm_num,clock);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tdm_num = 10;
          enum qe_clock clock = 0;
          int benchRet = ucc_get_tdm_common_clk(tdm_num,clock);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
