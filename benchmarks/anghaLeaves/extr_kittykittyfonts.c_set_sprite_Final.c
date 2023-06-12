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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  void* sprite_index ;
struct TYPE_3__ {void* sprite_z; void* sprite_y; void* sprite_x; } ;
typedef  TYPE_1__ GPUCell ;

/* Variables and functions */

__attribute__((used)) static inline void
set_sprite(GPUCell *cell, sprite_index x, sprite_index y, sprite_index z) {
    cell->sprite_x = x; cell->sprite_y = y; cell->sprite_z = z;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_cell0 = 65025;
          struct TYPE_3__ * cell = (struct TYPE_3__ *) malloc(_len_cell0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
            
          }
        
          void * x;
        
          void * y;
        
          void * z;
        
          set_sprite(cell,x,y,z);
          free(cell);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cell0 = 100;
          struct TYPE_3__ * cell = (struct TYPE_3__ *) malloc(_len_cell0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
            
          }
        
          void * x;
        
          void * y;
        
          void * z;
        
          set_sprite(cell,x,y,z);
          free(cell);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_cell0 = 1;
          struct TYPE_3__ * cell = (struct TYPE_3__ *) malloc(_len_cell0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
            
          }
        
          void * x;
        
          void * y;
        
          void * z;
        
          set_sprite(cell,x,y,z);
          free(cell);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
