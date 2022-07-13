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
struct tmio_mmc_host {scalar_t__ sg_off; int /*<<< orphan*/  sg_orig; int /*<<< orphan*/  sg_ptr; int /*<<< orphan*/  sg_len; } ;
struct mmc_data {int /*<<< orphan*/  sg; int /*<<< orphan*/  sg_len; } ;

/* Variables and functions */

__attribute__((used)) static void tmio_mmc_init_sg(struct tmio_mmc_host *host, struct mmc_data *data)
{
	host->sg_len = data->sg_len;
	host->sg_ptr = data->sg;
	host->sg_orig = data->sg;
	host->sg_off = 0;
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
          int _len_host0 = 1;
          struct tmio_mmc_host * host = (struct tmio_mmc_host *) malloc(_len_host0*sizeof(struct tmio_mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].sg_off = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_orig = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct mmc_data * data = (struct mmc_data *) malloc(_len_data0*sizeof(struct mmc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tmio_mmc_init_sg(host,data);
          free(host);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct tmio_mmc_host * host = (struct tmio_mmc_host *) malloc(_len_host0*sizeof(struct tmio_mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].sg_off = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_orig = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          struct mmc_data * data = (struct mmc_data *) malloc(_len_data0*sizeof(struct mmc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tmio_mmc_init_sg(host,data);
          free(host);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct tmio_mmc_host * host = (struct tmio_mmc_host *) malloc(_len_host0*sizeof(struct tmio_mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].sg_off = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_orig = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          struct mmc_data * data = (struct mmc_data *) malloc(_len_data0*sizeof(struct mmc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tmio_mmc_init_sg(host,data);
          free(host);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
