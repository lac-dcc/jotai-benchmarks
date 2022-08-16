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
struct TYPE_5__ {int /*<<< orphan*/  ip; TYPE_1__* request; } ;
typedef  TYPE_2__ ngx_http_script_engine_t ;
struct TYPE_4__ {scalar_t__ uri_changed; } ;

/* Variables and functions */
 int /*<<< orphan*/  ngx_http_script_exit ; 

void
ngx_http_script_break_code(ngx_http_script_engine_t *e)
{
    e->request->uri_changed = 0;

    e->ip = ngx_http_script_exit;
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
          int _len_e0 = 1;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__request0 = 1;
          e[_i0].request = (struct TYPE_4__ *) malloc(_len_e__i0__request0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_e__i0__request0; _j0++) {
            e[_i0].request->uri_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ngx_http_script_break_code(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].request);
          }
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
