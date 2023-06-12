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
struct TYPE_5__ {TYPE_1__* view; } ;
struct TYPE_4__ {scalar_t__ sy; scalar_t__ sx; } ;
typedef  TYPE_2__ RPanel ;

/* Variables and functions */

__attribute__((used)) static void resetScrollPos(RPanel *p) {
	p->view->sx = 0;
	p->view->sy = 0;
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_p0 = 65025;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__view0 = 1;
          p[_i0].view = (struct TYPE_4__ *) malloc(_len_p__i0__view0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__view0; _j0++) {
              p[_i0].view->sy = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].view->sx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          resetScrollPos(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].view);
          }
          free(p);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_p0 = 100;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__view0 = 1;
          p[_i0].view = (struct TYPE_4__ *) malloc(_len_p__i0__view0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__view0; _j0++) {
              p[_i0].view->sy = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].view->sx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          resetScrollPos(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].view);
          }
          free(p);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_p0 = 1;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__view0 = 1;
          p[_i0].view = (struct TYPE_4__ *) malloc(_len_p__i0__view0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__view0; _j0++) {
              p[_i0].view->sy = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].view->sx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          resetScrollPos(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].view);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
