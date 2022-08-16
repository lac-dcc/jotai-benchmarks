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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int sprite_z; int /*<<< orphan*/  sprite_y; int /*<<< orphan*/  sprite_x; } ;
struct TYPE_5__ {int z; scalar_t__ colored; int /*<<< orphan*/  y; int /*<<< orphan*/  x; } ;
typedef  TYPE_1__ SpritePosition ;
typedef  TYPE_2__ GPUCell ;

/* Variables and functions */

__attribute__((used)) static inline void
set_cell_sprite(GPUCell *cell, SpritePosition *sp) {
    cell->sprite_x = sp->x; cell->sprite_y = sp->y; cell->sprite_z = sp->z;
    if (sp->colored) cell->sprite_z |= 0x4000;
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
          int _len_cell0 = 1;
          struct TYPE_6__ * cell = (struct TYPE_6__ *) malloc(_len_cell0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
            cell[_i0].sprite_z = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].sprite_y = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].sprite_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp0 = 1;
          struct TYPE_5__ * sp = (struct TYPE_5__ *) malloc(_len_sp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].z = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].colored = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_cell_sprite(cell,sp);
          free(cell);
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
