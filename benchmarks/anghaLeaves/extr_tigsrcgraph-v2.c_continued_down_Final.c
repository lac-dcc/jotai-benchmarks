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
       0            big-arr-10x\n\
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
struct graph_row {TYPE_2__* columns; } ;
struct TYPE_3__ {scalar_t__ shift_left; } ;
struct TYPE_4__ {scalar_t__ id; TYPE_1__ symbol; } ;

/* Variables and functions */

__attribute__((used)) static bool
continued_down(struct graph_row *row, struct graph_row *next_row, int pos)
{
	if (row->columns[pos].id != next_row->columns[pos].id)
		return false;

	if (row->columns[pos].symbol.shift_left)
		return false;

	return true;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr-10x
    case 0:
    {
          int pos = 10;
        
          int _len_row0 = 100;
          struct graph_row * row = (struct graph_row *) malloc(_len_row0*sizeof(struct graph_row));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
              int _len_row__i0__columns0 = 1;
          row[_i0].columns = (struct TYPE_4__ *) malloc(_len_row__i0__columns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_row__i0__columns0; _j0++) {
              row[_i0].columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          row[_i0].columns->symbol.shift_left = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int _len_next_row0 = 100;
          struct graph_row * next_row = (struct graph_row *) malloc(_len_next_row0*sizeof(struct graph_row));
          for(int _i0 = 0; _i0 < _len_next_row0; _i0++) {
              int _len_next_row__i0__columns0 = 1;
          next_row[_i0].columns = (struct TYPE_4__ *) malloc(_len_next_row__i0__columns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_next_row__i0__columns0; _j0++) {
              next_row[_i0].columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          next_row[_i0].columns->symbol.shift_left = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = continued_down(row,next_row,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_row0; _aux++) {
          free(row[_aux].columns);
          }
          free(row);
          for(int _aux = 0; _aux < _len_next_row0; _aux++) {
          free(next_row[_aux].columns);
          }
          free(next_row);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
