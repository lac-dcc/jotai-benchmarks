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
struct dma_engine {TYPE_1__* dmab; } ;
struct TYPE_2__ {unsigned int bytes; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int dma_get_buffer_size(struct dma_engine *dma)
{
	return dma->dmab->bytes;
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
          int _len_dma0 = 1;
          struct dma_engine * dma = (struct dma_engine *) malloc(_len_dma0*sizeof(struct dma_engine));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
              int _len_dma__i0__dmab0 = 1;
          dma[_i0].dmab = (struct TYPE_2__ *) malloc(_len_dma__i0__dmab0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dma__i0__dmab0; _j0++) {
            dma[_i0].dmab->bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = dma_get_buffer_size(dma);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dma0; _aux++) {
          free(dma[_aux].dmab);
          }
          free(dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
