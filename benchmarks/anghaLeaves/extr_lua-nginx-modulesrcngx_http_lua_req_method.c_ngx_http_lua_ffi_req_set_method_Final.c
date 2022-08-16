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
typedef  scalar_t__ ngx_socket_t ;
struct TYPE_5__ {int method; int /*<<< orphan*/  method_name; TYPE_1__* connection; } ;
typedef  TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {scalar_t__ fd; } ;

/* Variables and functions */
 int NGX_DECLINED ; 
#define  NGX_HTTP_COPY 142 
#define  NGX_HTTP_DELETE 141 
#define  NGX_HTTP_GET 140 
#define  NGX_HTTP_HEAD 139 
#define  NGX_HTTP_LOCK 138 
 int NGX_HTTP_LUA_FFI_BAD_CONTEXT ; 
#define  NGX_HTTP_MKCOL 137 
#define  NGX_HTTP_MOVE 136 
#define  NGX_HTTP_OPTIONS 135 
#define  NGX_HTTP_PATCH 134 
#define  NGX_HTTP_POST 133 
#define  NGX_HTTP_PROPFIND 132 
#define  NGX_HTTP_PROPPATCH 131 
#define  NGX_HTTP_PUT 130 
#define  NGX_HTTP_TRACE 129 
#define  NGX_HTTP_UNLOCK 128 
 int NGX_OK ; 
 int /*<<< orphan*/  ngx_http_lua_copy_method ; 
 int /*<<< orphan*/  ngx_http_lua_delete_method ; 
 int /*<<< orphan*/  ngx_http_lua_get_method ; 
 int /*<<< orphan*/  ngx_http_lua_head_method ; 
 int /*<<< orphan*/  ngx_http_lua_lock_method ; 
 int /*<<< orphan*/  ngx_http_lua_mkcol_method ; 
 int /*<<< orphan*/  ngx_http_lua_move_method ; 
 int /*<<< orphan*/  ngx_http_lua_options_method ; 
 int /*<<< orphan*/  ngx_http_lua_patch_method ; 
 int /*<<< orphan*/  ngx_http_lua_post_method ; 
 int /*<<< orphan*/  ngx_http_lua_propfind_method ; 
 int /*<<< orphan*/  ngx_http_lua_proppatch_method ; 
 int /*<<< orphan*/  ngx_http_lua_put_method ; 
 int /*<<< orphan*/  ngx_http_lua_trace_method ; 
 int /*<<< orphan*/  ngx_http_lua_unlock_method ; 

int
ngx_http_lua_ffi_req_set_method(ngx_http_request_t *r, int method)
{
    if (r->connection->fd == (ngx_socket_t) -1) {
        return NGX_HTTP_LUA_FFI_BAD_CONTEXT;
    }

    switch (method) {
        case NGX_HTTP_GET:
            r->method_name = ngx_http_lua_get_method;
            break;

        case NGX_HTTP_POST:
            r->method_name = ngx_http_lua_post_method;
            break;

        case NGX_HTTP_PUT:
            r->method_name = ngx_http_lua_put_method;
            break;

        case NGX_HTTP_HEAD:
            r->method_name = ngx_http_lua_head_method;
            break;

        case NGX_HTTP_DELETE:
            r->method_name = ngx_http_lua_delete_method;
            break;

        case NGX_HTTP_OPTIONS:
            r->method_name = ngx_http_lua_options_method;
            break;

        case NGX_HTTP_MKCOL:
            r->method_name = ngx_http_lua_mkcol_method;
            break;

        case NGX_HTTP_COPY:
            r->method_name = ngx_http_lua_copy_method;
            break;

        case NGX_HTTP_MOVE:
            r->method_name = ngx_http_lua_move_method;
            break;

        case NGX_HTTP_PROPFIND:
            r->method_name = ngx_http_lua_propfind_method;
            break;

        case NGX_HTTP_PROPPATCH:
            r->method_name = ngx_http_lua_proppatch_method;
            break;

        case NGX_HTTP_LOCK:
            r->method_name = ngx_http_lua_lock_method;
            break;

        case NGX_HTTP_UNLOCK:
            r->method_name = ngx_http_lua_unlock_method;
            break;

        case NGX_HTTP_PATCH:
            r->method_name = ngx_http_lua_patch_method;
            break;

        case NGX_HTTP_TRACE:
            r->method_name = ngx_http_lua_trace_method;
            break;

        default:
            return NGX_DECLINED;
    }

    r->method = method;
    return NGX_OK;
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
          int method = 100;
          int _len_r0 = 1;
          struct TYPE_5__ * r = (struct TYPE_5__ *) malloc(_len_r0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].method = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].method_name = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__connection0 = 1;
          r[_i0].connection = (struct TYPE_4__ *) malloc(_len_r__i0__connection0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_r__i0__connection0; _j0++) {
            r[_i0].connection->fd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_lua_ffi_req_set_method(r,method);
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
