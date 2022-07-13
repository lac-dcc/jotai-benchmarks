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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  void* ut64 ;
typedef  int /*<<< orphan*/  bb_type_t ;
struct TYPE_3__ {int score; int reached; int called; int /*<<< orphan*/  type; void* fail; void* jump; void* end; void* start; } ;
typedef  TYPE_1__ bb_t ;

/* Variables and functions */

__attribute__((used)) static void initBB (bb_t *bb, ut64 start, ut64 end, ut64 jump, ut64 fail, bb_type_t type, int score, int reached, int called) {
	if (bb) {
		bb->start = start;
		bb->end = end;
		bb->jump = jump;
		bb->fail = fail;
		bb->type = type;
		bb->score = score;
		bb->reached = reached;
		bb->called = called;
	}
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
          int type = 100;
          int score = 100;
          int reached = 100;
          int called = 100;
          int _len_bb0 = 1;
          struct TYPE_3__ * bb = (struct TYPE_3__ *) malloc(_len_bb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0].score = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].reached = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].called = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start;
          void * end;
          void * jump;
          void * fail;
          initBB(bb,start,end,jump,fail,type,score,reached,called);
          free(bb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int score = 255;
          int reached = 255;
          int called = 255;
          int _len_bb0 = 65025;
          struct TYPE_3__ * bb = (struct TYPE_3__ *) malloc(_len_bb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0].score = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].reached = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].called = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start;
          void * end;
          void * jump;
          void * fail;
          initBB(bb,start,end,jump,fail,type,score,reached,called);
          free(bb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int score = 10;
          int reached = 10;
          int called = 10;
          int _len_bb0 = 100;
          struct TYPE_3__ * bb = (struct TYPE_3__ *) malloc(_len_bb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0].score = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].reached = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].called = ((-2 * (next_i()%2)) + 1) * next_i();
        bb[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start;
          void * end;
          void * jump;
          void * fail;
          initBB(bb,start,end,jump,fail,type,score,reached,called);
          free(bb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
