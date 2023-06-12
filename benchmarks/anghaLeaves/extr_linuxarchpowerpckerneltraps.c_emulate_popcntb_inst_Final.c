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
typedef  int u32 ;
struct pt_regs {unsigned long* gpr; } ;

/* Variables and functions */

__attribute__((used)) static int emulate_popcntb_inst(struct pt_regs *regs, u32 instword)
{
	u32 ra,rs;
	unsigned long tmp;

	ra = (instword >> 16) & 0x1f;
	rs = (instword >> 21) & 0x1f;

	tmp = regs->gpr[rs];
	tmp = tmp - ((tmp >> 1) & 0x5555555555555555ULL);
	tmp = (tmp & 0x3333333333333333ULL) + ((tmp >> 2) & 0x3333333333333333ULL);
	tmp = (tmp + (tmp >> 4)) & 0x0f0f0f0f0f0f0f0fULL;
	regs->gpr[ra] = tmp;

	return 0;
}

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
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int instword = 100;
        
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__gpr0 = 1;
          regs[_i0].gpr = (unsigned long *) malloc(_len_regs__i0__gpr0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__gpr0; _j0++) {
            regs[_i0].gpr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = emulate_popcntb_inst(regs,instword);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].gpr);
          }
          free(regs);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int instword = 255;
        
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__gpr0 = 1;
          regs[_i0].gpr = (unsigned long *) malloc(_len_regs__i0__gpr0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__gpr0; _j0++) {
            regs[_i0].gpr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = emulate_popcntb_inst(regs,instword);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].gpr);
          }
          free(regs);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int instword = 10;
        
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__gpr0 = 1;
          regs[_i0].gpr = (unsigned long *) malloc(_len_regs__i0__gpr0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__gpr0; _j0++) {
            regs[_i0].gpr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = emulate_popcntb_inst(regs,instword);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].gpr);
          }
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
