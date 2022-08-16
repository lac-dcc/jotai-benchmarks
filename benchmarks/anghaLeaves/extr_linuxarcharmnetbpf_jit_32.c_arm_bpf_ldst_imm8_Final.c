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
typedef  int u8 ;
typedef  int u32 ;
typedef  int s16 ;

/* Variables and functions */
 int ARM_INST_LDST__U ; 

__attribute__((used)) static u32 arm_bpf_ldst_imm8(u32 op, u8 rt, u8 rn, s16 imm8)
{
	op |= rt << 12 | rn << 16;
	if (imm8 >= 0)
		op |= ARM_INST_LDST__U;
	else
		imm8 = -imm8;
	return op | (imm8 & 0xf0) << 4 | (imm8 & 0x0f);
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
          int op = 100;
          int rt = 100;
          int rn = 100;
          int imm8 = 100;
          int benchRet = arm_bpf_ldst_imm8(op,rt,rn,imm8);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int op = 255;
          int rt = 255;
          int rn = 255;
          int imm8 = 255;
          int benchRet = arm_bpf_ldst_imm8(op,rt,rn,imm8);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int op = 10;
          int rt = 10;
          int rn = 10;
          int imm8 = 10;
          int benchRet = arm_bpf_ldst_imm8(op,rt,rn,imm8);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
