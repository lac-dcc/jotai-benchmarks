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
struct TYPE_6__ {int buffer; int pitch; int width; int rows; } ;
struct TYPE_5__ {int line; int pitch; int width; int rows; int total; } ;
typedef  TYPE_1__* PFR_BitWriter ;
typedef  int FT_Int ;
typedef  int /*<<< orphan*/  FT_Bool ;
typedef  TYPE_2__ FT_Bitmap ;

/* Variables and functions */

__attribute__((used)) static void
  pfr_bitwriter_init( PFR_BitWriter  writer,
                      FT_Bitmap*     target,
                      FT_Bool        decreasing )
  {
    writer->line   = target->buffer;
    writer->pitch  = target->pitch;
    writer->width  = target->width;
    writer->rows   = target->rows;
    writer->total  = writer->width * writer->rows;

    if ( !decreasing )
    {
      writer->line += writer->pitch * (FT_Int)( target->rows - 1 );
      writer->pitch = -writer->pitch;
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
          int decreasing = 100;
          int _len_writer0 = 1;
          struct TYPE_5__ * writer = (struct TYPE_5__ *) malloc(_len_writer0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_writer0; _i0++) {
            writer[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
        writer[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        writer[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        writer[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        writer[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target0 = 1;
          struct TYPE_6__ * target = (struct TYPE_6__ *) malloc(_len_target0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pfr_bitwriter_init(writer,target,decreasing);
          free(writer);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
