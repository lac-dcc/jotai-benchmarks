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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int reg; } ;
typedef  TYPE_1__ cs_x86_op ;

/* Variables and functions */
#define  X86_REG_XMM0 159 
#define  X86_REG_XMM1 158 
#define  X86_REG_XMM10 157 
#define  X86_REG_XMM11 156 
#define  X86_REG_XMM12 155 
#define  X86_REG_XMM13 154 
#define  X86_REG_XMM14 153 
#define  X86_REG_XMM15 152 
#define  X86_REG_XMM16 151 
#define  X86_REG_XMM17 150 
#define  X86_REG_XMM18 149 
#define  X86_REG_XMM19 148 
#define  X86_REG_XMM2 147 
#define  X86_REG_XMM20 146 
#define  X86_REG_XMM21 145 
#define  X86_REG_XMM22 144 
#define  X86_REG_XMM23 143 
#define  X86_REG_XMM24 142 
#define  X86_REG_XMM25 141 
#define  X86_REG_XMM26 140 
#define  X86_REG_XMM27 139 
#define  X86_REG_XMM28 138 
#define  X86_REG_XMM29 137 
#define  X86_REG_XMM3 136 
#define  X86_REG_XMM30 135 
#define  X86_REG_XMM31 134 
#define  X86_REG_XMM4 133 
#define  X86_REG_XMM5 132 
#define  X86_REG_XMM6 131 
#define  X86_REG_XMM7 130 
#define  X86_REG_XMM8 129 
#define  X86_REG_XMM9 128 

__attribute__((used)) static bool is_xmm_reg(cs_x86_op op) {
	switch (op.reg) {
	case X86_REG_XMM0:
	case X86_REG_XMM1:
	case X86_REG_XMM2:
	case X86_REG_XMM3:
	case X86_REG_XMM4:
	case X86_REG_XMM5:
	case X86_REG_XMM6:
	case X86_REG_XMM7:
	case X86_REG_XMM8:
	case X86_REG_XMM9:
	case X86_REG_XMM10:
	case X86_REG_XMM11:
	case X86_REG_XMM12:
	case X86_REG_XMM13:
	case X86_REG_XMM14:
	case X86_REG_XMM15:
	case X86_REG_XMM16:
	case X86_REG_XMM17:
	case X86_REG_XMM18:
	case X86_REG_XMM19:
	case X86_REG_XMM20:
	case X86_REG_XMM21:
	case X86_REG_XMM22:
	case X86_REG_XMM23:
	case X86_REG_XMM24:
	case X86_REG_XMM25:
	case X86_REG_XMM26:
	case X86_REG_XMM27:
	case X86_REG_XMM28:
	case X86_REG_XMM29:
	case X86_REG_XMM30:
	case X86_REG_XMM31: return true;
	default: return false;
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
          struct TYPE_3__ op;
        op.reg = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = is_xmm_reg(op);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
