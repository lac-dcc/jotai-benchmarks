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

/* Type definitions */
struct t4_cq {scalar_t__ sw_cidx; scalar_t__ size; int /*<<< orphan*/  sw_in_use; } ;

/* Variables and functions */

__attribute__((used)) static inline void t4_swcq_consume(struct t4_cq *cq)
{
	cq->sw_in_use--;
	if (++cq->sw_cidx == cq->size)
		cq->sw_cidx = 0;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_cq0 = 65025;
          struct t4_cq * cq = (struct t4_cq *) malloc(_len_cq0*sizeof(struct t4_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
              cq[_i0].sw_cidx = ((-2 * (next_i()%2)) + 1) * next_i();
          cq[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          cq[_i0].sw_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          t4_swcq_consume(cq);
          free(cq);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_cq0 = 100;
          struct t4_cq * cq = (struct t4_cq *) malloc(_len_cq0*sizeof(struct t4_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
              cq[_i0].sw_cidx = ((-2 * (next_i()%2)) + 1) * next_i();
          cq[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          cq[_i0].sw_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          t4_swcq_consume(cq);
          free(cq);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_cq0 = 1;
          struct t4_cq * cq = (struct t4_cq *) malloc(_len_cq0*sizeof(struct t4_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
              cq[_i0].sw_cidx = ((-2 * (next_i()%2)) + 1) * next_i();
          cq[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          cq[_i0].sw_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          t4_swcq_consume(cq);
          free(cq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
