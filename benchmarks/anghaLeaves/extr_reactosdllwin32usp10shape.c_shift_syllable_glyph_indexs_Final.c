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
struct TYPE_3__ {scalar_t__ start; scalar_t__ base; scalar_t__ end; scalar_t__ ralf; scalar_t__ blwf; scalar_t__ pref; } ;
typedef  TYPE_1__ IndicSyllable ;
typedef  scalar_t__ INT ;

/* Variables and functions */

__attribute__((used)) static inline void shift_syllable_glyph_indexs(IndicSyllable *glyph_index, INT index, INT shift)
{
    if (shift == 0)
        return;

    if (glyph_index->start > index)
        glyph_index->start += shift;
    if (glyph_index->base > index)
        glyph_index->base+= shift;
    if (glyph_index->end > index)
        glyph_index->end+= shift;
    if (glyph_index->ralf > index)
        glyph_index->ralf+= shift;
    if (glyph_index->blwf > index)
        glyph_index->blwf+= shift;
    if (glyph_index->pref > index)
        glyph_index->pref+= shift;
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
          long index = 100;
          long shift = 100;
          int _len_glyph_index0 = 1;
          struct TYPE_3__ * glyph_index = (struct TYPE_3__ *) malloc(_len_glyph_index0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_glyph_index0; _i0++) {
            glyph_index[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph_index[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph_index[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph_index[_i0].ralf = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph_index[_i0].blwf = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph_index[_i0].pref = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shift_syllable_glyph_indexs(glyph_index,index,shift);
          free(glyph_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
