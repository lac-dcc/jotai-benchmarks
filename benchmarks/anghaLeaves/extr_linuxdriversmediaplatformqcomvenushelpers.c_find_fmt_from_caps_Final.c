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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct venus_caps {unsigned int num_fmts; TYPE_1__* fmts; } ;
struct TYPE_2__ {scalar_t__ buftype; scalar_t__ fmt; } ;

/* Variables and functions */

__attribute__((used)) static bool find_fmt_from_caps(struct venus_caps *caps, u32 buftype, u32 fmt)
{
	unsigned int i;

	for (i = 0; i < caps->num_fmts; i++) {
		if (caps->fmts[i].buftype == buftype &&
		    caps->fmts[i].fmt == fmt)
			return true;
	}

	return false;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          long buftype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_caps0 = 1;
          struct venus_caps * caps = (struct venus_caps *) malloc(_len_caps0*sizeof(struct venus_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
              caps[_i0].num_fmts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_caps__i0__fmts0 = 1;
          caps[_i0].fmts = (struct TYPE_2__ *) malloc(_len_caps__i0__fmts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_caps__i0__fmts0; _j0++) {
              caps[_i0].fmts->buftype = ((-2 * (next_i()%2)) + 1) * next_i();
          caps[_i0].fmts->fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = find_fmt_from_caps(caps,buftype,fmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_caps0; _aux++) {
          free(caps[_aux].fmts);
          }
          free(caps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
