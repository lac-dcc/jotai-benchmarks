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
       1            big-arr-10x\n\
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
typedef  size_t u32 ;
struct gb_spi_transfer_response {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static size_t calc_rx_xfer_size(u32 rx_size, u32 *tx_xfer_size, u32 len,
				size_t data_max)
{
	size_t rx_xfer_size;

	data_max -= sizeof(struct gb_spi_transfer_response);

	if (rx_size + len > data_max)
		rx_xfer_size = data_max - rx_size;
	else
		rx_xfer_size = len;

	/* if this is a write_read, for symmetry read the same as write */
	if (*tx_xfer_size && rx_xfer_size > *tx_xfer_size)
		rx_xfer_size = *tx_xfer_size;
	if (*tx_xfer_size && rx_xfer_size < *tx_xfer_size)
		*tx_xfer_size = rx_xfer_size;

	return rx_xfer_size;
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
          unsigned long rx_size = 100;
          unsigned long len = 100;
          unsigned long data_max = 100;
          int _len_tx_xfer_size0 = 1;
          unsigned long * tx_xfer_size = (unsigned long *) malloc(_len_tx_xfer_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tx_xfer_size0; _i0++) {
            tx_xfer_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = calc_rx_xfer_size(rx_size,tx_xfer_size,len,data_max);
          printf("%lu\n", benchRet); 
          free(tx_xfer_size);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long rx_size = 10;
          unsigned long len = 10;
          unsigned long data_max = 10;
          int _len_tx_xfer_size0 = 100;
          unsigned long * tx_xfer_size = (unsigned long *) malloc(_len_tx_xfer_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tx_xfer_size0; _i0++) {
            tx_xfer_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = calc_rx_xfer_size(rx_size,tx_xfer_size,len,data_max);
          printf("%lu\n", benchRet); 
          free(tx_xfer_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
