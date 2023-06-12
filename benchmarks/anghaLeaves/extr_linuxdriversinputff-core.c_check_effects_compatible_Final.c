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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ waveform; } ;
struct TYPE_4__ {TYPE_1__ periodic; } ;
struct ff_effect {scalar_t__ type; TYPE_2__ u; } ;

/* Variables and functions */
 scalar_t__ FF_PERIODIC ; 

__attribute__((used)) static inline int check_effects_compatible(struct ff_effect *e1,
					   struct ff_effect *e2)
{
	return e1->type == e2->type &&
	       (e1->type != FF_PERIODIC ||
		e1->u.periodic.waveform == e2->u.periodic.waveform);
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_e10 = 65025;
          struct ff_effect * e1 = (struct ff_effect *) malloc(_len_e10*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_e10; _i0++) {
              e1[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e1[_i0].u.periodic.waveform = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_e20 = 65025;
          struct ff_effect * e2 = (struct ff_effect *) malloc(_len_e20*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_e20; _i0++) {
              e2[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e2[_i0].u.periodic.waveform = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = check_effects_compatible(e1,e2);
          printf("%d\n", benchRet); 
          free(e1);
          free(e2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_e10 = 100;
          struct ff_effect * e1 = (struct ff_effect *) malloc(_len_e10*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_e10; _i0++) {
              e1[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e1[_i0].u.periodic.waveform = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_e20 = 100;
          struct ff_effect * e2 = (struct ff_effect *) malloc(_len_e20*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_e20; _i0++) {
              e2[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e2[_i0].u.periodic.waveform = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = check_effects_compatible(e1,e2);
          printf("%d\n", benchRet); 
          free(e1);
          free(e2);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_e10 = 1;
          struct ff_effect * e1 = (struct ff_effect *) malloc(_len_e10*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_e10; _i0++) {
              e1[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e1[_i0].u.periodic.waveform = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_e20 = 1;
          struct ff_effect * e2 = (struct ff_effect *) malloc(_len_e20*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_e20; _i0++) {
              e2[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e2[_i0].u.periodic.waveform = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = check_effects_compatible(e1,e2);
          printf("%d\n", benchRet); 
          free(e1);
          free(e2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
