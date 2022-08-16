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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int accepted_fd; TYPE_2__* queued_fds; int /*<<< orphan*/  ipc; } ;
typedef  TYPE_1__ uv_pipe_t ;
struct TYPE_5__ {int offset; } ;
typedef  TYPE_2__ uv__stream_queued_fds_t ;

/* Variables and functions */

int uv_pipe_pending_count(uv_pipe_t* handle) {
  uv__stream_queued_fds_t* queued_fds;

  if (!handle->ipc)
    return 0;

  if (handle->accepted_fd == -1)
    return 0;

  if (handle->queued_fds == NULL)
    return 1;

  queued_fds = handle->queued_fds;
  return queued_fds->offset + 1;
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
          int _len_handle0 = 1;
          struct TYPE_4__ * handle = (struct TYPE_4__ *) malloc(_len_handle0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].accepted_fd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handle__i0__queued_fds0 = 1;
          handle[_i0].queued_fds = (struct TYPE_5__ *) malloc(_len_handle__i0__queued_fds0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_handle__i0__queued_fds0; _j0++) {
            handle[_i0].queued_fds->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        handle[_i0].ipc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_pipe_pending_count(handle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_handle0; _aux++) {
          free(handle[_aux].queued_fds);
          }
          free(handle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
