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
struct TYPE_3__ {scalar_t__ outDataWritten; void* decodeToStreamSignature; void* parseMode; scalar_t__ decodeOnlyOneBlock; scalar_t__ padSize; scalar_t__ numTotalBlocks; scalar_t__ numFinishedStreams; scalar_t__ numStartedStreams; scalar_t__ pos; int /*<<< orphan*/  state; } ;
typedef  TYPE_1__ CXzUnpacker ;

/* Variables and functions */
 void* False ; 
 int /*<<< orphan*/  XZ_STATE_STREAM_HEADER ; 

void XzUnpacker_Init(CXzUnpacker *p)
{
  p->state = XZ_STATE_STREAM_HEADER;
  p->pos = 0;
  p->numStartedStreams = 0;
  p->numFinishedStreams = 0;
  p->numTotalBlocks = 0;
  p->padSize = 0;
  p->decodeOnlyOneBlock = 0;

  p->parseMode = False;
  p->decodeToStreamSignature = False;

  // p->outBuf = NULL;
  // p->outBufSize = 0;
  p->outDataWritten = 0;
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].outDataWritten = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].decodeOnlyOneBlock = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].padSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numTotalBlocks = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numFinishedStreams = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numStartedStreams = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XzUnpacker_Init(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
