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
struct pt_regs {int iir; unsigned long ior; } ;

/* Variables and functions */
 int OPCODE1_MASK ; 
 int OPCODE4_MASK ; 
#define  OPCODE_LDH_I 142 
#define  OPCODE_LDH_L 141 
#define  OPCODE_LDH_S 140 
#define  OPCODE_LDWA_I 139 
#define  OPCODE_LDWA_S 138 
#define  OPCODE_LDWM 137 
#define  OPCODE_LDW_I 136 
#define  OPCODE_LDW_L 135 
#define  OPCODE_LDW_S 134 
#define  OPCODE_STH 133 
#define  OPCODE_STH_L 132 
#define  OPCODE_STW 131 
#define  OPCODE_STWA 130 
#define  OPCODE_STWM 129 
#define  OPCODE_STW_L 128 

int
check_unaligned(struct pt_regs *regs)
{
	unsigned long align_mask;

	/* Get alignment mask */

	align_mask = 0UL;
	switch (regs->iir & OPCODE1_MASK) {

	case OPCODE_LDH_I:
	case OPCODE_LDH_S:
	case OPCODE_STH:
		align_mask = 1UL;
		break;

	case OPCODE_LDW_I:
	case OPCODE_LDWA_I:
	case OPCODE_LDW_S:
	case OPCODE_LDWA_S:
	case OPCODE_STW:
	case OPCODE_STWA:
		align_mask = 3UL;
		break;

	default:
		switch (regs->iir & OPCODE4_MASK) {
		case OPCODE_LDH_L:
		case OPCODE_STH_L:
			align_mask = 1UL;
			break;
		case OPCODE_LDW_L:
		case OPCODE_LDWM:
		case OPCODE_STW_L:
		case OPCODE_STWM:
			align_mask = 3UL;
			break;
		}
		break;
	}

	return (int)(regs->ior & align_mask);
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
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].iir = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ior = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_unaligned(regs);
          printf("%d\n", benchRet); 
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
