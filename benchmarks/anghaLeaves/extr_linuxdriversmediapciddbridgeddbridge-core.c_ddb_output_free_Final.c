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
typedef  int u32 ;
struct ddb_output {TYPE_1__* dma; } ;
typedef  int s32 ;
struct TYPE_2__ {int stat; int cbuf; int num; int size; int coff; } ;

/* Variables and functions */

__attribute__((used)) static u32 ddb_output_free(struct ddb_output *output)
{
	u32 idx, off, stat = output->dma->stat;
	s32 diff;

	idx = (stat >> 11) & 0x1f;
	off = (stat & 0x7ff) << 7;

	if (output->dma->cbuf != idx) {
		if ((((output->dma->cbuf + 1) % output->dma->num) == idx) &&
		    (output->dma->size - output->dma->coff <= (2 * 188)))
			return 0;
		return 188;
	}
	diff = off - output->dma->coff;
	if (diff <= 0 || diff > (2 * 188))
		return 188;
	return 0;
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
          int _len_output0 = 1;
          struct ddb_output * output = (struct ddb_output *) malloc(_len_output0*sizeof(struct ddb_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__dma0 = 1;
          output[_i0].dma = (struct TYPE_2__ *) malloc(_len_output__i0__dma0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_output__i0__dma0; _j0++) {
            output[_i0].dma->stat = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].dma->cbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].dma->num = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].dma->size = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].dma->coff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ddb_output_free(output);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(output[_aux].dma);
          }
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
