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

/* Type definitions */
struct hci_uart {unsigned int init_speed; unsigned int oper_speed; } ;

/* Variables and functions */

void hci_uart_set_speeds(struct hci_uart *hu, unsigned int init_speed,
			 unsigned int oper_speed)
{
	hu->init_speed = init_speed;
	hu->oper_speed = oper_speed;
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
          unsigned int init_speed = 100;
          unsigned int oper_speed = 100;
          int _len_hu0 = 1;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
            hu[_i0].init_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hu[_i0].oper_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hci_uart_set_speeds(hu,init_speed,oper_speed);
          free(hu);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int init_speed = 255;
          unsigned int oper_speed = 255;
          int _len_hu0 = 65025;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
            hu[_i0].init_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hu[_i0].oper_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hci_uart_set_speeds(hu,init_speed,oper_speed);
          free(hu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int init_speed = 10;
          unsigned int oper_speed = 10;
          int _len_hu0 = 100;
          struct hci_uart * hu = (struct hci_uart *) malloc(_len_hu0*sizeof(struct hci_uart));
          for(int _i0 = 0; _i0 < _len_hu0; _i0++) {
            hu[_i0].init_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hu[_i0].oper_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hci_uart_set_speeds(hu,init_speed,oper_speed);
          free(hu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
