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
struct TYPE_3__ {scalar_t__ width; scalar_t__ total; scalar_t__* line; int /*<<< orphan*/  pitch; } ;
typedef  TYPE_1__* PFR_BitWriter ;
typedef  scalar_t__ FT_UInt ;
typedef  scalar_t__ FT_Int ;
typedef  scalar_t__ FT_Byte ;

/* Variables and functions */

__attribute__((used)) static void
  pfr_bitwriter_decode_rle2( PFR_BitWriter  writer,
                             FT_Byte*       p,
                             FT_Byte*       limit )
  {
    FT_Int    phase, count;
    FT_UInt   n, reload;
    FT_UInt   left = writer->width;
    FT_Byte*  cur  = writer->line;
    FT_UInt   mask = 0x80;
    FT_UInt   c    = 0;


    n = writer->total;

    phase  = 1;
    count  = 0;
    reload = 1;

    for ( ; n > 0; n-- )
    {
      if ( reload )
      {
        do
        {
          if ( p >= limit )
            break;

          count = *p++;
          phase = phase ^ 1;

        } while ( count == 0 );
      }

      if ( phase )
        c |= mask;

      mask >>= 1;

      if ( --left <= 0 )
      {
        cur[0] = (FT_Byte)c;
        c      = 0;
        mask   = 0x80;
        left   = writer->width;

        writer->line += writer->pitch;
        cur           = writer->line;
      }
      else if ( mask == 0 )
      {
        cur[0] = (FT_Byte)c;
        c      = 0;
        mask   = 0x80;
        cur++;
      }

      reload = ( --count <= 0 );
    }

    if ( mask != 0x80 )
      cur[0] = (FT_Byte) c;
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
          int _len_writer0 = 1;
          struct TYPE_3__ * writer = (struct TYPE_3__ *) malloc(_len_writer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_writer0; _i0++) {
            writer[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        writer[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_writer__i0__line0 = 1;
          writer[_i0].line = (long *) malloc(_len_writer__i0__line0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_writer__i0__line0; _j0++) {
            writer[_i0].line[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        writer[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_limit0 = 1;
          long * limit = (long *) malloc(_len_limit0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pfr_bitwriter_decode_rle2(writer,p,limit);
          for(int _aux = 0; _aux < _len_writer0; _aux++) {
          free(writer[_aux].line);
          }
          free(writer);
          free(p);
          free(limit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
