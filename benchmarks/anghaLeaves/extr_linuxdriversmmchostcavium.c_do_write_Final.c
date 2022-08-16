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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct mmc_request {TYPE_1__* data; } ;
struct TYPE_2__ {int bytes_xfered; int blocks; int blksz; scalar_t__ error; } ;

/* Variables and functions */

__attribute__((used)) static void do_write(struct mmc_request *req)
{
	req->data->bytes_xfered = req->data->blocks * req->data->blksz;
	req->data->error = 0;
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
          int _len_req0 = 1;
          struct mmc_request * req = (struct mmc_request *) malloc(_len_req0*sizeof(struct mmc_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__data0 = 1;
          req[_i0].data = (struct TYPE_2__ *) malloc(_len_req__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_req__i0__data0; _j0++) {
            req[_i0].data->bytes_xfered = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].data->blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].data->blksz = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].data->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          do_write(req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].data);
          }
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
