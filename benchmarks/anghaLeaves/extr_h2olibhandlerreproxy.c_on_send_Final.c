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
typedef  int /*<<< orphan*/  h2o_send_state_t ;
typedef  int /*<<< orphan*/  h2o_req_t ;
typedef  int /*<<< orphan*/  h2o_ostream_t ;
typedef  int /*<<< orphan*/  h2o_iovec_t ;

/* Variables and functions */

__attribute__((used)) static void on_send(h2o_ostream_t *self, h2o_req_t *req, h2o_iovec_t *inbufs, size_t inbufcnt, h2o_send_state_t state)
{
    /* nothing to do */
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
          unsigned long inbufcnt = 100;
          int state = 100;
          int _len_self0 = 1;
          int * self = (int *) malloc(_len_self0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 1;
          int * req = (int *) malloc(_len_req0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inbufs0 = 1;
          int * inbufs = (int *) malloc(_len_inbufs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inbufs0; _i0++) {
            inbufs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          on_send(self,req,inbufs,inbufcnt,state);
          free(self);
          free(req);
          free(inbufs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
