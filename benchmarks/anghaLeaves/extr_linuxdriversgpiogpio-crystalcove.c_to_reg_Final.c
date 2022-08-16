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
typedef  enum ctrl_register { ____Placeholder_ctrl_register } ctrl_register ;

/* Variables and functions */
 int CRYSTALCOVE_GPIO_NUM ; 
 int CTRL_IN ; 
 int EOPNOTSUPP ; 
 int GPIO0P0CTLI ; 
 int GPIO0P0CTLO ; 
 int GPIO1P0CTLI ; 
 int GPIO1P0CTLO ; 
 int GPIOPANELCTL ; 

__attribute__((used)) static inline int to_reg(int gpio, enum ctrl_register reg_type)
{
	int reg;

	if (gpio >= CRYSTALCOVE_GPIO_NUM) {
		/*
		 * Virtual GPIO called from ACPI, for now we only support
		 * the panel ctl.
		 */
		switch (gpio) {
		case 0x5e:
			return GPIOPANELCTL;
		default:
			return -EOPNOTSUPP;
		}
	}

	if (reg_type == CTRL_IN) {
		if (gpio < 8)
			reg = GPIO0P0CTLI;
		else
			reg = GPIO1P0CTLI;
	} else {
		if (gpio < 8)
			reg = GPIO0P0CTLO;
		else
			reg = GPIO1P0CTLO;
	}

	return reg + gpio % 8;
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
          int gpio = 100;
          enum ctrl_register reg_type = 0;
          int benchRet = to_reg(gpio,reg_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int gpio = 255;
          enum ctrl_register reg_type = 0;
          int benchRet = to_reg(gpio,reg_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int gpio = 10;
          enum ctrl_register reg_type = 0;
          int benchRet = to_reg(gpio,reg_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
