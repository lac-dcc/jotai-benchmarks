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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int fd; } ;
struct TYPE_9__ {TYPE_2__ io_watcher; } ;
typedef  TYPE_3__ uv_udp_t ;
struct TYPE_7__ {int fd; } ;
struct TYPE_10__ {TYPE_1__ io_watcher; } ;
typedef  TYPE_4__ uv_stream_t ;
struct TYPE_11__ {int type; } ;
typedef  TYPE_5__ uv_handle_t ;

/* Variables and functions */
#define  UV_NAMED_PIPE 130 
#define  UV_TCP 129 
#define  UV_UDP 128 

__attribute__((used)) static int uv__handle_fd(uv_handle_t* handle) {
  switch (handle->type) {
    case UV_NAMED_PIPE:
    case UV_TCP:
      return ((uv_stream_t*) handle)->io_watcher.fd;

    case UV_UDP:
      return ((uv_udp_t*) handle)->io_watcher.fd;

    default:
      return -1;
  }
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
          struct TYPE_11__ * handle = (struct TYPE_11__ *) malloc(_len_handle0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv__handle_fd(handle);
          printf("%d\n", benchRet); 
          free(handle);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_handle0 = 100;
          struct TYPE_11__ * handle = (struct TYPE_11__ *) malloc(_len_handle0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv__handle_fd(handle);
          printf("%d\n", benchRet); 
          free(handle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
