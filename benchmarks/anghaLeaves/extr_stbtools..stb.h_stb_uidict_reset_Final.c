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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int limit; scalar_t__ deleted; scalar_t__ count; scalar_t__ has_del; scalar_t__ has_empty; TYPE_1__* table; } ;
typedef  TYPE_2__ stb_uidict ;
struct TYPE_4__ {int k; } ;

/* Variables and functions */

void stb_uidict_reset(stb_uidict *e)
{
   int n;
   for (n=0; n < e->limit; ++n)
      e->table[n].k = 0xffffffff;
   e->has_empty = e->has_del = 0;
   e->count = 0;
   e->deleted = 0;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_e0 = 65025;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].deleted = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].has_del = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].has_empty = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__table0 = 1;
          e[_i0].table = (struct TYPE_4__ *) malloc(_len_e__i0__table0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_e__i0__table0; _j0++) {
              e[_i0].table->k = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          stb_uidict_reset(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].table);
          }
          free(e);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_e0 = 100;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].deleted = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].has_del = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].has_empty = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__table0 = 1;
          e[_i0].table = (struct TYPE_4__ *) malloc(_len_e__i0__table0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_e__i0__table0; _j0++) {
              e[_i0].table->k = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          stb_uidict_reset(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].table);
          }
          free(e);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_e0 = 1;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].deleted = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].has_del = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].has_empty = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__table0 = 1;
          e[_i0].table = (struct TYPE_4__ *) malloc(_len_e__i0__table0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_e__i0__table0; _j0++) {
              e[_i0].table->k = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          stb_uidict_reset(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].table);
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
