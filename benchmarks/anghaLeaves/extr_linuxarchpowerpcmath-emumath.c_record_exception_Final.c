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
typedef  int u32 ;
struct pt_regs {int dummy; } ;

/* Variables and functions */
 int EFLAG_DIVZERO ; 
 int EFLAG_INEXACT ; 
 int EFLAG_INVALID ; 
 int EFLAG_OVERFLOW ; 
 int EFLAG_UNDERFLOW ; 
 int EFLAG_VXCVI ; 
 int EFLAG_VXIDI ; 
 int EFLAG_VXIMZ ; 
 int EFLAG_VXISI ; 
 int EFLAG_VXSNAN ; 
 int EFLAG_VXSOFT ; 
 int EFLAG_VXSQRT ; 
 int EFLAG_VXVC ; 
 int EFLAG_VXZDZ ; 
 int FPSCR_FEX ; 
 int FPSCR_FX ; 
 int FPSCR_OE ; 
 int FPSCR_OX ; 
 int FPSCR_UE ; 
 int FPSCR_UX ; 
 int FPSCR_VE ; 
 int FPSCR_VX ; 
 int FPSCR_VXCVI ; 
 int FPSCR_VXIDI ; 
 int FPSCR_VXIMZ ; 
 int FPSCR_VXISI ; 
 int FPSCR_VXSNAN ; 
 int FPSCR_VXSOFT ; 
 int FPSCR_VXSQRT ; 
 int FPSCR_VXVC ; 
 int FPSCR_VXZDZ ; 
 int FPSCR_XE ; 
 int FPSCR_XX ; 
 int FPSCR_ZE ; 
 int FPSCR_ZX ; 
 int __FPU_FPSCR ; 

__attribute__((used)) static int
record_exception(struct pt_regs *regs, int eflag)
{
	u32 fpscr;

	fpscr = __FPU_FPSCR;

	if (eflag) {
		fpscr |= FPSCR_FX;
		if (eflag & EFLAG_OVERFLOW)
			fpscr |= FPSCR_OX;
		if (eflag & EFLAG_UNDERFLOW)
			fpscr |= FPSCR_UX;
		if (eflag & EFLAG_DIVZERO)
			fpscr |= FPSCR_ZX;
		if (eflag & EFLAG_INEXACT)
			fpscr |= FPSCR_XX;
		if (eflag & EFLAG_INVALID)
			fpscr |= FPSCR_VX;
		if (eflag & EFLAG_VXSNAN)
			fpscr |= FPSCR_VXSNAN;
		if (eflag & EFLAG_VXISI)
			fpscr |= FPSCR_VXISI;
		if (eflag & EFLAG_VXIDI)
			fpscr |= FPSCR_VXIDI;
		if (eflag & EFLAG_VXZDZ)
			fpscr |= FPSCR_VXZDZ;
		if (eflag & EFLAG_VXIMZ)
			fpscr |= FPSCR_VXIMZ;
		if (eflag & EFLAG_VXVC)
			fpscr |= FPSCR_VXVC;
		if (eflag & EFLAG_VXSOFT)
			fpscr |= FPSCR_VXSOFT;
		if (eflag & EFLAG_VXSQRT)
			fpscr |= FPSCR_VXSQRT;
		if (eflag & EFLAG_VXCVI)
			fpscr |= FPSCR_VXCVI;
	}

//	fpscr &= ~(FPSCR_VX);
	if (fpscr & (FPSCR_VXSNAN | FPSCR_VXISI | FPSCR_VXIDI |
		     FPSCR_VXZDZ | FPSCR_VXIMZ | FPSCR_VXVC |
		     FPSCR_VXSOFT | FPSCR_VXSQRT | FPSCR_VXCVI))
		fpscr |= FPSCR_VX;

	fpscr &= ~(FPSCR_FEX);
	if (((fpscr & FPSCR_VX) && (fpscr & FPSCR_VE)) ||
	    ((fpscr & FPSCR_OX) && (fpscr & FPSCR_OE)) ||
	    ((fpscr & FPSCR_UX) && (fpscr & FPSCR_UE)) ||
	    ((fpscr & FPSCR_ZX) && (fpscr & FPSCR_ZE)) ||
	    ((fpscr & FPSCR_XX) && (fpscr & FPSCR_XE)))
		fpscr |= FPSCR_FEX;

	__FPU_FPSCR = fpscr;

	return (fpscr & FPSCR_FEX) ? 1 : 0;
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
          int eflag = 100;
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = record_exception(regs,eflag);
          printf("%d\n", benchRet); 
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int eflag = 10;
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = record_exception(regs,eflag);
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
