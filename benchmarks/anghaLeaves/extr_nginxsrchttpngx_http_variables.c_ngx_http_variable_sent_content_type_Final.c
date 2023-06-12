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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_9__ {int valid; int not_found; int /*<<< orphan*/  data; scalar_t__ no_cacheable; scalar_t__ len; } ;
typedef  TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_7__ {int /*<<< orphan*/  data; scalar_t__ len; } ;
struct TYPE_8__ {TYPE_1__ content_type; } ;
struct TYPE_10__ {TYPE_2__ headers_out; } ;
typedef  TYPE_4__ ngx_http_request_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_http_variable_sent_content_type(ngx_http_request_t *r,
    ngx_http_variable_value_t *v, uintptr_t data)
{
    if (r->headers_out.content_type.len) {
        v->len = r->headers_out.content_type.len;
        v->valid = 1;
        v->no_cacheable = 0;
        v->not_found = 0;
        v->data = r->headers_out.content_type.data;

    } else {
        v->not_found = 1;
    }

    return NGX_OK;
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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          unsigned long data = 100;
        
          int _len_r0 = 1;
          struct TYPE_10__ * r = (struct TYPE_10__ *) malloc(_len_r0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              r[_i0].headers_out.content_type.data = ((-2 * (next_i()%2)) + 1) * next_i();
          r[_i0].headers_out.content_type.len = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_v0 = 1;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ngx_http_variable_sent_content_type(r,v,data);
          printf("%d\n", benchRet); 
          free(r);
          free(v);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          unsigned long data = 255;
        
          int _len_r0 = 65025;
          struct TYPE_10__ * r = (struct TYPE_10__ *) malloc(_len_r0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              r[_i0].headers_out.content_type.data = ((-2 * (next_i()%2)) + 1) * next_i();
          r[_i0].headers_out.content_type.len = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_v0 = 65025;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ngx_http_variable_sent_content_type(r,v,data);
          printf("%d\n", benchRet); 
          free(r);
          free(v);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          unsigned long data = 10;
        
          int _len_r0 = 100;
          struct TYPE_10__ * r = (struct TYPE_10__ *) malloc(_len_r0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              r[_i0].headers_out.content_type.data = ((-2 * (next_i()%2)) + 1) * next_i();
          r[_i0].headers_out.content_type.len = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_v0 = 100;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ngx_http_variable_sent_content_type(r,v,data);
          printf("%d\n", benchRet); 
          free(r);
          free(v);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          unsigned long data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_r0 = 1;
          struct TYPE_10__ * r = (struct TYPE_10__ *) malloc(_len_r0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              r[_i0].headers_out.content_type.data = ((-2 * (next_i()%2)) + 1) * next_i();
          r[_i0].headers_out.content_type.len = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_v0 = 1;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
              v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ngx_http_variable_sent_content_type(r,v,data);
          printf("%d\n", benchRet); 
          free(r);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
