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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ int64_t ;
struct TYPE_5__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_4__ {int /*<<< orphan*/  pos; } ;
typedef  TYPE_2__ AVStream ;

/* Variables and functions */

__attribute__((used)) static void reset_index_position(int64_t metadata_head_size, AVStream *st)
{
    /* the real seek index offset should be the size of metadata blocks with the offset in the frame blocks */
    int i;
    for(i=0; i<st->nb_index_entries; i++) {
        st->index_entries[i].pos += metadata_head_size;
    }
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
          long metadata_head_size = 100;
          int _len_st0 = 1;
          struct TYPE_5__ * st = (struct TYPE_5__ *) malloc(_len_st0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].nb_index_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__index_entries0 = 1;
          st[_i0].index_entries = (struct TYPE_4__ *) malloc(_len_st__i0__index_entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_st__i0__index_entries0; _j0++) {
            st[_i0].index_entries->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_index_position(metadata_head_size,st);
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].index_entries);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
