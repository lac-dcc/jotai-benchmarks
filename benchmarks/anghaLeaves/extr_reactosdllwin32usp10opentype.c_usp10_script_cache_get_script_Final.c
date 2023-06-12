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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ tag; } ;
struct TYPE_5__ {size_t script_count; TYPE_2__* scripts; } ;
typedef  TYPE_1__ ScriptCache ;
typedef  scalar_t__ OPENTYPE_TAG ;
typedef  TYPE_2__ LoadedScript ;

/* Variables and functions */

__attribute__((used)) static LoadedScript *usp10_script_cache_get_script(ScriptCache *script_cache, OPENTYPE_TAG tag)
{
    size_t i;

    for (i = 0; i < script_cache->script_count; ++i)
    {
        if (script_cache->scripts[i].tag == tag)
            return &script_cache->scripts[i];
    }

    return NULL;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
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
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          long tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_script_cache0 = 1;
          struct TYPE_5__ * script_cache = (struct TYPE_5__ *) malloc(_len_script_cache0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_script_cache0; _i0++) {
              script_cache[_i0].script_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_script_cache__i0__scripts0 = 1;
          script_cache[_i0].scripts = (struct TYPE_6__ *) malloc(_len_script_cache__i0__scripts0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_script_cache__i0__scripts0; _j0++) {
              script_cache[_i0].scripts->tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct TYPE_6__ * benchRet = usp10_script_cache_get_script(script_cache,tag);
          printf("%ld\n", (*benchRet).tag);
          for(int _aux = 0; _aux < _len_script_cache0; _aux++) {
          free(script_cache[_aux].scripts);
          }
          free(script_cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
