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
struct TYPE_3__ {scalar_t__ first; scalar_t__ count; } ;
typedef  scalar_t__ FT_UInt32 ;
typedef  scalar_t__ FT_UInt ;
typedef  TYPE_1__* FNT_CMap ;

/* Variables and functions */

__attribute__((used)) static FT_UInt32
  fnt_cmap_char_next( FNT_CMap    cmap,
                      FT_UInt32  *pchar_code )
  {
    FT_UInt    gindex = 0;
    FT_UInt32  result = 0;
    FT_UInt32  char_code = *pchar_code + 1;


    if ( char_code <= cmap->first )
    {
      result = cmap->first;
      gindex = 1;
    }
    else
    {
      char_code -= cmap->first;
      if ( char_code < cmap->count )
      {
        result = cmap->first + char_code;
        gindex = (FT_UInt)( char_code + 1 );
      }
    }

    *pchar_code = result;
    return gindex;
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
          int _len_cmap0 = 1;
          struct TYPE_3__ * cmap = (struct TYPE_3__ *) malloc(_len_cmap0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cmap0; _i0++) {
            cmap[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
        cmap[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pchar_code0 = 1;
          long * pchar_code = (long *) malloc(_len_pchar_code0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pchar_code0; _i0++) {
            pchar_code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = fnt_cmap_char_next(cmap,pchar_code);
          printf("%ld\n", benchRet); 
          free(cmap);
          free(pchar_code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
