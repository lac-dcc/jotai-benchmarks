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

/* Type definitions */
typedef  scalar_t__ u32 ;
struct venus_core {unsigned int codecs_count; struct venus_caps* caps; } ;
struct venus_caps {scalar_t__ codec; scalar_t__ domain; } ;

/* Variables and functions */

__attribute__((used)) static inline struct venus_caps *
venus_caps_by_codec(struct venus_core *core, u32 codec, u32 domain)
{
	unsigned int c;

	for (c = 0; c < core->codecs_count; c++) {
		if (core->caps[c].codec == codec &&
		    core->caps[c].domain == domain)
			return &core->caps[c];
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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          long codec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long domain = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_core0 = 1;
          struct venus_core * core = (struct venus_core *) malloc(_len_core0*sizeof(struct venus_core));
          for(int _i0 = 0; _i0 < _len_core0; _i0++) {
              core[_i0].codecs_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_core__i0__caps0 = 1;
          core[_i0].caps = (struct venus_caps *) malloc(_len_core__i0__caps0*sizeof(struct venus_caps));
          for(int _j0 = 0; _j0 < _len_core__i0__caps0; _j0++) {
              core[_i0].caps->codec = ((-2 * (next_i()%2)) + 1) * next_i();
          core[_i0].caps->domain = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct venus_caps * benchRet = venus_caps_by_codec(core,codec,domain);
          printf("%ld\n", (*benchRet).codec);
          printf("%ld\n", (*benchRet).domain);
          for(int _aux = 0; _aux < _len_core0; _aux++) {
          free(core[_aux].caps);
          }
          free(core);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
