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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ scroll; scalar_t__ cursor; scalar_t__* buffer; } ;
typedef  TYPE_1__ mfield_t ;

/* Variables and functions */

void MField_Clear( mfield_t *edit ) {
	edit->buffer[0] = 0;
	edit->cursor = 0;
	edit->scroll = 0;
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
          int _len_edit0 = 1;
          struct TYPE_3__ * edit = (struct TYPE_3__ *) malloc(_len_edit0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_edit0; _i0++) {
            edit[_i0].scroll = ((-2 * (next_i()%2)) + 1) * next_i();
        edit[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_edit__i0__buffer0 = 1;
          edit[_i0].buffer = (long *) malloc(_len_edit__i0__buffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_edit__i0__buffer0; _j0++) {
            edit[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          MField_Clear(edit);
          for(int _aux = 0; _aux < _len_edit0; _aux++) {
          free(edit[_aux].buffer);
          }
          free(edit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
