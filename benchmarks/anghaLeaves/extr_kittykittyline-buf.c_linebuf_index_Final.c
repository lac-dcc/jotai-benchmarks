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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  line_attrs_type ;
typedef  int index_type ;
struct TYPE_3__ {int ynum; int* line_map; int /*<<< orphan*/ * line_attrs; } ;
typedef  TYPE_1__ LineBuf ;

/* Variables and functions */

void
linebuf_index(LineBuf* self, index_type top, index_type bottom) {
    if (top >= self->ynum - 1 || bottom >= self->ynum || bottom <= top) return;
    index_type old_top = self->line_map[top];
    line_attrs_type old_attrs = self->line_attrs[top];
    for (index_type i = top; i < bottom; i++) {
        self->line_map[i] = self->line_map[i + 1];
        self->line_attrs[i] = self->line_attrs[i + 1];
    }
    self->line_map[bottom] = old_top;
    self->line_attrs[bottom] = old_attrs;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
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
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int top = 100;
        
          int bottom = 100;
        
          int _len_self0 = 1;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].ynum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__line_map0 = 1;
          self[_i0].line_map = (int *) malloc(_len_self__i0__line_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_map0; _j0++) {
            self[_i0].line_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_self__i0__line_attrs0 = 1;
          self[_i0].line_attrs = (int *) malloc(_len_self__i0__line_attrs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_attrs0; _j0++) {
            self[_i0].line_attrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          linebuf_index(self,top,bottom);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_map);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_attrs);
          }
          free(self);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
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
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int top = 255;
        
          int bottom = 255;
        
          int _len_self0 = 65025;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].ynum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__line_map0 = 1;
          self[_i0].line_map = (int *) malloc(_len_self__i0__line_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_map0; _j0++) {
            self[_i0].line_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_self__i0__line_attrs0 = 1;
          self[_i0].line_attrs = (int *) malloc(_len_self__i0__line_attrs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_attrs0; _j0++) {
            self[_i0].line_attrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          linebuf_index(self,top,bottom);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_map);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_attrs);
          }
          free(self);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
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
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int top = 10;
        
          int bottom = 10;
        
          int _len_self0 = 100;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].ynum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__line_map0 = 1;
          self[_i0].line_map = (int *) malloc(_len_self__i0__line_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_map0; _j0++) {
            self[_i0].line_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_self__i0__line_attrs0 = 1;
          self[_i0].line_attrs = (int *) malloc(_len_self__i0__line_attrs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_attrs0; _j0++) {
            self[_i0].line_attrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          linebuf_index(self,top,bottom);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_map);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_attrs);
          }
          free(self);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
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
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int top = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_self0 = 1;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].ynum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__line_map0 = 1;
          self[_i0].line_map = (int *) malloc(_len_self__i0__line_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_map0; _j0++) {
            self[_i0].line_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_self__i0__line_attrs0 = 1;
          self[_i0].line_attrs = (int *) malloc(_len_self__i0__line_attrs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__line_attrs0; _j0++) {
            self[_i0].line_attrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          linebuf_index(self,top,bottom);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_map);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].line_attrs);
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
