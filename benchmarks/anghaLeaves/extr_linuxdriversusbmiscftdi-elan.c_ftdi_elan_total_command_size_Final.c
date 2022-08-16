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

/* Type definitions */
struct usb_ftdi {int command_head; struct u132_command* command; } ;
struct u132_command {scalar_t__ follows; } ;

/* Variables and functions */
 size_t COMMAND_MASK ; 

__attribute__((used)) static int ftdi_elan_total_command_size(struct usb_ftdi *ftdi, int command_size)
{
	int total_size = 0;
	int I = command_size;
	int i = ftdi->command_head;
	while (I-- > 0) {
		struct u132_command *command = &ftdi->command[COMMAND_MASK &
							      i++];
		total_size += 5 + command->follows;
	} return total_size;
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
          int command_size = 100;
          int _len_ftdi0 = 1;
          struct usb_ftdi * ftdi = (struct usb_ftdi *) malloc(_len_ftdi0*sizeof(struct usb_ftdi));
          for(int _i0 = 0; _i0 < _len_ftdi0; _i0++) {
            ftdi[_i0].command_head = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ftdi__i0__command0 = 1;
          ftdi[_i0].command = (struct u132_command *) malloc(_len_ftdi__i0__command0*sizeof(struct u132_command));
          for(int _j0 = 0; _j0 < _len_ftdi__i0__command0; _j0++) {
            ftdi[_i0].command->follows = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ftdi_elan_total_command_size(ftdi,command_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ftdi0; _aux++) {
          free(ftdi[_aux].command);
          }
          free(ftdi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
