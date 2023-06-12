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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int c; unsigned int a; } ;
typedef  TYPE_1__ opj_mqc_t ;

/* Variables and functions */

__attribute__((used)) static void mqc_setbits(opj_mqc_t *mqc) {
	unsigned int tempc = mqc->c + mqc->a;
	mqc->c |= 0xffff;
	if (mqc->c >= tempc) {
		mqc->c -= 0x8000;
	}
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_mqc0 = 65025;
          struct TYPE_3__ * mqc = (struct TYPE_3__ *) malloc(_len_mqc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mqc0; _i0++) {
              mqc[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
          mqc[_i0].a = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          mqc_setbits(mqc);
          free(mqc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_mqc0 = 100;
          struct TYPE_3__ * mqc = (struct TYPE_3__ *) malloc(_len_mqc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mqc0; _i0++) {
              mqc[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
          mqc[_i0].a = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          mqc_setbits(mqc);
          free(mqc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_mqc0 = 1;
          struct TYPE_3__ * mqc = (struct TYPE_3__ *) malloc(_len_mqc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mqc0; _i0++) {
              mqc[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
          mqc[_i0].a = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          mqc_setbits(mqc);
          free(mqc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
