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
       3            empty\n\
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
struct pt_regs {int /*<<< orphan*/  cs; int /*<<< orphan*/  ip; } ;
struct mce {int mcgstatus; int status; int /*<<< orphan*/  cs; int /*<<< orphan*/  ip; } ;

/* Variables and functions */
 int MCACOD ; 
 int MCACOD_INSTR ; 
 int MCG_STATUS_EIPV ; 
 int MCG_STATUS_RIPV ; 
 int MCI_STATUS_ADDRV ; 
 int MCI_STATUS_AR ; 
 int MCI_STATUS_EN ; 
 int MCI_STATUS_MISCV ; 
 int MCI_STATUS_OVER ; 
 int MCI_STATUS_PCC ; 
 int MCI_STATUS_S ; 
 int MCI_STATUS_UC ; 

__attribute__((used)) static void quirk_sandybridge_ifu(int bank, struct mce *m, struct pt_regs *regs)
{
	if (bank != 0)
		return;
	if ((m->mcgstatus & (MCG_STATUS_EIPV|MCG_STATUS_RIPV)) != 0)
		return;
	if ((m->status & (MCI_STATUS_OVER|MCI_STATUS_UC|
		          MCI_STATUS_EN|MCI_STATUS_MISCV|MCI_STATUS_ADDRV|
			  MCI_STATUS_PCC|MCI_STATUS_S|MCI_STATUS_AR|
			  MCACOD)) !=
			 (MCI_STATUS_UC|MCI_STATUS_EN|
			  MCI_STATUS_MISCV|MCI_STATUS_ADDRV|MCI_STATUS_S|
			  MCI_STATUS_AR|MCACOD_INSTR))
		return;

	m->mcgstatus |= MCG_STATUS_EIPV;
	m->ip = regs->ip;
	m->cs = regs->cs;
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int bank = 100;
        
          int _len_m0 = 1;
          struct mce * m = (struct mce *) malloc(_len_m0*sizeof(struct mce));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].mcgstatus = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              regs[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          regs[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          quirk_sandybridge_ifu(bank,m,regs);
          free(m);
          free(regs);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int bank = 255;
        
          int _len_m0 = 65025;
          struct mce * m = (struct mce *) malloc(_len_m0*sizeof(struct mce));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].mcgstatus = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              regs[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          regs[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          quirk_sandybridge_ifu(bank,m,regs);
          free(m);
          free(regs);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int bank = 10;
        
          int _len_m0 = 100;
          struct mce * m = (struct mce *) malloc(_len_m0*sizeof(struct mce));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].mcgstatus = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              regs[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          regs[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          quirk_sandybridge_ifu(bank,m,regs);
          free(m);
          free(regs);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int bank = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_m0 = 1;
          struct mce * m = (struct mce *) malloc(_len_m0*sizeof(struct mce));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].mcgstatus = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              regs[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
          regs[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          quirk_sandybridge_ifu(bank,m,regs);
          free(m);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
