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
       3            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t size; int /*<<< orphan*/  filter_level; scalar_t__ count; void* data; void* sentinel; void* head; void* tail; } ;
typedef  TYPE_1__ ngx_http_lua_log_ringbuf_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_LOG_DEBUG ; 

void
ngx_http_lua_log_ringbuf_init(ngx_http_lua_log_ringbuf_t *rb, void *buf,
    size_t len)
{
    rb->data = buf;
    rb->size = len;

    rb->tail = rb->data;
    rb->head = rb->data;
    rb->sentinel = rb->data + rb->size;
    rb->count = 0;
    rb->filter_level = NGX_LOG_DEBUG;

    return;
}

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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long len = 100;
        
          int _len_rb0 = 1;
          struct TYPE_3__ * rb = (struct TYPE_3__ *) malloc(_len_rb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].filter_level = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * buf;
        
          ngx_http_lua_log_ringbuf_init(rb,buf,len);
          free(rb);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long len = 255;
        
          int _len_rb0 = 65025;
          struct TYPE_3__ * rb = (struct TYPE_3__ *) malloc(_len_rb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].filter_level = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * buf;
        
          ngx_http_lua_log_ringbuf_init(rb,buf,len);
          free(rb);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long len = 10;
        
          int _len_rb0 = 100;
          struct TYPE_3__ * rb = (struct TYPE_3__ *) malloc(_len_rb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].filter_level = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * buf;
        
          ngx_http_lua_log_ringbuf_init(rb,buf,len);
          free(rb);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rb0 = 1;
          struct TYPE_3__ * rb = (struct TYPE_3__ *) malloc(_len_rb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].filter_level = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * buf;
        
          ngx_http_lua_log_ringbuf_init(rb,buf,len);
          free(rb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
