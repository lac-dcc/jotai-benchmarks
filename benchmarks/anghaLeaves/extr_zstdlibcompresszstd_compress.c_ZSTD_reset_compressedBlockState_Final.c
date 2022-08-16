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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {void* litlength_repeatMode; void* matchlength_repeatMode; void* offcode_repeatMode; } ;
struct TYPE_6__ {int /*<<< orphan*/  repeatMode; } ;
struct TYPE_7__ {TYPE_3__ fse; TYPE_1__ huf; } ;
struct TYPE_9__ {TYPE_2__ entropy; int /*<<< orphan*/ * rep; } ;
typedef  TYPE_4__ ZSTD_compressedBlockState_t ;

/* Variables and functions */
 void* FSE_repeat_none ; 
 int /*<<< orphan*/  HUF_repeat_none ; 
 int ZSTD_REP_NUM ; 
 int /*<<< orphan*/ * repStartValue ; 

__attribute__((used)) static void ZSTD_reset_compressedBlockState(ZSTD_compressedBlockState_t* bs)
{
    int i;
    for (i = 0; i < ZSTD_REP_NUM; ++i)
        bs->rep[i] = repStartValue[i];
    bs->entropy.huf.repeatMode = HUF_repeat_none;
    bs->entropy.fse.offcode_repeatMode = FSE_repeat_none;
    bs->entropy.fse.matchlength_repeatMode = FSE_repeat_none;
    bs->entropy.fse.litlength_repeatMode = FSE_repeat_none;
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
          int _len_bs0 = 1;
          struct TYPE_9__ * bs = (struct TYPE_9__ *) malloc(_len_bs0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_bs0; _i0++) {
            bs[_i0].entropy.huf.repeatMode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bs__i0__rep0 = 1;
          bs[_i0].rep = (int *) malloc(_len_bs__i0__rep0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bs__i0__rep0; _j0++) {
            bs[_i0].rep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ZSTD_reset_compressedBlockState(bs);
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].rep);
          }
          free(bs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
