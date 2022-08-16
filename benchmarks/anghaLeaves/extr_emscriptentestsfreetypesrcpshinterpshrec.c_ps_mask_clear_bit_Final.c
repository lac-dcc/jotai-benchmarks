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
struct TYPE_3__ {scalar_t__ num_bits; int* bytes; } ;
typedef  TYPE_1__* PS_Mask ;
typedef  scalar_t__ FT_UInt ;
typedef  int FT_Int ;
typedef  int FT_Byte ;

/* Variables and functions */

__attribute__((used)) static void
  ps_mask_clear_bit( PS_Mask  mask,
                     FT_Int   idx )
  {
    FT_Byte*  p;


    if ( (FT_UInt)idx >= mask->num_bits )
      return;

    p    = mask->bytes + ( idx >> 3 );
    p[0] = (FT_Byte)( p[0] & ~( 0x80 >> ( idx & 7 ) ) );
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
          int idx = 100;
          int _len_mask0 = 1;
          struct TYPE_3__ * mask = (struct TYPE_3__ *) malloc(_len_mask0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0].num_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mask__i0__bytes0 = 1;
          mask[_i0].bytes = (int *) malloc(_len_mask__i0__bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mask__i0__bytes0; _j0++) {
            mask[_i0].bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ps_mask_clear_bit(mask,idx);
          for(int _aux = 0; _aux < _len_mask0; _aux++) {
          free(mask[_aux].bytes);
          }
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
