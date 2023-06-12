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
struct TYPE_5__ {TYPE_1__* cursor; scalar_t__* tabstops; } ;
struct TYPE_4__ {int x; } ;
typedef  TYPE_2__ Screen ;

/* Variables and functions */

void
screen_backtab(Screen *self, unsigned int count) {
    // Move back count tabs
    if (!count) count = 1;
    int i;
    while (count > 0 && self->cursor->x > 0) {
        count--;
        for (i = self->cursor->x - 1; i >= 0; i--) {
            if (self->tabstops[i]) { self->cursor->x = i; break; }
        }
        if (i <= 0) self->cursor->x = 0;
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


    // int-bounds
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
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned int count = 100;
        
          int _len_self0 = 1;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__cursor0 = 1;
          self[_i0].cursor = (struct TYPE_4__ *) malloc(_len_self__i0__cursor0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_self__i0__cursor0; _j0++) {
              self[_i0].cursor->x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_self__i0__tabstops0 = 1;
          self[_i0].tabstops = (long *) malloc(_len_self__i0__tabstops0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_self__i0__tabstops0; _j0++) {
            self[_i0].tabstops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          screen_backtab(self,count);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].tabstops);
          }
          free(self);
        
        break;
    }


    // big-arr
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
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned int count = 255;
        
          int _len_self0 = 65025;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__cursor0 = 1;
          self[_i0].cursor = (struct TYPE_4__ *) malloc(_len_self__i0__cursor0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_self__i0__cursor0; _j0++) {
              self[_i0].cursor->x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_self__i0__tabstops0 = 1;
          self[_i0].tabstops = (long *) malloc(_len_self__i0__tabstops0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_self__i0__tabstops0; _j0++) {
            self[_i0].tabstops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          screen_backtab(self,count);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].tabstops);
          }
          free(self);
        
        break;
    }


    // big-arr-10x
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
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned int count = 10;
        
          int _len_self0 = 100;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__cursor0 = 1;
          self[_i0].cursor = (struct TYPE_4__ *) malloc(_len_self__i0__cursor0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_self__i0__cursor0; _j0++) {
              self[_i0].cursor->x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_self__i0__tabstops0 = 1;
          self[_i0].tabstops = (long *) malloc(_len_self__i0__tabstops0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_self__i0__tabstops0; _j0++) {
            self[_i0].tabstops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          screen_backtab(self,count);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].tabstops);
          }
          free(self);
        
        break;
    }


    // empty
    case 3:
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
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_self0 = 1;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__cursor0 = 1;
          self[_i0].cursor = (struct TYPE_4__ *) malloc(_len_self__i0__cursor0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_self__i0__cursor0; _j0++) {
              self[_i0].cursor->x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_self__i0__tabstops0 = 1;
          self[_i0].tabstops = (long *) malloc(_len_self__i0__tabstops0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_self__i0__tabstops0; _j0++) {
            self[_i0].tabstops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          screen_backtab(self,count);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].tabstops);
          }
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
