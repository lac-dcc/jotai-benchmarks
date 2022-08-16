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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ngx_socket_t ;
struct TYPE_6__ {int status; } ;
struct TYPE_7__ {int err_status; scalar_t__ http_version; TYPE_2__ headers_out; TYPE_1__* connection; } ;
typedef  TYPE_3__ ngx_http_request_t ;
struct TYPE_5__ {scalar_t__ fd; } ;

/* Variables and functions */
 int NGX_HTTP_LUA_FFI_BAD_CONTEXT ; 
 scalar_t__ NGX_HTTP_VERSION_9 ; 

int
ngx_http_lua_ffi_get_resp_status(ngx_http_request_t *r)
{
    if (r->connection->fd == (ngx_socket_t) -1) {
        return NGX_HTTP_LUA_FFI_BAD_CONTEXT;
    }

    if (r->err_status) {
        return r->err_status;

    } else if (r->headers_out.status) {
        return r->headers_out.status;

    } else if (r->http_version == NGX_HTTP_VERSION_9) {
        return 9;

    } else {
        return 0;
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
          int _len_r0 = 1;
          struct TYPE_7__ * r = (struct TYPE_7__ *) malloc(_len_r0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].err_status = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].http_version = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].headers_out.status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__connection0 = 1;
          r[_i0].connection = (struct TYPE_5__ *) malloc(_len_r__i0__connection0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_r__i0__connection0; _j0++) {
            r[_i0].connection->fd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_lua_ffi_get_resp_status(r);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].connection);
          }
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
