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
struct tty_struct {struct ipw_tty* driver_data; } ;
struct TYPE_2__ {int /*<<< orphan*/  count; } ;
struct ipw_tty {int tx_bytes_queued; TYPE_1__ port; } ;

/* Variables and functions */

__attribute__((used)) static int ipw_chars_in_buffer(struct tty_struct *linux_tty)
{
	struct ipw_tty *tty = linux_tty->driver_data;

	if (!tty)
		return 0;

	if (!tty->port.count)
		return 0;

	return tty->tx_bytes_queued;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_linux_tty0 = 65025;
          struct tty_struct * linux_tty = (struct tty_struct *) malloc(_len_linux_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_linux_tty0; _i0++) {
              int _len_linux_tty__i0__driver_data0 = 1;
          linux_tty[_i0].driver_data = (struct ipw_tty *) malloc(_len_linux_tty__i0__driver_data0*sizeof(struct ipw_tty));
          for(int _j0 = 0; _j0 < _len_linux_tty__i0__driver_data0; _j0++) {
              linux_tty[_i0].driver_data->tx_bytes_queued = ((-2 * (next_i()%2)) + 1) * next_i();
          linux_tty[_i0].driver_data->port.count = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = ipw_chars_in_buffer(linux_tty);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_linux_tty0; _aux++) {
          free(linux_tty[_aux].driver_data);
          }
          free(linux_tty);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_linux_tty0 = 100;
          struct tty_struct * linux_tty = (struct tty_struct *) malloc(_len_linux_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_linux_tty0; _i0++) {
              int _len_linux_tty__i0__driver_data0 = 1;
          linux_tty[_i0].driver_data = (struct ipw_tty *) malloc(_len_linux_tty__i0__driver_data0*sizeof(struct ipw_tty));
          for(int _j0 = 0; _j0 < _len_linux_tty__i0__driver_data0; _j0++) {
              linux_tty[_i0].driver_data->tx_bytes_queued = ((-2 * (next_i()%2)) + 1) * next_i();
          linux_tty[_i0].driver_data->port.count = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = ipw_chars_in_buffer(linux_tty);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_linux_tty0; _aux++) {
          free(linux_tty[_aux].driver_data);
          }
          free(linux_tty);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_linux_tty0 = 1;
          struct tty_struct * linux_tty = (struct tty_struct *) malloc(_len_linux_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_linux_tty0; _i0++) {
              int _len_linux_tty__i0__driver_data0 = 1;
          linux_tty[_i0].driver_data = (struct ipw_tty *) malloc(_len_linux_tty__i0__driver_data0*sizeof(struct ipw_tty));
          for(int _j0 = 0; _j0 < _len_linux_tty__i0__driver_data0; _j0++) {
              linux_tty[_i0].driver_data->tx_bytes_queued = ((-2 * (next_i()%2)) + 1) * next_i();
          linux_tty[_i0].driver_data->port.count = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = ipw_chars_in_buffer(linux_tty);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_linux_tty0; _aux++) {
          free(linux_tty[_aux].driver_data);
          }
          free(linux_tty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
