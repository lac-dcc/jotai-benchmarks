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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_3__ {long x; long y; } ;
typedef  TYPE_1__ FT_Vector ;
typedef  int FT_Int ;
typedef  long FT_Fixed ;

/* Variables and functions */

__attribute__((used)) static FT_Int
  ft_trig_prenorm( FT_Vector*  vec )
  {
    FT_Fixed  x, y, z;
    FT_Int    shift;


    x = vec->x;
    y = vec->y;

    z     = ( ( x >= 0 ) ? x : - x ) | ( (y >= 0) ? y : -y );
    shift = 0;

#if 1
    /* determine msb bit index in `shift' */
    if ( z >= ( 1L << 16 ) )
    {
      z     >>= 16;
      shift  += 16;
    }
    if ( z >= ( 1L << 8 ) )
    {
      z     >>= 8;
      shift  += 8;
    }
    if ( z >= ( 1L << 4 ) )
    {
      z     >>= 4;
      shift  += 4;
    }
    if ( z >= ( 1L << 2 ) )
    {
      z     >>= 2;
      shift  += 2;
    }
    if ( z >= ( 1L << 1 ) )
    {
      z    >>= 1;
      shift += 1;
    }

    if ( shift <= 27 )
    {
      shift  = 27 - shift;
      vec->x = x << shift;
      vec->y = y << shift;
    }
    else
    {
      shift -= 27;
      vec->x = x >> shift;
      vec->y = y >> shift;
      shift  = -shift;
    }

#else /* 0 */

    if ( z < ( 1L << 27 ) )
    {
      do
      {
        shift++;
        z <<= 1;
      } while ( z < ( 1L << 27 ) );
      vec->x = x << shift;
      vec->y = y << shift;
    }
    else if ( z > ( 1L << 28 ) )
    {
      do
      {
        shift++;
        z >>= 1;
      } while ( z > ( 1L << 28 ) );

      vec->x = x >> shift;
      vec->y = y >> shift;
      shift  = -shift;
    }

#endif /* 0 */

    return shift;
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

    // big-arr
    case 0:
    {
          int _len_vec0 = 1;
          struct TYPE_3__ * vec = (struct TYPE_3__ *) malloc(_len_vec0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec->x = ((-2 * (next_i()%2)) + 1) * next_i();
        vec->y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ft_trig_prenorm(vec);
          printf("%d\n", benchRet); 
          free(vec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
