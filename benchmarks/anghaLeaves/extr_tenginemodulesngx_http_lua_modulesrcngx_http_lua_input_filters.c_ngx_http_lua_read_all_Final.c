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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ssize_t ;
typedef  int /*<<< orphan*/  ngx_log_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_7__ {TYPE_1__* buf; } ;
typedef  TYPE_2__ ngx_chain_t ;
struct TYPE_8__ {int /*<<< orphan*/  pos; } ;
typedef  TYPE_3__ ngx_buf_t ;
struct TYPE_6__ {int /*<<< orphan*/  last; } ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_AGAIN ; 
 int /*<<< orphan*/  NGX_OK ; 

ngx_int_t
ngx_http_lua_read_all(ngx_buf_t *src, ngx_chain_t *buf_in, ssize_t bytes,
    ngx_log_t *log)
{
    if (bytes == 0) {
        return NGX_OK;
    }

    buf_in->buf->last += bytes;
    src->pos += bytes;

    return NGX_AGAIN;
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
          long bytes = 100;
          int _len_src0 = 1;
          struct TYPE_8__ * src = (struct TYPE_8__ *) malloc(_len_src0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf_in0 = 1;
          struct TYPE_7__ * buf_in = (struct TYPE_7__ *) malloc(_len_buf_in0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_buf_in0; _i0++) {
              int _len_buf_in__i0__buf0 = 1;
          buf_in[_i0].buf = (struct TYPE_6__ *) malloc(_len_buf_in__i0__buf0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_buf_in__i0__buf0; _j0++) {
            buf_in[_i0].buf->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_log0 = 1;
          int * log = (int *) malloc(_len_log0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_lua_read_all(src,buf_in,bytes,log);
          printf("%d\n", benchRet); 
          free(src);
          for(int _aux = 0; _aux < _len_buf_in0; _aux++) {
          free(buf_in[_aux].buf);
          }
          free(buf_in);
          free(log);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
