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
       0            empty\n\
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
typedef  scalar_t__ mpv_render_param_type ;
struct TYPE_3__ {scalar_t__ type; void* data; } ;
typedef  TYPE_1__ mpv_render_param ;

/* Variables and functions */

void *get_mpv_render_param(mpv_render_param *params, mpv_render_param_type type,
                           void *def)
{
    for (int n = 0; params && params[n].type; n++) {
        if (params[n].type == type)
            return params[n].data;
    }
    return def;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          long type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_params0 = 1;
          struct TYPE_3__ * params = (struct TYPE_3__ *) malloc(_len_params0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              params[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * def;
        
          void * benchRet = get_mpv_render_param(params,type,def);
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
