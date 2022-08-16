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
struct gb_spilib {scalar_t__ op_timeout; scalar_t__ last_xfer_size; scalar_t__ tx_xfer_offset; scalar_t__ rx_xfer_offset; int /*<<< orphan*/ * last_xfer; int /*<<< orphan*/ * first_xfer; } ;

/* Variables and functions */

__attribute__((used)) static void clean_xfer_state(struct gb_spilib *spi)
{
	spi->first_xfer = NULL;
	spi->last_xfer = NULL;
	spi->rx_xfer_offset = 0;
	spi->tx_xfer_offset = 0;
	spi->last_xfer_size = 0;
	spi->op_timeout = 0;
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
          int _len_spi0 = 1;
          struct gb_spilib * spi = (struct gb_spilib *) malloc(_len_spi0*sizeof(struct gb_spilib));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
            spi[_i0].op_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].last_xfer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].tx_xfer_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].rx_xfer_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_spi__i0__last_xfer0 = 1;
          spi[_i0].last_xfer = (int *) malloc(_len_spi__i0__last_xfer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spi__i0__last_xfer0; _j0++) {
            spi[_i0].last_xfer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spi__i0__first_xfer0 = 1;
          spi[_i0].first_xfer = (int *) malloc(_len_spi__i0__first_xfer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spi__i0__first_xfer0; _j0++) {
            spi[_i0].first_xfer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          clean_xfer_state(spi);
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].last_xfer);
          }
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].first_xfer);
          }
          free(spi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
