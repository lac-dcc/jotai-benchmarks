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
struct TYPE_2__ {int fifosize; } ;
struct s3c24xx_uart_port {TYPE_1__ port; struct s3c24xx_uart_info* info; } ;
struct s3c24xx_uart_info {unsigned long rx_fifofull; unsigned long rx_fifomask; unsigned long rx_fifoshift; } ;

/* Variables and functions */

__attribute__((used)) static int s3c24xx_serial_rx_fifocnt(struct s3c24xx_uart_port *ourport,
				     unsigned long ufstat)
{
	struct s3c24xx_uart_info *info = ourport->info;

	if (ufstat & info->rx_fifofull)
		return ourport->port.fifosize;

	return (ufstat & info->rx_fifomask) >> info->rx_fifoshift;
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
          unsigned long ufstat = 100;
          int _len_ourport0 = 1;
          struct s3c24xx_uart_port * ourport = (struct s3c24xx_uart_port *) malloc(_len_ourport0*sizeof(struct s3c24xx_uart_port));
          for(int _i0 = 0; _i0 < _len_ourport0; _i0++) {
            ourport[_i0].port.fifosize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ourport__i0__info0 = 1;
          ourport[_i0].info = (struct s3c24xx_uart_info *) malloc(_len_ourport__i0__info0*sizeof(struct s3c24xx_uart_info));
          for(int _j0 = 0; _j0 < _len_ourport__i0__info0; _j0++) {
            ourport[_i0].info->rx_fifofull = ((-2 * (next_i()%2)) + 1) * next_i();
        ourport[_i0].info->rx_fifomask = ((-2 * (next_i()%2)) + 1) * next_i();
        ourport[_i0].info->rx_fifoshift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = s3c24xx_serial_rx_fifocnt(ourport,ufstat);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ourport0; _aux++) {
          free(ourport[_aux].info);
          }
          free(ourport);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ufstat = 255;
          int _len_ourport0 = 65025;
          struct s3c24xx_uart_port * ourport = (struct s3c24xx_uart_port *) malloc(_len_ourport0*sizeof(struct s3c24xx_uart_port));
          for(int _i0 = 0; _i0 < _len_ourport0; _i0++) {
            ourport[_i0].port.fifosize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ourport__i0__info0 = 1;
          ourport[_i0].info = (struct s3c24xx_uart_info *) malloc(_len_ourport__i0__info0*sizeof(struct s3c24xx_uart_info));
          for(int _j0 = 0; _j0 < _len_ourport__i0__info0; _j0++) {
            ourport[_i0].info->rx_fifofull = ((-2 * (next_i()%2)) + 1) * next_i();
        ourport[_i0].info->rx_fifomask = ((-2 * (next_i()%2)) + 1) * next_i();
        ourport[_i0].info->rx_fifoshift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = s3c24xx_serial_rx_fifocnt(ourport,ufstat);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ourport0; _aux++) {
          free(ourport[_aux].info);
          }
          free(ourport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
