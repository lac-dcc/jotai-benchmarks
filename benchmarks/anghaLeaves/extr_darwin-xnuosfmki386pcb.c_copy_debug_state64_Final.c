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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  dr7; int /*<<< orphan*/  dr6; int /*<<< orphan*/  dr3; int /*<<< orphan*/  dr2; int /*<<< orphan*/  dr1; int /*<<< orphan*/  dr0; int /*<<< orphan*/  dr5; int /*<<< orphan*/  dr4; } ;
typedef  TYPE_1__ x86_debug_state64_t ;
typedef  scalar_t__ boolean_t ;

/* Variables and functions */

void
copy_debug_state64(
		x86_debug_state64_t *src,
		x86_debug_state64_t *target,
		boolean_t all)
{
	if (all) {
		target->dr4 = src->dr4;
		target->dr5 = src->dr5;
	}

	target->dr0 = src->dr0;
	target->dr1 = src->dr1;
	target->dr2 = src->dr2;
	target->dr3 = src->dr3;
	target->dr6 = src->dr6;
	target->dr7 = src->dr7;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
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
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long all = 100;
        
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_target0 = 1;
          struct TYPE_4__ * target = (struct TYPE_4__ *) malloc(_len_target0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              target[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          copy_debug_state64(src,target,all);
          free(src);
          free(target);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
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
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long all = 255;
        
          int _len_src0 = 65025;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_target0 = 65025;
          struct TYPE_4__ * target = (struct TYPE_4__ *) malloc(_len_target0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              target[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          copy_debug_state64(src,target,all);
          free(src);
          free(target);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
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
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long all = 10;
        
          int _len_src0 = 100;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_target0 = 100;
          struct TYPE_4__ * target = (struct TYPE_4__ *) malloc(_len_target0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              target[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          copy_debug_state64(src,target,all);
          free(src);
          free(target);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
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
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long all = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_target0 = 1;
          struct TYPE_4__ * target = (struct TYPE_4__ *) malloc(_len_target0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              target[_i0].dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr6 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr3 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr2 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr5 = ((-2 * (next_i()%2)) + 1) * next_i();
          target[_i0].dr4 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          copy_debug_state64(src,target,all);
          free(src);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
