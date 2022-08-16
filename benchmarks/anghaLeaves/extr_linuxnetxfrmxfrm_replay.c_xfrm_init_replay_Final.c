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
struct TYPE_2__ {int flags; } ;
struct xfrm_state {int /*<<< orphan*/ * repl; TYPE_1__ props; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {int replay_window; int bmp_len; } ;
typedef  int /*<<< orphan*/  __u32 ;

/* Variables and functions */
 int EINVAL ; 
 int XFRM_STATE_ESN ; 
 int /*<<< orphan*/  xfrm_replay_bmp ; 
 int /*<<< orphan*/  xfrm_replay_esn ; 
 int /*<<< orphan*/  xfrm_replay_legacy ; 

int xfrm_init_replay(struct xfrm_state *x)
{
	struct xfrm_replay_state_esn *replay_esn = x->replay_esn;

	if (replay_esn) {
		if (replay_esn->replay_window >
		    replay_esn->bmp_len * sizeof(__u32) * 8)
			return -EINVAL;

		if (x->props.flags & XFRM_STATE_ESN) {
			if (replay_esn->replay_window == 0)
				return -EINVAL;
			x->repl = &xfrm_replay_esn;
		} else {
			x->repl = &xfrm_replay_bmp;
		}
	} else {
		x->repl = &xfrm_replay_legacy;
	}

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
          int _len_x0 = 1;
          struct xfrm_state * x = (struct xfrm_state *) malloc(_len_x0*sizeof(struct xfrm_state));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              int _len_x__i0__repl0 = 1;
          x[_i0].repl = (int *) malloc(_len_x__i0__repl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_x__i0__repl0; _j0++) {
            x[_i0].repl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        x[_i0].props.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_x__i0__replay_esn0 = 1;
          x[_i0].replay_esn = (struct xfrm_replay_state_esn *) malloc(_len_x__i0__replay_esn0*sizeof(struct xfrm_replay_state_esn));
          for(int _j0 = 0; _j0 < _len_x__i0__replay_esn0; _j0++) {
            x[_i0].replay_esn->replay_window = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].replay_esn->bmp_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xfrm_init_replay(x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].repl);
          }
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].replay_esn);
          }
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
