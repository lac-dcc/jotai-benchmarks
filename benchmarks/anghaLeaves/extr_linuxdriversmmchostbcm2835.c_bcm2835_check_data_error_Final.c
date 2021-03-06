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
typedef  int u32 ;
struct bcm2835_host {TYPE_1__* data; } ;
struct TYPE_2__ {int /*<<< orphan*/  error; } ;

/* Variables and functions */
 int /*<<< orphan*/  EILSEQ ; 
 int /*<<< orphan*/  ETIMEDOUT ; 
 int SDHSTS_CRC16_ERROR ; 
 int SDHSTS_FIFO_ERROR ; 
 int SDHSTS_REW_TIME_OUT ; 

__attribute__((used)) static void bcm2835_check_data_error(struct bcm2835_host *host, u32 intmask)
{
	if (!host->data)
		return;
	if (intmask & (SDHSTS_CRC16_ERROR | SDHSTS_FIFO_ERROR))
		host->data->error = -EILSEQ;
	if (intmask & SDHSTS_REW_TIME_OUT)
		host->data->error = -ETIMEDOUT;
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
          int intmask = 100;
          int _len_host0 = 1;
          struct bcm2835_host * host = (struct bcm2835_host *) malloc(_len_host0*sizeof(struct bcm2835_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__data0 = 1;
          host[_i0].data = (struct TYPE_2__ *) malloc(_len_host__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__data0; _j0++) {
            host[_i0].data->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2835_check_data_error(host,intmask);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int intmask = 255;
          int _len_host0 = 65025;
          struct bcm2835_host * host = (struct bcm2835_host *) malloc(_len_host0*sizeof(struct bcm2835_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__data0 = 1;
          host[_i0].data = (struct TYPE_2__ *) malloc(_len_host__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__data0; _j0++) {
            host[_i0].data->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2835_check_data_error(host,intmask);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int intmask = 10;
          int _len_host0 = 100;
          struct bcm2835_host * host = (struct bcm2835_host *) malloc(_len_host0*sizeof(struct bcm2835_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__data0 = 1;
          host[_i0].data = (struct TYPE_2__ *) malloc(_len_host__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__data0; _j0++) {
            host[_i0].data->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2835_check_data_error(host,intmask);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
