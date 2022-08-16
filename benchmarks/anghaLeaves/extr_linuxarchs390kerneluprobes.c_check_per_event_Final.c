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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int mask; scalar_t__ addr; } ;
struct pt_regs {TYPE_3__ psw; } ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_6__ {TYPE_1__ per_user; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;

/* Variables and functions */
 int PSW_MASK_PER ; 
 TYPE_4__* current ; 

__attribute__((used)) static int check_per_event(unsigned short cause, unsigned long control,
			   struct pt_regs *regs)
{
	if (!(regs->psw.mask & PSW_MASK_PER))
		return 0;
	/* user space single step */
	if (control == 0)
		return 1;
	/* over indication for storage alteration */
	if ((control & 0x20200000) && (cause & 0x2000))
		return 1;
	if (cause & 0x8000) {
		/* all branches */
		if ((control & 0x80800000) == 0x80000000)
			return 1;
		/* branch into selected range */
		if (((control & 0x80800000) == 0x80800000) &&
		    regs->psw.addr >= current->thread.per_user.start &&
		    regs->psw.addr <= current->thread.per_user.end)
			return 1;
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
          unsigned short cause = 100;
          unsigned long control = 100;
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].psw.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].psw.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_per_event(cause,control,regs);
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
