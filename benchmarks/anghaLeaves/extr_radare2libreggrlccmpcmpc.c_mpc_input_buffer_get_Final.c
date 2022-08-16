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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {size_t pos; } ;
struct TYPE_7__ {char* buffer; TYPE_2__* marks; TYPE_1__ state; } ;
typedef  TYPE_3__ mpc_input_t ;
struct TYPE_6__ {size_t pos; } ;

/* Variables and functions */

__attribute__((used)) static char mpc_input_buffer_get(mpc_input_t *i) {
  return i->buffer[i->state.pos - i->marks[0].pos];
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
          int _len_i0 = 1;
          struct TYPE_7__ * i = (struct TYPE_7__ *) malloc(_len_i0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
              int _len_i__i0__buffer0 = 1;
          i[_i0].buffer = (char *) malloc(_len_i__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_i__i0__buffer0; _j0++) {
            i[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i__i0__marks0 = 1;
          i[_i0].marks = (struct TYPE_6__ *) malloc(_len_i__i0__marks0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_i__i0__marks0; _j0++) {
            i[_i0].marks->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        i[_i0].state.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = mpc_input_buffer_get(i);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_i0; _aux++) {
          free(i[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_i0; _aux++) {
          free(i[_aux].marks);
          }
          free(i);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
