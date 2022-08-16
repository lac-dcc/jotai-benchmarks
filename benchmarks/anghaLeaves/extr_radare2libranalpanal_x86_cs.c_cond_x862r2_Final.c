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
 int R_ANAL_COND_EQ ; 
 int R_ANAL_COND_GE ; 
 int R_ANAL_COND_GT ; 
 int R_ANAL_COND_LE ; 
 int R_ANAL_COND_LT ; 
 int R_ANAL_COND_NE ; 
#define  X86_INS_JA 145 
#define  X86_INS_JAE 144 
#define  X86_INS_JB 143 
#define  X86_INS_JBE 142 
#define  X86_INS_JCXZ 141 
#define  X86_INS_JE 140 
#define  X86_INS_JECXZ 139 
#define  X86_INS_JG 138 
#define  X86_INS_JGE 137 
#define  X86_INS_JL 136 
#define  X86_INS_JLE 135 
#define  X86_INS_JNE 134 
#define  X86_INS_JNO 133 
#define  X86_INS_JNP 132 
#define  X86_INS_JNS 131 
#define  X86_INS_JO 130 
#define  X86_INS_JP 129 
#define  X86_INS_JS 128 

__attribute__((used)) static int cond_x862r2(int id) {
	switch (id) {
	case X86_INS_JE:
		return R_ANAL_COND_EQ;
	case X86_INS_JNE:
		return R_ANAL_COND_NE;
	case X86_INS_JB:
	case X86_INS_JL:
		return R_ANAL_COND_LT;
	case X86_INS_JBE:
	case X86_INS_JLE:
		return R_ANAL_COND_LE;
	case X86_INS_JG:
	case X86_INS_JA:
		return R_ANAL_COND_GT;
	case X86_INS_JAE:
		return R_ANAL_COND_GE;
	case X86_INS_JS:
	case X86_INS_JNS:
	case X86_INS_JO:
	case X86_INS_JNO:
	case X86_INS_JGE:
	case X86_INS_JP:
	case X86_INS_JNP:
	case X86_INS_JCXZ:
	case X86_INS_JECXZ:
		break;
	}
	return 0;
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
          int id = 100;
          int benchRet = cond_x862r2(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int benchRet = cond_x862r2(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int benchRet = cond_x862r2(id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
