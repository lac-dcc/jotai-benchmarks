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
typedef  enum intel_pt_insn_op { ____Placeholder_intel_pt_insn_op } intel_pt_insn_op ;

/* Variables and functions */
#define  INTEL_PT_OP_CALL 137 
#define  INTEL_PT_OP_INT 136 
#define  INTEL_PT_OP_IRET 135 
#define  INTEL_PT_OP_JCC 134 
#define  INTEL_PT_OP_JMP 133 
#define  INTEL_PT_OP_LOOP 132 
#define  INTEL_PT_OP_OTHER 131 
#define  INTEL_PT_OP_RET 130 
#define  INTEL_PT_OP_SYSCALL 129 
#define  INTEL_PT_OP_SYSRET 128 
 int PERF_IP_FLAG_BRANCH ; 
 int PERF_IP_FLAG_CALL ; 
 int PERF_IP_FLAG_CONDITIONAL ; 
 int PERF_IP_FLAG_INTERRUPT ; 
 int PERF_IP_FLAG_RETURN ; 
 int PERF_IP_FLAG_SYSCALLRET ; 

int intel_pt_insn_type(enum intel_pt_insn_op op)
{
	switch (op) {
	case INTEL_PT_OP_OTHER:
		return 0;
	case INTEL_PT_OP_CALL:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_CALL;
	case INTEL_PT_OP_RET:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_RETURN;
	case INTEL_PT_OP_JCC:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_CONDITIONAL;
	case INTEL_PT_OP_JMP:
		return PERF_IP_FLAG_BRANCH;
	case INTEL_PT_OP_LOOP:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_CONDITIONAL;
	case INTEL_PT_OP_IRET:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_RETURN |
		       PERF_IP_FLAG_INTERRUPT;
	case INTEL_PT_OP_INT:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_CALL |
		       PERF_IP_FLAG_INTERRUPT;
	case INTEL_PT_OP_SYSCALL:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_CALL |
		       PERF_IP_FLAG_SYSCALLRET;
	case INTEL_PT_OP_SYSRET:
		return PERF_IP_FLAG_BRANCH | PERF_IP_FLAG_RETURN |
		       PERF_IP_FLAG_SYSCALLRET;
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
          enum intel_pt_insn_op op = 100;
          int benchRet = intel_pt_insn_type(op);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum intel_pt_insn_op op = 255;
          int benchRet = intel_pt_insn_type(op);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum intel_pt_insn_op op = 10;
          int benchRet = intel_pt_insn_type(op);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
