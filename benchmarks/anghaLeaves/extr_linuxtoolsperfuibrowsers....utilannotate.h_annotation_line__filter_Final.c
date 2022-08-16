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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct annotation_line {int offset; } ;
struct annotation {TYPE_1__* options; } ;
struct TYPE_2__ {scalar_t__ hide_src_code; } ;

/* Variables and functions */

__attribute__((used)) static inline bool annotation_line__filter(struct annotation_line *al, struct annotation *notes)
{
	return notes->options->hide_src_code && al->offset == -1;
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
          int _len_al0 = 1;
          struct annotation_line * al = (struct annotation_line *) malloc(_len_al0*sizeof(struct annotation_line));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_notes0 = 1;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
              int _len_notes__i0__options0 = 1;
          notes[_i0].options = (struct TYPE_2__ *) malloc(_len_notes__i0__options0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_notes__i0__options0; _j0++) {
            notes[_i0].options->hide_src_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = annotation_line__filter(al,notes);
          printf("%d\n", benchRet); 
          free(al);
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
