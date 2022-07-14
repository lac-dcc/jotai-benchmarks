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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_2__ {int /*<<< orphan*/  vbus_drop_end; } ;
struct ab8500_charger {TYPE_1__ flags; } ;

/* Variables and functions */
 int AB8500_USBCH_IPT_CRNTLVL_REG ; 

__attribute__((used)) static bool ab8500_charger_check_continue_stepping(struct ab8500_charger *di,
						   int reg)
{
	if (reg == AB8500_USBCH_IPT_CRNTLVL_REG)
		return !di->flags.vbus_drop_end;
	else
		return true;
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
          int reg = 100;
          int _len_di0 = 1;
          struct ab8500_charger * di = (struct ab8500_charger *) malloc(_len_di0*sizeof(struct ab8500_charger));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].flags.vbus_drop_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ab8500_charger_check_continue_stepping(di,reg);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg = 255;
          int _len_di0 = 65025;
          struct ab8500_charger * di = (struct ab8500_charger *) malloc(_len_di0*sizeof(struct ab8500_charger));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].flags.vbus_drop_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ab8500_charger_check_continue_stepping(di,reg);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg = 10;
          int _len_di0 = 100;
          struct ab8500_charger * di = (struct ab8500_charger *) malloc(_len_di0*sizeof(struct ab8500_charger));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].flags.vbus_drop_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ab8500_charger_check_continue_stepping(di,reg);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}