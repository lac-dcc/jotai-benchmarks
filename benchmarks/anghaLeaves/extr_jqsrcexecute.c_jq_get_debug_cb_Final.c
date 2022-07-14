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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* debug_cb_data; int /*<<< orphan*/  debug_cb; } ;
typedef  TYPE_1__ jq_state ;
typedef  int /*<<< orphan*/  jq_msg_cb ;

/* Variables and functions */

void jq_get_debug_cb(jq_state *jq, jq_msg_cb *cb, void **data) {
  *cb = jq->debug_cb;
  *data = jq->debug_cb_data;
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
          int _len_jq0 = 1;
          struct TYPE_3__ * jq = (struct TYPE_3__ *) malloc(_len_jq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jq0; _i0++) {
            jq[_i0].debug_cb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 1;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
          jq_get_debug_cb(jq,cb,data);
          free(jq);
          free(cb);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_jq0 = 65025;
          struct TYPE_3__ * jq = (struct TYPE_3__ *) malloc(_len_jq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jq0; _i0++) {
            jq[_i0].debug_cb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 65025;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
          jq_get_debug_cb(jq,cb,data);
          free(jq);
          free(cb);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_jq0 = 100;
          struct TYPE_3__ * jq = (struct TYPE_3__ *) malloc(_len_jq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jq0; _i0++) {
            jq[_i0].debug_cb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 100;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
          jq_get_debug_cb(jq,cb,data);
          free(jq);
          free(cb);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}