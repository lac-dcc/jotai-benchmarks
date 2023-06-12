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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct tty_struct {struct gb_tty* driver_data; } ;
struct serial_icounter_struct {int /*<<< orphan*/  brk; int /*<<< orphan*/  parity; int /*<<< orphan*/  overrun; int /*<<< orphan*/  frame; int /*<<< orphan*/  dcd; int /*<<< orphan*/  rng; int /*<<< orphan*/  dsr; } ;
struct TYPE_2__ {int /*<<< orphan*/  brk; int /*<<< orphan*/  parity; int /*<<< orphan*/  overrun; int /*<<< orphan*/  frame; int /*<<< orphan*/  dcd; int /*<<< orphan*/  rng; int /*<<< orphan*/  dsr; } ;
struct gb_tty {TYPE_1__ iocount; } ;

/* Variables and functions */

__attribute__((used)) static int gb_tty_get_icount(struct tty_struct *tty,
			     struct serial_icounter_struct *icount)
{
	struct gb_tty *gb_tty = tty->driver_data;

	icount->dsr = gb_tty->iocount.dsr;
	icount->rng = gb_tty->iocount.rng;
	icount->dcd = gb_tty->iocount.dcd;
	icount->frame = gb_tty->iocount.frame;
	icount->overrun = gb_tty->iocount.overrun;
	icount->parity = gb_tty->iocount.parity;
	icount->brk = gb_tty->iocount.brk;

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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_tty0 = 65025;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__driver_data0 = 1;
          tty[_i0].driver_data = (struct gb_tty *) malloc(_len_tty__i0__driver_data0*sizeof(struct gb_tty));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
              tty[_i0].driver_data->iocount.brk = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.parity = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.overrun = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.frame = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.dcd = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.rng = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.dsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int _len_icount0 = 65025;
          struct serial_icounter_struct * icount = (struct serial_icounter_struct *) malloc(_len_icount0*sizeof(struct serial_icounter_struct));
          for(int _i0 = 0; _i0 < _len_icount0; _i0++) {
              icount[_i0].brk = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].parity = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].overrun = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].frame = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].rng = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].dsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gb_tty_get_icount(tty,icount);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
          free(icount);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_tty0 = 100;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__driver_data0 = 1;
          tty[_i0].driver_data = (struct gb_tty *) malloc(_len_tty__i0__driver_data0*sizeof(struct gb_tty));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
              tty[_i0].driver_data->iocount.brk = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.parity = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.overrun = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.frame = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.dcd = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.rng = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.dsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int _len_icount0 = 100;
          struct serial_icounter_struct * icount = (struct serial_icounter_struct *) malloc(_len_icount0*sizeof(struct serial_icounter_struct));
          for(int _i0 = 0; _i0 < _len_icount0; _i0++) {
              icount[_i0].brk = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].parity = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].overrun = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].frame = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].rng = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].dsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gb_tty_get_icount(tty,icount);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
          free(icount);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_tty0 = 1;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__driver_data0 = 1;
          tty[_i0].driver_data = (struct gb_tty *) malloc(_len_tty__i0__driver_data0*sizeof(struct gb_tty));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
              tty[_i0].driver_data->iocount.brk = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.parity = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.overrun = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.frame = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.dcd = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.rng = ((-2 * (next_i()%2)) + 1) * next_i();
          tty[_i0].driver_data->iocount.dsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int _len_icount0 = 1;
          struct serial_icounter_struct * icount = (struct serial_icounter_struct *) malloc(_len_icount0*sizeof(struct serial_icounter_struct));
          for(int _i0 = 0; _i0 < _len_icount0; _i0++) {
              icount[_i0].brk = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].parity = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].overrun = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].frame = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].rng = ((-2 * (next_i()%2)) + 1) * next_i();
          icount[_i0].dsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gb_tty_get_icount(tty,icount);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
          free(icount);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
