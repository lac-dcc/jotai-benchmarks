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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ signum; int flags; scalar_t__ loop; } ;
typedef  TYPE_1__ uv_signal_t ;

/* Variables and functions */
 int UV_SIGNAL_ONE_SHOT ; 

__attribute__((used)) static int uv__signal_compare(uv_signal_t* w1, uv_signal_t* w2) {
  int f1;
  int f2;
  /* Compare signums first so all watchers with the same signnum end up
   * adjacent.
   */
  if (w1->signum < w2->signum) return -1;
  if (w1->signum > w2->signum) return 1;

  /* Handlers without UV_SIGNAL_ONE_SHOT set will come first, so if the first
   * handler returned is a one-shot handler, the rest will be too.
   */
  f1 = w1->flags & UV_SIGNAL_ONE_SHOT;
  f2 = w2->flags & UV_SIGNAL_ONE_SHOT;
  if (f1 < f2) return -1;
  if (f1 > f2) return 1;

  /* Sort by loop pointer, so we can easily look up the first item after
   * { .signum = x, .loop = NULL }.
   */
  if (w1->loop < w2->loop) return -1;
  if (w1->loop > w2->loop) return 1;

  if (w1 < w2) return -1;
  if (w1 > w2) return 1;

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

    // big-arr
    case 0:
    {
          int _len_w10 = 1;
          struct TYPE_4__ * w1 = (struct TYPE_4__ *) malloc(_len_w10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_w10; _i0++) {
            w1->signum = ((-2 * (next_i()%2)) + 1) * next_i();
        w1->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        w1->loop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_w20 = 1;
          struct TYPE_4__ * w2 = (struct TYPE_4__ *) malloc(_len_w20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_w20; _i0++) {
            w2->signum = ((-2 * (next_i()%2)) + 1) * next_i();
        w2->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        w2->loop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv__signal_compare(w1,w2);
          printf("%d\n", benchRet); 
          free(w1);
          free(w2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
