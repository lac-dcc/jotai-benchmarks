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
struct TYPE_7__ {int /*<<< orphan*/ * base; TYPE_2__* glyph; } ;
struct TYPE_5__ {int /*<<< orphan*/  outline; } ;
struct TYPE_6__ {TYPE_1__ root; } ;
typedef  TYPE_2__* CFF_GlyphSlot ;
typedef  TYPE_3__ CFF_Builder ;

/* Variables and functions */

__attribute__((used)) static void
  cff_builder_done( CFF_Builder*  builder )
  {
    CFF_GlyphSlot  glyph = builder->glyph;


    if ( glyph )
      glyph->root.outline = *builder->base;
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
          int _len_builder0 = 1;
          struct TYPE_7__ * builder = (struct TYPE_7__ *) malloc(_len_builder0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_builder0; _i0++) {
              int _len_builder__i0__base0 = 1;
          builder[_i0].base = (int *) malloc(_len_builder__i0__base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_builder__i0__base0; _j0++) {
            builder[_i0].base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_builder__i0__glyph0 = 1;
          builder[_i0].glyph = (struct TYPE_6__ *) malloc(_len_builder__i0__glyph0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_builder__i0__glyph0; _j0++) {
            builder[_i0].glyph->root.outline = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cff_builder_done(builder);
          for(int _aux = 0; _aux < _len_builder0; _aux++) {
          free(builder[_aux].base);
          }
          for(int _aux = 0; _aux < _len_builder0; _aux++) {
          free(builder[_aux].glyph);
          }
          free(builder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
