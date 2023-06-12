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
struct lru_cache {unsigned int nr_elements; struct hlist_head* lc_slot; } ;
struct hlist_head {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct hlist_head *lc_hash_slot(struct lru_cache *lc, unsigned int enr)
{
	return  lc->lc_slot + (enr % lc->nr_elements);
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int enr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_lc0 = 1;
          struct lru_cache * lc = (struct lru_cache *) malloc(_len_lc0*sizeof(struct lru_cache));
          for(int _i0 = 0; _i0 < _len_lc0; _i0++) {
              lc[_i0].nr_elements = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lc__i0__lc_slot0 = 1;
          lc[_i0].lc_slot = (struct hlist_head *) malloc(_len_lc__i0__lc_slot0*sizeof(struct hlist_head));
          for(int _j0 = 0; _j0 < _len_lc__i0__lc_slot0; _j0++) {
              lc[_i0].lc_slot->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct hlist_head * benchRet = lc_hash_slot(lc,enr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_lc0; _aux++) {
          free(lc[_aux].lc_slot);
          }
          free(lc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
