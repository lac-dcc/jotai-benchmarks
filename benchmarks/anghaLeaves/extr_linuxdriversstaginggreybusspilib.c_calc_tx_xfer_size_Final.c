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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u32 ;
struct gb_spi_transfer_request {int dummy; } ;
struct gb_spi_transfer {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static size_t calc_tx_xfer_size(u32 tx_size, u32 count, size_t len,
				size_t data_max)
{
	size_t headers_size;

	data_max -= sizeof(struct gb_spi_transfer_request);
	headers_size = (count + 1) * sizeof(struct gb_spi_transfer);

	if (tx_size + headers_size + len > data_max)
		return data_max - (tx_size + sizeof(struct gb_spi_transfer));

	return len;
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
          int tx_size = 100;
          int count = 100;
          unsigned long len = 100;
          unsigned long data_max = 100;
          unsigned long benchRet = calc_tx_xfer_size(tx_size,count,len,data_max);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tx_size = 255;
          int count = 255;
          unsigned long len = 255;
          unsigned long data_max = 255;
          unsigned long benchRet = calc_tx_xfer_size(tx_size,count,len,data_max);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tx_size = 10;
          int count = 10;
          unsigned long len = 10;
          unsigned long data_max = 10;
          unsigned long benchRet = calc_tx_xfer_size(tx_size,count,len,data_max);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
