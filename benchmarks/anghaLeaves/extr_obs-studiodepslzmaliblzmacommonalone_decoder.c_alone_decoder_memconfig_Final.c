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
typedef  scalar_t__ uint64_t ;
typedef  int /*<<< orphan*/  lzma_ret ;
struct TYPE_3__ {scalar_t__ memusage; scalar_t__ memlimit; } ;
typedef  TYPE_1__ lzma_coder ;

/* Variables and functions */
 int /*<<< orphan*/  LZMA_MEMLIMIT_ERROR ; 
 int /*<<< orphan*/  LZMA_OK ; 

__attribute__((used)) static lzma_ret
alone_decoder_memconfig(lzma_coder *coder, uint64_t *memusage,
		uint64_t *old_memlimit, uint64_t new_memlimit)
{
	*memusage = coder->memusage;
	*old_memlimit = coder->memlimit;

	if (new_memlimit != 0) {
		if (new_memlimit < coder->memusage)
			return LZMA_MEMLIMIT_ERROR;

		coder->memlimit = new_memlimit;
	}

	return LZMA_OK;
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
          long new_memlimit = 100;
          int _len_coder0 = 1;
          struct TYPE_3__ * coder = (struct TYPE_3__ *) malloc(_len_coder0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_coder0; _i0++) {
            coder[_i0].memusage = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].memlimit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_memusage0 = 1;
          long * memusage = (long *) malloc(_len_memusage0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_memusage0; _i0++) {
            memusage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old_memlimit0 = 1;
          long * old_memlimit = (long *) malloc(_len_old_memlimit0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_old_memlimit0; _i0++) {
            old_memlimit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = alone_decoder_memconfig(coder,memusage,old_memlimit,new_memlimit);
          printf("%d\n", benchRet); 
          free(coder);
          free(memusage);
          free(old_memlimit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
