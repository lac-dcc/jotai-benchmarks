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
struct TYPE_3__ {scalar_t__ hostageByte; scalar_t__ legacyVersion; scalar_t__ outEnd; scalar_t__ outStart; scalar_t__ inPos; scalar_t__ lhSize; int /*<<< orphan*/  stage; } ;
typedef  TYPE_1__ ZSTD_DStream ;

/* Variables and functions */
 size_t ZSTD_frameHeaderSize_prefix ; 
 int /*<<< orphan*/  zdss_loadHeader ; 

size_t ZSTD_resetDStream(ZSTD_DStream *zds)
{
	zds->stage = zdss_loadHeader;
	zds->lhSize = zds->inPos = zds->outStart = zds->outEnd = 0;
	zds->legacyVersion = 0;
	zds->hostageByte = 0;
	return ZSTD_frameHeaderSize_prefix;
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
          int _len_zds0 = 1;
          struct TYPE_3__ * zds = (struct TYPE_3__ *) malloc(_len_zds0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zds0; _i0++) {
            zds[_i0].hostageByte = ((-2 * (next_i()%2)) + 1) * next_i();
        zds[_i0].legacyVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        zds[_i0].outEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        zds[_i0].outStart = ((-2 * (next_i()%2)) + 1) * next_i();
        zds[_i0].inPos = ((-2 * (next_i()%2)) + 1) * next_i();
        zds[_i0].lhSize = ((-2 * (next_i()%2)) + 1) * next_i();
        zds[_i0].stage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ZSTD_resetDStream(zds);
          printf("%lu\n", benchRet); 
          free(zds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
