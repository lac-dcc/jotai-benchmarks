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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* avctx; } ;
struct TYPE_4__ {int flags; } ;
typedef  TYPE_2__ MotionEstContext ;

/* Variables and functions */
 int AV_CODEC_FLAG_QPEL ; 
 int FLAG_CHROMA ; 
 int FLAG_DIRECT ; 
 int FLAG_QPEL ; 

__attribute__((used)) static int get_flags(MotionEstContext *c, int direct, int chroma){
    return   ((c->avctx->flags&AV_CODEC_FLAG_QPEL) ? FLAG_QPEL : 0)
           + (direct ? FLAG_DIRECT : 0)
           + (chroma ? FLAG_CHROMA : 0);
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
          int direct = 100;
          int chroma = 100;
          int _len_c0 = 1;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__avctx0 = 1;
          c[_i0].avctx = (struct TYPE_4__ *) malloc(_len_c__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_c__i0__avctx0; _j0++) {
            c[_i0].avctx->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_flags(c,direct,chroma);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].avctx);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
