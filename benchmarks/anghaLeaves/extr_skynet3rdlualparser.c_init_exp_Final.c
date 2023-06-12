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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  expkind ;
struct TYPE_4__ {int info; } ;
struct TYPE_5__ {TYPE_1__ u; int /*<<< orphan*/  k; int /*<<< orphan*/  t; int /*<<< orphan*/  f; } ;
typedef  TYPE_2__ expdesc ;

/* Variables and functions */
 int /*<<< orphan*/  NO_JUMP ; 

__attribute__((used)) static void init_exp (expdesc *e, expkind k, int i) {
  e->f = e->t = NO_JUMP;
  e->k = k;
  e->u.info = i;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int k = 100;
        
          int i = 100;
        
          int _len_e0 = 1;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].u.info = ((-2 * (next_i()%2)) + 1) * next_i();
        
          e[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].f = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_exp(e,k,i);
          free(e);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int k = 255;
        
          int i = 255;
        
          int _len_e0 = 65025;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].u.info = ((-2 * (next_i()%2)) + 1) * next_i();
        
          e[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].f = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_exp(e,k,i);
          free(e);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int k = 10;
        
          int i = 10;
        
          int _len_e0 = 100;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].u.info = ((-2 * (next_i()%2)) + 1) * next_i();
        
          e[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].f = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_exp(e,k,i);
          free(e);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int k = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_e0 = 1;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].u.info = ((-2 * (next_i()%2)) + 1) * next_i();
        
          e[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].f = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_exp(e,k,i);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
