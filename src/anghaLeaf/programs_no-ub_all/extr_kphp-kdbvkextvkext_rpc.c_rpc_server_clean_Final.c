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
       0            big-arr\n\
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
struct rpc_server {int inbound_packet_num; int packet_num; int /*<<< orphan*/  out_buf; int /*<<< orphan*/  out_rptr; int /*<<< orphan*/  out_wptr; scalar_t__ in_bytes; } ;

/* Variables and functions */

__attribute__((used)) static void rpc_server_clean (struct rpc_server *server) { /* {{{ */
  server->in_bytes = 0;
  server->out_wptr = server->out_rptr = server->out_buf;
  server->inbound_packet_num = server->packet_num = -2;
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

    // big-arr
    case 0:
    {
          int _len_server0 = 1;
          struct rpc_server * server = (struct rpc_server *) malloc(_len_server0*sizeof(struct rpc_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server->inbound_packet_num = ((-2 * (next_i()%2)) + 1) * next_i();
        server->packet_num = ((-2 * (next_i()%2)) + 1) * next_i();
        server->out_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        server->out_rptr = ((-2 * (next_i()%2)) + 1) * next_i();
        server->out_wptr = ((-2 * (next_i()%2)) + 1) * next_i();
        server->in_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rpc_server_clean(server);
          free(server);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
