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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int nwatchers; int /*<<< orphan*/ ** watchers; } ;
typedef  TYPE_1__ uv_loop_t ;

/* Variables and functions */

int uv__fd_exists(uv_loop_t* loop, int fd) {
  return (unsigned) fd < loop->nwatchers && loop->watchers[fd] != NULL;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_loop0 = 1;
          struct TYPE_3__ * loop = (struct TYPE_3__ *) malloc(_len_loop0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_loop0; _i0++) {
              loop[_i0].nwatchers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_loop__i0__watchers0 = 1;
          loop[_i0].watchers = (int **) malloc(_len_loop__i0__watchers0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_loop__i0__watchers0; _j0++) {
            int _len_loop__i0__watchers1 = 1;
            loop[_i0].watchers[_j0] = (int *) malloc(_len_loop__i0__watchers1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_loop__i0__watchers1; _j1++) {
              loop[_i0].watchers[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          }
        
          int benchRet = uv__fd_exists(loop,fd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_loop0; _aux++) {
          free(*(loop[_aux].watchers));
        free(loop[_aux].watchers);
          }
          free(loop);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
