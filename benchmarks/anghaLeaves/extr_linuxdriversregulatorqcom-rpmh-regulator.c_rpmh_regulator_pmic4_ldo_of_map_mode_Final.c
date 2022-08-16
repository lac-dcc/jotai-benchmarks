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
 unsigned int REGULATOR_MODE_IDLE ; 
 unsigned int REGULATOR_MODE_INVALID ; 
 unsigned int REGULATOR_MODE_NORMAL ; 
 unsigned int REGULATOR_MODE_STANDBY ; 
#define  RPMH_REGULATOR_MODE_HPM 130 
#define  RPMH_REGULATOR_MODE_LPM 129 
#define  RPMH_REGULATOR_MODE_RET 128 

__attribute__((used)) static unsigned int rpmh_regulator_pmic4_ldo_of_map_mode(unsigned int rpmh_mode)
{
	unsigned int mode;

	switch (rpmh_mode) {
	case RPMH_REGULATOR_MODE_HPM:
		mode = REGULATOR_MODE_NORMAL;
		break;
	case RPMH_REGULATOR_MODE_LPM:
		mode = REGULATOR_MODE_IDLE;
		break;
	case RPMH_REGULATOR_MODE_RET:
		mode = REGULATOR_MODE_STANDBY;
		break;
	default:
		mode = REGULATOR_MODE_INVALID;
	}

	return mode;
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
          unsigned int rpmh_mode = 100;
          unsigned int benchRet = rpmh_regulator_pmic4_ldo_of_map_mode(rpmh_mode);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int rpmh_mode = 255;
          unsigned int benchRet = rpmh_regulator_pmic4_ldo_of_map_mode(rpmh_mode);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int rpmh_mode = 10;
          unsigned int benchRet = rpmh_regulator_pmic4_ldo_of_map_mode(rpmh_mode);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
