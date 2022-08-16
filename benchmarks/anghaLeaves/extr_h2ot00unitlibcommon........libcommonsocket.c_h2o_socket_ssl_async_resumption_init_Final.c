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
typedef  int /*<<< orphan*/  h2o_socket_ssl_resumption_new_cb ;
typedef  int /*<<< orphan*/  h2o_socket_ssl_resumption_get_async_cb ;

/* Variables and functions */
 int /*<<< orphan*/  resumption_get_async ; 
 int /*<<< orphan*/  resumption_new ; 

void h2o_socket_ssl_async_resumption_init(h2o_socket_ssl_resumption_get_async_cb get_async_cb,
                                          h2o_socket_ssl_resumption_new_cb new_cb)
{
    resumption_get_async = get_async_cb;
    resumption_new = new_cb;
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
          int get_async_cb = 100;
          int new_cb = 100;
          h2o_socket_ssl_async_resumption_init(get_async_cb,new_cb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int get_async_cb = 255;
          int new_cb = 255;
          h2o_socket_ssl_async_resumption_init(get_async_cb,new_cb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int get_async_cb = 10;
          int new_cb = 10;
          h2o_socket_ssl_async_resumption_init(get_async_cb,new_cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
