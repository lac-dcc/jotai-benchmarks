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

/* Type definitions */
struct pvr2_stream {int dummy; } ;
struct pvr2_ioread {struct pvr2_stream* stream; } ;

/* Variables and functions */

struct pvr2_stream *pvr2_ioread_get_stream(struct pvr2_ioread *cp)
{
	return cp->stream;
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
          int _len_cp0 = 1;
          struct pvr2_ioread * cp = (struct pvr2_ioread *) malloc(_len_cp0*sizeof(struct pvr2_ioread));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              int _len_cp__i0__stream0 = 1;
          cp[_i0].stream = (struct pvr2_stream *) malloc(_len_cp__i0__stream0*sizeof(struct pvr2_stream));
          for(int _j0 = 0; _j0 < _len_cp__i0__stream0; _j0++) {
            cp[_i0].stream->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pvr2_stream * benchRet = pvr2_ioread_get_stream(cp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].stream);
          }
          free(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
