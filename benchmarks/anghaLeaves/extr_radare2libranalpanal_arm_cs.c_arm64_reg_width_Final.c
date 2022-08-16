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
#define  ARM64_REG_W0 158 
#define  ARM64_REG_W1 157 
#define  ARM64_REG_W10 156 
#define  ARM64_REG_W11 155 
#define  ARM64_REG_W12 154 
#define  ARM64_REG_W13 153 
#define  ARM64_REG_W14 152 
#define  ARM64_REG_W15 151 
#define  ARM64_REG_W16 150 
#define  ARM64_REG_W17 149 
#define  ARM64_REG_W18 148 
#define  ARM64_REG_W19 147 
#define  ARM64_REG_W2 146 
#define  ARM64_REG_W20 145 
#define  ARM64_REG_W21 144 
#define  ARM64_REG_W22 143 
#define  ARM64_REG_W23 142 
#define  ARM64_REG_W24 141 
#define  ARM64_REG_W25 140 
#define  ARM64_REG_W26 139 
#define  ARM64_REG_W27 138 
#define  ARM64_REG_W28 137 
#define  ARM64_REG_W29 136 
#define  ARM64_REG_W3 135 
#define  ARM64_REG_W30 134 
#define  ARM64_REG_W4 133 
#define  ARM64_REG_W5 132 
#define  ARM64_REG_W6 131 
#define  ARM64_REG_W7 130 
#define  ARM64_REG_W8 129 
#define  ARM64_REG_W9 128 

__attribute__((used)) static int arm64_reg_width(int reg) {
	switch (reg) {
	case ARM64_REG_W0:
	case ARM64_REG_W1:
	case ARM64_REG_W2:
	case ARM64_REG_W3:
	case ARM64_REG_W4:
	case ARM64_REG_W5:
	case ARM64_REG_W6:
	case ARM64_REG_W7:
	case ARM64_REG_W8:
	case ARM64_REG_W9:
	case ARM64_REG_W10:
	case ARM64_REG_W11:
	case ARM64_REG_W12:
	case ARM64_REG_W13:
	case ARM64_REG_W14:
	case ARM64_REG_W15:
	case ARM64_REG_W16:
	case ARM64_REG_W17:
	case ARM64_REG_W18:
	case ARM64_REG_W19:
	case ARM64_REG_W20:
	case ARM64_REG_W21:
	case ARM64_REG_W22:
	case ARM64_REG_W23:
	case ARM64_REG_W24:
	case ARM64_REG_W25:
	case ARM64_REG_W26:
	case ARM64_REG_W27:
	case ARM64_REG_W28:
	case ARM64_REG_W29:
	case ARM64_REG_W30:
		return 32;
		break;
	default:
		break;
	}
	return 64;
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
          int reg = 100;
          int benchRet = arm64_reg_width(reg);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg = 255;
          int benchRet = arm64_reg_width(reg);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg = 10;
          int benchRet = arm64_reg_width(reg);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
