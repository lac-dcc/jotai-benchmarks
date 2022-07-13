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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* ijkio_app_ctx; } ;
struct TYPE_4__ {void* func_ijkio_on_app_event; } ;
typedef  TYPE_2__ IjkIOManagerContext ;

/* Variables and functions */

int ijkio_manager_set_callback(IjkIOManagerContext *h, void *callback) {
    if (!h)
        return -1;

    h->ijkio_app_ctx->func_ijkio_on_app_event = callback;

    return 0;
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
          int _len_h0 = 1;
          struct TYPE_5__ * h = (struct TYPE_5__ *) malloc(_len_h0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__ijkio_app_ctx0 = 1;
          h[_i0].ijkio_app_ctx = (struct TYPE_4__ *) malloc(_len_h__i0__ijkio_app_ctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_h__i0__ijkio_app_ctx0; _j0++) {
              }
          }
          void * callback;
          int benchRet = ijkio_manager_set_callback(h,callback);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ijkio_app_ctx);
          }
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          struct TYPE_5__ * h = (struct TYPE_5__ *) malloc(_len_h0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__ijkio_app_ctx0 = 1;
          h[_i0].ijkio_app_ctx = (struct TYPE_4__ *) malloc(_len_h__i0__ijkio_app_ctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_h__i0__ijkio_app_ctx0; _j0++) {
              }
          }
          void * callback;
          int benchRet = ijkio_manager_set_callback(h,callback);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ijkio_app_ctx);
          }
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          struct TYPE_5__ * h = (struct TYPE_5__ *) malloc(_len_h0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__ijkio_app_ctx0 = 1;
          h[_i0].ijkio_app_ctx = (struct TYPE_4__ *) malloc(_len_h__i0__ijkio_app_ctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_h__i0__ijkio_app_ctx0; _j0++) {
              }
          }
          void * callback;
          int benchRet = ijkio_manager_set_callback(h,callback);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].ijkio_app_ctx);
          }
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
