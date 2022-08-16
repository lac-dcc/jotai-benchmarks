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
struct ni_65xx_board {unsigned int num_dio_ports; unsigned int num_di_ports; unsigned int num_do_ports; } ;
struct comedi_device {struct ni_65xx_board* board_ptr; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int ni_65xx_num_ports(struct comedi_device *dev)
{
	const struct ni_65xx_board *board = dev->board_ptr;

	return board->num_dio_ports + board->num_di_ports + board->num_do_ports;
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
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct ni_65xx_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct ni_65xx_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->num_dio_ports = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].board_ptr->num_di_ports = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].board_ptr->num_do_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ni_65xx_num_ports(dev);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
