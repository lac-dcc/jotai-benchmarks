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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  ident_map_t ;
struct TYPE_3__ {int /*<<< orphan*/ * ident_map; } ;
typedef  TYPE_1__ ScriptDisp ;
typedef  int DISPID ;

/* Variables and functions */

__attribute__((used)) static inline DISPID ident_to_id(ScriptDisp *This, ident_map_t *ident)
{
    return (ident-This->ident_map)+1;
}


// ------------------------------------------------------------------------- //




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
          int _len_This0 = 1;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__ident_map0 = 1;
          This[_i0].ident_map = (int *) malloc(_len_This__i0__ident_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ident_map0; _j0++) {
            This[_i0].ident_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ident0 = 1;
          int * ident = (int *) malloc(_len_ident0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ident0; _i0++) {
            ident[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ident_to_id(This,ident);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].ident_map);
          }
          free(This);
          free(ident);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_This0 = 65025;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__ident_map0 = 1;
          This[_i0].ident_map = (int *) malloc(_len_This__i0__ident_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ident_map0; _j0++) {
            This[_i0].ident_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ident0 = 65025;
          int * ident = (int *) malloc(_len_ident0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ident0; _i0++) {
            ident[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ident_to_id(This,ident);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].ident_map);
          }
          free(This);
          free(ident);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_This0 = 100;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__ident_map0 = 1;
          This[_i0].ident_map = (int *) malloc(_len_This__i0__ident_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ident_map0; _j0++) {
            This[_i0].ident_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ident0 = 100;
          int * ident = (int *) malloc(_len_ident0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ident0; _i0++) {
            ident[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ident_to_id(This,ident);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].ident_map);
          }
          free(This);
          free(ident);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
