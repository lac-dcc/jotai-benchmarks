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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ jumps; int /*<<< orphan*/  addr; int /*<<< orphan*/  target; int /*<<< orphan*/  max_addr; int /*<<< orphan*/  min_addr; } ;
struct annotation {TYPE_2__ widths; TYPE_1__* options; } ;
struct TYPE_3__ {scalar_t__ show_nr_jumps; scalar_t__ use_offset; } ;

/* Variables and functions */

void annotation__update_column_widths(struct annotation *notes)
{
	if (notes->options->use_offset)
		notes->widths.target = notes->widths.min_addr;
	else
		notes->widths.target = notes->widths.max_addr;

	notes->widths.addr = notes->widths.target;

	if (notes->options->show_nr_jumps)
		notes->widths.addr += notes->widths.jumps + 1;
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
          int _len_notes0 = 1;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
            notes[_i0].widths.jumps = ((-2 * (next_i()%2)) + 1) * next_i();
        notes[_i0].widths.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        notes[_i0].widths.target = ((-2 * (next_i()%2)) + 1) * next_i();
        notes[_i0].widths.max_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        notes[_i0].widths.min_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_notes__i0__options0 = 1;
          notes[_i0].options = (struct TYPE_3__ *) malloc(_len_notes__i0__options0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_notes__i0__options0; _j0++) {
            notes[_i0].options->show_nr_jumps = ((-2 * (next_i()%2)) + 1) * next_i();
        notes[_i0].options->use_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          annotation__update_column_widths(notes);
          for(int _aux = 0; _aux < _len_notes0; _aux++) {
          free(notes[_aux].options);
          }
          free(notes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
