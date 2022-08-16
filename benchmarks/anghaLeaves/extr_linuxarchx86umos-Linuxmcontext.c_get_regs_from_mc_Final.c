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
struct uml_pt_regs {int* gp; } ;
struct TYPE_3__ {int* gregs; } ;
typedef  TYPE_1__ mcontext_t ;

/* Variables and functions */
 int CS ; 
 int EFLAGS ; 
 int R10 ; 
 int R11 ; 
 int R12 ; 
 int R13 ; 
 int R14 ; 
 int R15 ; 
 int R8 ; 
 int R9 ; 
 int RAX ; 
 int RBP ; 
 int RBX ; 
 int RCX ; 
 int RDI ; 
 int RDX ; 
 size_t REG_CSGSFS ; 
 size_t REG_EFL ; 
 size_t REG_R10 ; 
 size_t REG_R11 ; 
 size_t REG_R12 ; 
 size_t REG_R13 ; 
 size_t REG_R14 ; 
 size_t REG_R15 ; 
 size_t REG_R8 ; 
 size_t REG_R9 ; 
 size_t REG_RAX ; 
 size_t REG_RBP ; 
 size_t REG_RBX ; 
 size_t REG_RCX ; 
 size_t REG_RDI ; 
 size_t REG_RDX ; 
 size_t REG_RIP ; 
 size_t REG_RSI ; 
 size_t REG_RSP ; 
 int RIP ; 
 int RSI ; 
 int RSP ; 

void get_regs_from_mc(struct uml_pt_regs *regs, mcontext_t *mc)
{
#ifdef __i386__
#define COPY2(X,Y) regs->gp[X] = mc->gregs[REG_##Y]
#define COPY(X) regs->gp[X] = mc->gregs[REG_##X]
#define COPY_SEG(X) regs->gp[X] = mc->gregs[REG_##X] & 0xffff;
#define COPY_SEG_CPL3(X) regs->gp[X] = (mc->gregs[REG_##X] & 0xffff) | 3;
	COPY_SEG(GS); COPY_SEG(FS); COPY_SEG(ES); COPY_SEG(DS);
	COPY(EDI); COPY(ESI); COPY(EBP);
	COPY2(UESP, ESP); /* sic */
	COPY(EBX); COPY(EDX); COPY(ECX); COPY(EAX);
	COPY(EIP); COPY_SEG_CPL3(CS); COPY(EFL); COPY_SEG_CPL3(SS);
#else
#define COPY2(X,Y) regs->gp[X/sizeof(unsigned long)] = mc->gregs[REG_##Y]
#define COPY(X) regs->gp[X/sizeof(unsigned long)] = mc->gregs[REG_##X]
	COPY(R8); COPY(R9); COPY(R10); COPY(R11);
	COPY(R12); COPY(R13); COPY(R14); COPY(R15);
	COPY(RDI); COPY(RSI); COPY(RBP); COPY(RBX);
	COPY(RDX); COPY(RAX); COPY(RCX); COPY(RSP);
	COPY(RIP);
	COPY2(EFLAGS, EFL);
	COPY2(CS, CSGSFS);
	regs->gp[CS / sizeof(unsigned long)] &= 0xffff;
	regs->gp[CS / sizeof(unsigned long)] |= 3;
#endif
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
          struct uml_pt_regs * regs = (struct uml_pt_regs *) malloc(_len_regs0*sizeof(struct uml_pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__gp0 = 1;
          regs[_i0].gp = (int *) malloc(_len_regs__i0__gp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__gp0; _j0++) {
            regs[_i0].gp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mc0 = 1;
          struct TYPE_3__ * mc = (struct TYPE_3__ *) malloc(_len_mc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mc0; _i0++) {
              int _len_mc__i0__gregs0 = 1;
          mc[_i0].gregs = (int *) malloc(_len_mc__i0__gregs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mc__i0__gregs0; _j0++) {
            mc[_i0].gregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          get_regs_from_mc(regs,mc);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].gp);
          }
          free(regs);
          for(int _aux = 0; _aux < _len_mc0; _aux++) {
          free(mc[_aux].gregs);
          }
          free(mc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
