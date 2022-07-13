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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int arm_shifter ;

/* Variables and functions */
#define  ARM_SFT_ASR 137 
#define  ARM_SFT_ASR_REG 136 
#define  ARM_SFT_LSL 135 
#define  ARM_SFT_LSL_REG 134 
#define  ARM_SFT_LSR 133 
#define  ARM_SFT_LSR_REG 132 
#define  ARM_SFT_ROR 131 
#define  ARM_SFT_ROR_REG 130 
#define  ARM_SFT_RRX 129 
#define  ARM_SFT_RRX_REG 128 

__attribute__((used)) static const char *shift_type_name(arm_shifter type) {
	switch (type) {
	case ARM_SFT_ASR:
		return "asr";
	case ARM_SFT_LSL:
		return "lsl";
	case ARM_SFT_LSR:
		return "lsr";
	case ARM_SFT_ROR:
		return "ror";
	case ARM_SFT_RRX:
		return "rrx";
	case ARM_SFT_ASR_REG:
		return "asr_reg";
	case ARM_SFT_LSL_REG:
		return "lsl_reg";
	case ARM_SFT_LSR_REG:
		return "lsr_reg";
	case ARM_SFT_ROR_REG:
		return "ror_reg";
	case ARM_SFT_RRX_REG:
		return "rrx_reg";
	default:
		return "";
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
          int type = 100;
          const char * benchRet = shift_type_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          const char * benchRet = shift_type_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          const char * benchRet = shift_type_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
