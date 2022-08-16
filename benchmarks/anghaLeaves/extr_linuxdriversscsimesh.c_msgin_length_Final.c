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

/* Type definitions */
struct mesh_state {int n_msgin; int* msgin; } ;

/* Variables and functions */

__attribute__((used)) static inline int msgin_length(struct mesh_state *ms)
{
	int b, n;

	n = 1;
	if (ms->n_msgin > 0) {
		b = ms->msgin[0];
		if (b == 1) {
			/* extended message */
			n = ms->n_msgin < 2? 2: ms->msgin[1] + 2;
		} else if (0x20 <= b && b <= 0x2f) {
			/* 2-byte message */
			n = 2;
		}
	}
	return n;
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
          int _len_ms0 = 1;
          struct mesh_state * ms = (struct mesh_state *) malloc(_len_ms0*sizeof(struct mesh_state));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
            ms[_i0].n_msgin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ms__i0__msgin0 = 1;
          ms[_i0].msgin = (int *) malloc(_len_ms__i0__msgin0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ms__i0__msgin0; _j0++) {
            ms[_i0].msgin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = msgin_length(ms);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ms0; _aux++) {
          free(ms[_aux].msgin);
          }
          free(ms);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
