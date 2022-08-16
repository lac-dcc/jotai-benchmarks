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
       1            big-arr-10x\n\
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
struct device {int dummy; } ;

/* Variables and functions */
#define  REG_ASSOEAR0 170 
#define  REG_ASSOEAR1 169 
#define  REG_ASSOEAR2 168 
#define  REG_ASSOEAR3 167 
#define  REG_ASSOEAR4 166 
#define  REG_ASSOEAR5 165 
#define  REG_ASSOEAR6 164 
#define  REG_ASSOEAR7 163 
#define  REG_ASSOSAR0 162 
#define  REG_ASSOSAR1 161 
#define  REG_MAINCNT0 160 
#define  REG_MAINCNT1 159 
#define  REG_MAINCNT2 158 
#define  REG_MAINCNT3 157 
#define  REG_REMCNTH 156 
#define  REG_REMCNTL 155 
#define  REG_RFCON0 154 
#define  REG_RFCON1 153 
#define  REG_RFCON2 152 
#define  REG_RFCON3 151 
#define  REG_RFCON5 150 
#define  REG_RFCON6 149 
#define  REG_RFCON7 148 
#define  REG_RFCON8 147 
#define  REG_SLPCAL2 146 
#define  REG_SLPCON0 145 
#define  REG_SLPCON1 144 
#define  REG_TESTMODE 143 
#define  REG_UNONCE0 142 
#define  REG_UNONCE1 141 
#define  REG_UNONCE10 140 
#define  REG_UNONCE11 139 
#define  REG_UNONCE12 138 
#define  REG_UNONCE2 137 
#define  REG_UNONCE3 136 
#define  REG_UNONCE4 135 
#define  REG_UNONCE5 134 
#define  REG_UNONCE6 133 
#define  REG_UNONCE7 132 
#define  REG_UNONCE8 131 
#define  REG_UNONCE9 130 
#define  REG_WAKETIMEH 129 
#define  REG_WAKETIMEL 128 

__attribute__((used)) static bool
mrf24j40_long_reg_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case REG_RFCON0:
	case REG_RFCON1:
	case REG_RFCON2:
	case REG_RFCON3:
	case REG_RFCON5:
	case REG_RFCON6:
	case REG_RFCON7:
	case REG_RFCON8:
	case REG_SLPCAL2:
	case REG_SLPCON0:
	case REG_SLPCON1:
	case REG_WAKETIMEL:
	case REG_WAKETIMEH:
	case REG_REMCNTL:
	case REG_REMCNTH:
	case REG_MAINCNT0:
	case REG_MAINCNT1:
	case REG_MAINCNT2:
	case REG_MAINCNT3:
	case REG_TESTMODE:
	case REG_ASSOEAR0:
	case REG_ASSOEAR1:
	case REG_ASSOEAR2:
	case REG_ASSOEAR3:
	case REG_ASSOEAR4:
	case REG_ASSOEAR5:
	case REG_ASSOEAR6:
	case REG_ASSOEAR7:
	case REG_ASSOSAR0:
	case REG_ASSOSAR1:
	case REG_UNONCE0:
	case REG_UNONCE1:
	case REG_UNONCE2:
	case REG_UNONCE3:
	case REG_UNONCE4:
	case REG_UNONCE5:
	case REG_UNONCE6:
	case REG_UNONCE7:
	case REG_UNONCE8:
	case REG_UNONCE9:
	case REG_UNONCE10:
	case REG_UNONCE11:
	case REG_UNONCE12:
		return true;
	default:
		return false;
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
          unsigned int reg = 100;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mrf24j40_long_reg_writeable(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mrf24j40_long_reg_writeable(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
