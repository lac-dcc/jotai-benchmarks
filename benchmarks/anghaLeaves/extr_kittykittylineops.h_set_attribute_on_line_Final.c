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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
typedef  size_t index_type ;
typedef  int attrs_type ;
struct TYPE_3__ {int attrs; } ;
typedef  TYPE_1__ GPUCell ;

/* Variables and functions */
 int DECORATION_SHIFT ; 

__attribute__((used)) static inline void
set_attribute_on_line(GPUCell *cells, uint32_t shift, uint32_t val, index_type xnum) {
    // Set a single attribute on all cells in the line
    attrs_type mask = shift == DECORATION_SHIFT ? 3 : 1;
    attrs_type aval = (val & mask) << shift;
    mask = ~(mask << shift);
    for (index_type i = 0; i < xnum; i++) cells[i].attrs = (cells[i].attrs & mask) | aval;
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

    // big-arr-10x
    case 0:
    {
          int shift = 10;
          int val = 10;
          unsigned long xnum = 10;
          int _len_cells0 = 100;
          struct TYPE_3__ * cells = (struct TYPE_3__ *) malloc(_len_cells0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cells0; _i0++) {
            cells[_i0].attrs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_attribute_on_line(cells,shift,val,xnum);
          free(cells);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
