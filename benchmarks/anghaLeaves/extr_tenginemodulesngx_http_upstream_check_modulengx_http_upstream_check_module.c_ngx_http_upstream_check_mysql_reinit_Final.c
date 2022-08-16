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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_4__* check_data; } ;
typedef  TYPE_3__ ngx_http_upstream_check_peer_t ;
struct TYPE_7__ {int /*<<< orphan*/  start; int /*<<< orphan*/  last; int /*<<< orphan*/  pos; } ;
struct TYPE_6__ {int /*<<< orphan*/  end; int /*<<< orphan*/  last; int /*<<< orphan*/  start; int /*<<< orphan*/  pos; } ;
struct TYPE_9__ {TYPE_2__ recv; TYPE_1__ send; } ;
typedef  TYPE_4__ ngx_http_upstream_check_ctx_t ;

/* Variables and functions */

__attribute__((used)) static void
ngx_http_upstream_check_mysql_reinit(ngx_http_upstream_check_peer_t *peer)
{
    ngx_http_upstream_check_ctx_t *ctx;

    ctx = peer->check_data;

    ctx->send.pos = ctx->send.start;
    ctx->send.last = ctx->send.end;

    ctx->recv.pos = ctx->recv.last = ctx->recv.start;
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
          int _len_peer0 = 1;
          struct TYPE_8__ * peer = (struct TYPE_8__ *) malloc(_len_peer0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
              int _len_peer__i0__check_data0 = 1;
          peer[_i0].check_data = (struct TYPE_9__ *) malloc(_len_peer__i0__check_data0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data0; _j0++) {
            peer[_i0].check_data->recv.start = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].check_data->recv.last = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].check_data->recv.pos = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].check_data->send.end = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].check_data->send.last = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].check_data->send.start = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].check_data->send.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ngx_http_upstream_check_mysql_reinit(peer);
          for(int _aux = 0; _aux < _len_peer0; _aux++) {
          free(peer[_aux].check_data);
          }
          free(peer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
